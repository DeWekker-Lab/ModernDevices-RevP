/* A demo sketch for the Modern Device Rev P Wind Sensor
* Requires a Wind Sensor Rev P from Modern Device
* http://moderndevice.com/product/wind-sensor-rev-p/
*
* The Rev P requires at least at least an 8 volt supply. The easiest way to power it
* if you are using an Arduino is to use a 9 volt or higher supply on the external power jack
* and power the sensor from Vin.
*
* Hardware hookup
* Sensor Arduino Pin
* Ground Ground
* +10-12V Vin
* Out A0
* TMP A2
*
* Paul Badger 2014
* code in the public domain
**************************************************
* Adapted for 6 sensors by Rafael Moya & Daniel Prohasky 06/2015
*/

const int OutPin[6] = {A0, A2, A4, A6, A8}; // 6 wind sensor analog pin hooked up to Wind P sensor “OUT” pin
const int TempPin[6] = {A1, A3, A5, A7, A9}; // 6 temp sesnsor analog pin hooked up to Wind P sensor “TMP” pin

void setup(){
Serial.begin(9600);

}

void loop(){

// wind formula derived from a wind tunnel data, annemometer and some fancy Excel regressions
// this scalin doesn’t have any temperature correction in it yet

for (int i=0; i<6; i++){
int windADunits = analogRead(OutPin[i]);
float windMPH = pow((((float)windADunits – 264.0) / 85.6814), 3.36814);
Serial.print(windMPH);
Serial.print(“,”);
//Serial.print(” MPH\t”);
// temp routine and print raw and temp C
}
for (int i=0; i<6; i++){
int tempRawAD = analogRead(TempPin[i]);
// Serial.print(“RT “); // print raw A/D for debug
// Serial.print(tempRawAD);
// Serial.print(“\t”);

// convert to volts then use formula from datatsheet
// Vout = ( TempC * .0195 ) + .400
// tempC = (Vout – V0c) / TC see the MCP9701 datasheet for V0c and TC

float tempC = ((((float)tempRawAD * 5.0) / 1024.0) – 0.400) / .0195;
Serial.print(tempC);
Serial.print(“,”);
//Serial.print(” C\t”);
//Serial.print(“\t”);
}
Serial.println();

delay(750);
}
