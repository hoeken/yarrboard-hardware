#ifndef _CONFIG_H_8CH_MOSFET_REVA
#define _CONFIG_H_8CH_MOSFET_REVA

#define YB_HARDWARE_VERSION "8CH-MOSFET-REV-A"

#define YB_HAS_PWM_CHANNELS
#define YB_OUTPUT_CHANNEL_COUNT 8
#define YB_OUTPUT_CHANNEL_PINS { 32, 33, 25, 26, 27, 14, 12, 13 }
#define YB_OUTPUT_CHANNEL_PWM_FREQUENCY 1000
#define YB_OUTPUT_CHANNEL_PWM_RESOLUTION 10
#define YB_OUTPUT_CHANNEL_ADC_DRIVER_MCP3208
#define YB_OUTPUT_CHANNEL_ADC_CS 17

#define YB_HAS_BUS_VOLTAGE
#define YB_BUS_VOLTAGE_ESP32
#define YB_BUS_VOLTAGE_R1 100000.0
#define YB_BUS_VOLTAGE_R2 10000.0
#define YB_BUS_VOLTAGE_PIN 36

#define YB_HAS_FANS
#define YB_FAN_COUNT 1
#define YB_FAN_PWM_PINS {16}
#define YB_FAN_TACH_PINS {39}
#define YB_FAN_SINGLE_CHANNEL_AMPS 5.0
#define YB_FAN_AVERAGE_CHANNEL_AMPS 5.0
#define YB_FAN_MAX_CHANNEL_AMPS 20.0


#endif // _CONFIG_H_8CH_MOSFET_REVA