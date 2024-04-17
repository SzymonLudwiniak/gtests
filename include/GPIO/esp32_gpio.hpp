#ifndef ESP32_GPIO_HPP
#define ESP32_GPIO_HPP

#include "GPIO/interface/i_gpio.hpp"
#include "driver/gpio.h"

class Esp32GPIO : public IGPIO {
   public:
    Esp32GPIO(gpio_num_t gpioNum, gpio_mode_t gpioMode);
    ~Esp32GPIO();

    bool setLevel(int level) override;
    int getLevel() override;

   private:
    gpio_num_t _gpioNum;
    gpio_mode_t _gpioMode;
};

#endif
