// #define MICROPY_BOARD_EARLY_INIT    STM32L476DISC_board_early_init
// void STM32L476DISC_board_early_init(void);

#define MICROPY_HW_BOARD_NAME       "B-L475E-IOT01A"
#define MICROPY_HW_MCU_NAME         "STM32L475"

#define MICROPY_HW_HAS_SWITCH       (1)
#define MICROPY_HW_HAS_FLASH        (0) // ADD when QUAD SPI is done
#define MICROPY_HW_HAS_SDCARD       (0)
#define MICROPY_HW_HAS_MMA7660      (0)
#define MICROPY_HW_HAS_LIS3DSH      (0)
#define MICROPY_HW_HAS_LCD          (0)
#define MICROPY_HW_ENABLE_RNG       (1)
#define MICROPY_HW_ENABLE_RTC       (1)
#define MICROPY_HW_ENABLE_TIMER     (1)
#define MICROPY_HW_ENABLE_SERVO     (0)
#define MICROPY_HW_ENABLE_DAC       (0)
#define MICROPY_HW_ENABLE_CAN       (0)

// use external SPI flash for storage TODO: Is quad flash How to define it?
//#define MICROPY_HW_SPIFLASH_SIZE_BITS (64 * 1024 * 1024)
//#define MICROPY_HW_SPIFLASH_CS      (pin_E11)
//#define MICROPY_HW_SPIFLASH_SCK     (pin_E10)
//#define MICROPY_HW_SPIFLASH_MOSI    (pin_E12)
//#define MICROPY_HW_SPIFLASH_MISO    (pin_E13)

// MSI is used and is 4MHz
#define MICROPY_HW_CLK_PLLM (1)
#define MICROPY_HW_CLK_PLLN (40)
#define MICROPY_HW_CLK_PLLP (RCC_PLLP_DIV7)
#define MICROPY_HW_CLK_PLLR (RCC_PLLR_DIV2)
#define MICROPY_HW_CLK_PLLQ (RCC_PLLQ_DIV4)

#define MICROPY_HW_FLASH_LATENCY    FLASH_LATENCY_4

// USART1 config connected to ST-Link
#define MICROPY_HW_UART1_TX     (pin_B6)
#define MICROPY_HW_UART1_RX     (pin_B7)
// USART2 config connected to PMOD
#define MICROPY_HW_UART2_TX     (pin_D5)
#define MICROPY_HW_UART2_RX     (pin_D6)
// USART3 config for internal use
#define MICROPY_HW_UART3_TX     (pin_D8)
#define MICROPY_HW_UART3_RX     (pin_D9)
// USART4 config 
#define MICROPY_HW_UART4_TX     (pin_A0)
#define MICROPY_HW_UART4_RX     (pin_A1)
// USART 1 is connected to the virtual com port on the ST-LINK
#define MICROPY_HW_UART_REPL        PYB_UART_1
#define MICROPY_HW_UART_REPL_BAUD   115200

// I2C busses
#define MICROPY_HW_I2C1_SCL (pin_B8)
#define MICROPY_HW_I2C1_SDA (pin_B9)
#define MICROPY_HW_I2C2_SCL (pin_B10)
#define MICROPY_HW_I2C2_SDA (pin_B11)

// SPI busses
// #define MICROPY_HW_SPI1_NSS     (pin_A4) 
#define MICROPY_HW_SPI1_SCK     (pin_A5)
#define MICROPY_HW_SPI1_MISO    (pin_A6)
#define MICROPY_HW_SPI1_MOSI    (pin_A7)

//#define MICROPY_HW_SPI3_NSS     (pin_A15)
#define MICROPY_HW_SPI3_SCK     (pin_C10)
#define MICROPY_HW_SPI3_MISO    (pin_C11)
#define MICROPY_HW_SPI3_MOSI    (pin_C12)

// Joystick is pulled low. Pressing the button makes the input go high.
#define MICROPY_HW_USRSW_PIN        (pin_C13)
#define MICROPY_HW_USRSW_PULL       (GPIO_NOPULL)
#define MICROPY_HW_USRSW_EXTI_MODE  (GPIO_MODE_IT_RISING)
#define MICROPY_HW_USRSW_PRESSED    (1)

// LEDs
#define MICROPY_HW_LED1             (pin_A5) // red
#define MICROPY_HW_LED2             (pin_B14) // green
#define MICROPY_HW_LED_ON(pin)      (mp_hal_pin_high(pin))
#define MICROPY_HW_LED_OFF(pin)     (mp_hal_pin_low(pin))

// USB config
// #define MICROPY_HW_USB_OTG_ID_PIN      (pin_C12) // This is not the official ID Pin which should be PA10
