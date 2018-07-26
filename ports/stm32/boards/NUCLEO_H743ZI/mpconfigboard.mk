MCU_SERIES = h7
CMSIS_MCU = STM32H743xx
MICROPY_FLOAT_IMPL = double
AF_FILE = boards/stm32h743_af.csv
LD_FILES = boards/stm32h743.ld boards/common_ifs.ld
TEXT0_ADDR = 0x08000000
TEXT1_ADDR = 0x08040000
OPENOCD_CONFIG = boards/openocd_stm32h7.cfg
