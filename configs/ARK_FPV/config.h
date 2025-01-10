/*
 * This file is part of Betaflight.
 *
 * Betaflight is free software. You can redistribute this software
 * and/or modify this software under the terms of the GNU General
 * Public License as published by the Free Software Foundation,
 * either version 3 of the License, or (at your option) any later
 * version.
 *
 * Betaflight is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 *
 * See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public
 * License along with this software.
 *
 * If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#define FC_TARGET_MCU     STM32H743
#define SYSTEM_HSE_MHZ    16
#define BOARD_NAME        ARK_FPV
#define MANUFACTURER_ID   ARK

#define USE_GYRO
#define USE_GYRO_SPI_IIM42653
#define USE_ACC
#define USE_ACC_SPI_IIM42653
#define USE_BARO
#define USE_BARO_BMP388 // TODO: BMP390 is the same?
#define USE_MAG
#define USE_MAG_IIS2MDC


#define BEEPER_PIN           PF9

#define TARGET_IO_PORTH      0xffff
#define TARGET_IO_PORTI      0xffff

#define MOTOR1_PIN           PI0
#define MOTOR2_PIN           PH12
#define MOTOR3_PIN           PH11
#define MOTOR4_PIN           PH10
#define MOTOR5_PIN           PI5
#define MOTOR6_PIN           PI6
#define MOTOR7_PIN           PI7
#define MOTOR8_PIN           PI2
// #define MOTOR9_PIN           PD12 // TODO: 9 outputs, how to configure?
// #define LED_STRIP_PIN        PD12
#define UART1_TX_PIN         PB6
#define UART2_TX_PIN         PD5
#define UART3_TX_PIN         PD8
#define UART4_TX_PIN         PH13
#define UART5_TX_PIN         PC12
#define UART6_TX_PIN         PC6
#define UART7_TX_PIN         PE8
#define UART1_RX_PIN         PB7
#define UART2_RX_PIN         PA3
#define UART3_RX_PIN         PD9
#define UART4_RX_PIN         PH14
#define UART5_RX_PIN         PD2
#define UART6_RX_PIN         PC7
#define UART7_RX_PIN         PF6

#define UART7_RTS_PIN        PF8
#define UART7_CTS_PIN        PE10

#define I2C1_SCL_PIN         PB8
#define I2C1_SDA_PIN         PB9
#define I2C2_SCL_PIN         PF1
#define I2C2_SDA_PIN         PF0
#define I2C4_SCL_PIN         PF14
#define I2C4_SDA_PIN         PF15

#define LED0_PIN             PE5
#define LED1_PIN             PE4
#define LED2_PIN             PE3

#define USE_SPI
#define USE_SPI_DEVICE_1
#define SPI1_SCK_PIN         PA5
#define SPI1_SDI_PIN         PG9
#define SPI1_SDO_PIN         PB5

#define SPI6_SCK_PIN         PB3
#define SPI6_SDI_PIN         PA6
#define SPI6_SDO_PIN         PG14

// We have some enable signals that need to be set
#define VDD_3V3_SENSORS1_EN  PI11
#define PERIPH_12V_EN        PG4
#define VDD_3V3_SD_CARD_EN   PC13

// SD card
#define USE_SDCARD
#define USE_SDCARD_SDIO
#define SDIO_DEVICE         SDIODEV_2
#define SDIO_USE_4BIT       false
#define SDIO_CK_PIN         PD6    // SDMMC2_CK
#define SDIO_CMD_PIN        PD7    // SDMMC2_CMD
#define SDIO_D0_PIN         PB14   // SDMMC2_D0
#define SDIO_D1_PIN         PB15   // SDMMC2_D1
#define SDIO_D2_PIN         PG11   // SDMMC2_D2
#define SDIO_D3_PIN         PB4    // SDMMC2_D3
#define DEFAULT_BLACKBOX_DEVICE      BLACKBOX_DEVICE_SDCARD

#define ADC_VBAT_PIN         PB0
#define ADC_CURR_PIN         PC2

#define GYRO_1_EXTI_PIN      PF2
#define GYRO_1_CS_PIN        PI9
#define USB_DETECT_PIN       PA9

#define DEFAULT_GPIO_ARRAY \
    DEFAULT_GPIO_CONFIG(VDD_3V3_SENSORS1_EN, IOCFG_OUT_PP, 1), \
    DEFAULT_GPIO_CONFIG(PERIPH_12V_EN,       IOCFG_OUT_PP, 1), \
    DEFAULT_GPIO_CONFIG(VDD_3V3_SD_CARD_EN,  IOCFG_OUT_PP, 1), \

// TODO: 3v3 adc measurement
// TODO: 12v pgood
// TODO: 5v pgood
// TODO: 5v on_bat_n
// TODO: configure all IO to OUTPUT LOW PULLDOWN (see ardupilot DEFAULTGPIO)
// TODO: heater resistor timer

// TODO: I have no idea what the last 2 options do
#define TIMER_PIN_MAPPING \
    TIMER_PIN_MAP( 0, MOTOR1_PIN        , 1,  -1) \
    TIMER_PIN_MAP( 1, MOTOR2_PIN        , 1,  -1) \
    TIMER_PIN_MAP( 2, MOTOR3_PIN        , 1,  -1) \
    TIMER_PIN_MAP( 3, MOTOR4_PIN        , 1,  -1) \
    TIMER_PIN_MAP( 4, MOTOR5_PIN        , 1,  -1) \
    TIMER_PIN_MAP( 5, MOTOR6_PIN        , 1,  -1) \
    TIMER_PIN_MAP( 6, MOTOR7_PIN        , 1,  -1) \
    TIMER_PIN_MAP( 7, MOTOR8_PIN        , 1,  -1)

// TODO: I have no idea what these DMA options mean
// #define SPI1_TX_DMA_OPT             13
// #define ADC1_DMA_OPT                 8
// #define ADC3_DMA_OPT                 9
// #define TIMUP1_DMA_OPT               0
// #define TIMUP2_DMA_OPT               0
// #define TIMUP3_DMA_OPT               2
// #define TIMUP4_DMA_OPT               0
// #define TIMUP5_DMA_OPT               3
// #define TIMUP8_DMA_OPT               1

#define BARO_I2C_INSTANCE            I2CDEV_2
#define MAG_I2C_INSTANCE             I2CDEV_4

// #define DEFAULT_DSHOT_BURST          DSHOT_DMAR_ON
#define DEFAULT_CURRENT_METER_SOURCE CURRENT_METER_ADC
#define DEFAULT_VOLTAGE_METER_SOURCE VOLTAGE_METER_ADC
// TODO: determine scale -- note this does not line up between ardu/bf board ports
#define DEFAULT_VOLTAGE_METER_SCALE  109
#define DEFAULT_CURRENT_METER_SCALE  168

#define GYRO_1_SPI_INSTANCE          SPI1
#define GYRO_1_ALIGN                 CW270_DEG
#define GYRO_1_ALIGN_YAW             2700

#define MSP_UART SERIAL_PORT_UART3

