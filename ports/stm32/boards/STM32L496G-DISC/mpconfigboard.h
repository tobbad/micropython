#define MICROPY_HW_BOARD_NAME       "L496G-DISCO"
#define MICROPY_HW_MCU_NAME         "STM32L496"

#define MICROPY_HW_HAS_SWITCH       (1)
#define MICROPY_HW_HAS_FLASH        (0)
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

// use external SPI flash for storage
//#define MICROPY_HW_SPIFLASH_SIZE_BITS (128 * 1024 * 1024)
//#define MICROPY_HW_SPIFLASH_CS      (pin_E11)
//#define MICROPY_HW_SPIFLASH_SCK     (pin_E10)
//#define MICROPY_HW_SPIFLASH_MOSI    (pin_E12)
//#define MICROPY_HW_SPIFLASH_MISO    (pin_E13)

// MSI is used and is 4MHz
#define MICROPY_HW_CLK_PLLM (1)
#define MICROPY_HW_CLK_PLLN (8)
#define MICROPY_HW_CLK_PLLP (RCC_PLLP_DIV7)
#define MICROPY_HW_CLK_PLLR (RCC_PLLR_DIV2)
#define MICROPY_HW_CLK_PLLQ (RCC_PLLQ_DIV2)

#define MICROPY_HW_FLASH_LATENCY    FLASH_LATENCY_4

// USART config
#define MICROPY_HW_UART2_TX     (pin_A2)
#define MICROPY_HW_UART2_RX     (pin_D6)
// USART 2 is connected to the virtual com port on the ST-LINK
#define MICROPY_HW_UART_REPL        PYB_UART_2
#define MICROPY_HW_UART_REPL_BAUD   115200

// I2C busses
#define MICROPY_HW_I2C1_SCL (pin_G14)
#define MICROPY_HW_I2C1_SDA (pin_G13)
#define MICROPY_HW_I2C2_SCL (pin_H4)
#define MICROPY_HW_I2C2_SDA (pin_B14)

// SPI busses
// #define MICROPY_HW_SPI2_NSS     (pin_D0)
///#define MICROPY_HW_SPI2_SCK     (pin_D1)
// #define MICROPY_HW_SPI2_MISO    (pin_D3)
// #define MICROPY_HW_SPI2_MOSI    (pin_D4)

// Use Sel from joystick. Joystick is pulled low. Pressing the button makes the input go high.
#define MICROPY_HW_USRSW_PIN        (pin_C13)
#define MICROPY_HW_USRSW_PULL       (GPIO_NOPULL)
#define MICROPY_HW_USRSW_EXTI_MODE  (GPIO_MODE_IT_RISING)
#define MICROPY_HW_USRSW_PRESSED    (1)

// LEDs
#define MICROPY_HW_LED1             (pin_B13) // Green
#define MICROPY_HW_LED_ON(pin)      (mp_hal_pin_low(pin))
#define MICROPY_HW_LED_OFF(pin)     (mp_hal_pin_high(pin))
