#include "frobiac.h"
#include "trackpoint.h"

#ifdef PS2_MOUSE_ENABLE

#    include "ps2_mouse.h"
#    include "ps2.h"
#    include "gpio.h"

#    if defined(PS2_RESET_PIN)

/**
 *  If the recommended reset circuitry is not attached to trackpoints reset line,
 *  it is possible do simulate it with a regular GPIO.
 *
 *  To be called just before `ps2_host_init()`. The necessary 500ms delay is included.
 *
 *  Hook up in keyboard_init() just before ps2_mouse_init(), e.g. keyboard_pre_init_user()
 */
void tp_reset() {
    setPinOutput(PS2_RESET_PIN);
    writePinHigh(PS2_RESET_PIN);
    wait_us(150); // PS2_DELAY
    writePinLow(PS2_RESET_PIN);
    wait_ms(500); // wait for power up
    // now ready to call ps2_host_init()
}
#    endif // PS2_RESET_PIN

#    define TP_COMMAND 0xE2
#    define TP_WRITE_MEM 0x81
#    define TP_SENS 0x4A
#    define TP_INERTIA 0x4D
#    define TP_THRESH 0x5C /* Minimum value for a Z-axis press */
#    define TP_SPEED 0x60
#    define TP_TOGGLE_PTSON 0x2C

// convenience function to set trackpoint registers
void tp_ram_write(uint8_t addr, uint8_t val) {
    ps2_host_send(TP_COMMAND);
    ps2_host_send(TP_WRITE_MEM);
    ps2_host_send(addr);
    ps2_host_send(val);
}

// More responsive trackpoint settings
void ps2_mouse_init_user() {
    // sensitivity, speed
    tp_ram_write(TP_SENS, 0xE0);
    tp_ram_write(TP_SPEED, 0xE0);
    tp_ram_write(TP_THRESH, 0x10);

    // axes and PtS config
    // tp_ram_write(TP_TOGGLE_PTSON, g_cfg.tp_axis.raw);

    // setup PressToSroll by enabling PTS, setting button masks and increasing threshold
    // tp_ram_write(0x41, 0xff);
    // tp_ram_write(0x42, 0xff);
}
#endif
