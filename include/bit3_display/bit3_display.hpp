#ifndef BIT3_DISPLAY_HPP
#define BIT3_DISPLAY_HPP

#include "GPIO/interface/i_gpio.hpp"
#include "bit3_display/interface/i_bit3_display.hpp"

class Bit3Display : public IBit3Display {
   public:
    Bit3Display(IGPIO& bit0, IGPIO& bit1, IGPIO& bit2);

    void display(uint8_t value) override;

   private:
    IGPIO& _bit0;
    IGPIO& _bit1;
    IGPIO& _bit2;
};

#endif
