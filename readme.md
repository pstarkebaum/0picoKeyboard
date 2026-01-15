what we did here
we added another key to all files.
keyboard.json added another row pin and a row to LAYOUT
added a key to both keymap.c in default and vial directories
added row to keymap in vial.json from KLE and +1 row in matrix
got a layout undefined error so added 0pico.h with #define LAYOUT 


# 0pico


![0pico](imgur.com image replace me!)

*A short description of the keyboard/project*

* Keyboard Maintainer: [Paul](https://github.com/Paul)
* Hardware Supported: *The PCBs, controllers supported*
* Hardware Availability: *Links to where you can find this hardware*

Make example for this keyboard (after setting up your build environment):

    make 0pico:default

Flashing example for this keyboard:

    make 0pico:default:flash

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader in 3 ways:

* **Bootmagic reset**: Hold down the key at (0,0) in the matrix (usually the top left key or Escape) and plug in the keyboard
* **Physical reset button**: Briefly press the button on the back of the PCB - some may have pads you must short instead
* **Keycode in layout**: Press the key mapped to `QK_BOOT` if it is available
