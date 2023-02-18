# This file intentionally left blank
# MCU name
MCU = atmega32u4

# Bootloader selection
BOOTLOADER = halfkay

PS2_MOUSE_ENABLE = yes
PS2_ENABLE = yes
# [busywait|interrupt|usart] https://docs.qmk.fm/#/feature_ps2_mouse
# usart needs pins D2 and D5 on QMK?
# Maybe fix reset code
PS2_DRIVER = busywait

# required if keymap is not named the same as userspace to use
# USER_NAME := frobiac

# NO_PRINT = yes
# NO_DEBUG = yes
# DEBUG_ENABLE = no

# Now in info.json, override here
#
# CONSOLE_ENABLE = no
# COMMAND_ENABLE = no
#
# RGBLIGHT_ENABLE = no
# BACKLIGHT_ENABLE = no
# BOOTMAGIC_ENABLE = no
#
# MOUSEKEY_ENABLE = yes
# EXTRAKEY_ENABLE = yes

