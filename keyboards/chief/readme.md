# chief

chief is a 20 key macro pad with an inbuilt USB 2.0 hub and dual rotary encoders. It can be configured to be a left / right hand numberpad, along with a 4x5 1u layout.

For more information regarding the keyboard, please visit the [chief Website](https://www.joshajohnson.com/chief) or [GitHub Repo](https://github.com/joshajohnson/chief).

* Keyboard Maintainer: [Josh Johnson](https://github.com/joshajohnson)
* Hardware Supported: chief PCB (STM32F072)
* Hardware Availability: [Josh Johnson](https://www.joshajohnson.com/chief)

Make example for this keyboard (after setting up your build environment):

    make chief:default

Flashing example for this keyboard:

    make chief:default:flash

To reset the board into bootloader mode, do one of the following:

* Press the reset switch between the center two USB-C ports while the board is plugged in
* Hold the top left key while connecting the USB cable (also erases persistent settings)

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).
