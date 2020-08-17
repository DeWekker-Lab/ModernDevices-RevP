# Modern Devices Rev P Notes

A project to build a 3D anemometer using these [Modern Device Rev P senors](https://moderndevice.com/product/wind-sensor-rev-p/) that were formerly used in an engineering capstone project [Wolf_DeWekker_2017.pdf](https://gitlab.com/de-wekker-lab/ModernDevices-RevP/-/blob/master/reference/Wolf_DeWekker_2017.pdf)

Will be mounted to a [vane mount](https://kestrelmeters.com/products/kestrel-rotating-vane-mount-carry-case-for-5000-series-1) to capture wind speed and direction from four sensors.

* * *

## Tasks
- [ ] Create BOM
- [ ] Measure [zero wind term](https://moderndevice.com/uncategorized/calibrating-rev-p-wind-sensor-new-regression/?preview=true)


* * *

## Sensor Requirements:
- 9-12 vdc from input into Arduino.
  - **12 vdc** is optimal.
- The sensor has build in voltage divider for both the temperature and the wind analog outputs.
- Analog read for temperature and wind speed.

* * *

## Parts List:

### Option 1
- Arduino Mega 2560: [Arduino](https://store.arduino.cc/usa/mega-2560-r3), [SparkFun](https://www.sparkfun.com/products/11061), or [Pololu](https://www.pololu.com/product/1699)
- Precision RTC DS3231: [Adafruit](https://learn.adafruit.com/adafruit-ds3231-precision-rtc-breakout)
- SD Card Board: [Adafruit](https://learn.adafruit.com/adafruit-micro-sd-breakout-board-card-tutorial)

### Option 2
- Arduino Mega 2560: [Arduino](https://store.arduino.cc/usa/mega-2560-r3), [SparkFun](https://www.sparkfun.com/products/11061), or [Pololu](https://www.pololu.com/product/1699)
- Data Logging Shield: [Adafruit](https://www.adafruit.com/product/1141) (uses PCF8523 which is not a temperature compensated RTC chip)

### Option 3
- Seeeduino Stalker
- ADC from [Adafruit](https://learn.adafruit.com/adafruit-4-channel-adc-breakouts/overview) or [SparkFun](https://www.sparkfun.com/products/15334)

### Accessories
- [12V Step-Up/Step-Down Regulator](https://www.pololu.com/product/2577)
<<<<<<< HEAD

### From lab
- Protoboard
- Wires
- 3S LiPo battery (optional)
- LiPi battery charger (optional)
- RTC battery
- SD card
=======
>>>>>>> parent of 9ec9526... added from lab section
