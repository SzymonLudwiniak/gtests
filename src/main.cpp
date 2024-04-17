extern "C" {

#include <freertos/FreeRTOS.h>
#include <freertos/task.h>
#include <stdio.h>

#include "GPIO/esp32_gpio.hpp"

void app_main() {
    Esp32GPIO inBuiltLED(GPIO_NUM_2, GPIO_MODE_OUTPUT);
    while (1) {
        inBuiltLED.setLevel(1);
        vTaskDelay(1000 / portTICK_PERIOD_MS);
        inBuiltLED.setLevel(0);
        vTaskDelay(1000 / portTICK_PERIOD_MS);
    }
}
}
