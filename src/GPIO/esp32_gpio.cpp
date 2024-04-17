#include "GPIO/esp32_gpio.hpp"

Esp32GPIO::Esp32GPIO(gpio_num_t gpioNum, gpio_mode_t gpioMode) : _gpioNum(gpioNum), _gpioMode(gpioMode) {
    gpio_set_direction(_gpioNum, _gpioMode);
}

Esp32GPIO::~Esp32GPIO() {
    gpio_reset_pin(_gpioNum);
}

bool Esp32GPIO::setLevel(int level) {
    if (_gpioMode == gpio_mode_t::GPIO_MODE_INPUT) {
        return false;
    }
    gpio_set_level(_gpioNum, level);
    return true;
}

int Esp32GPIO::getLevel() {
    return gpio_get_level(_gpioNum);
}
