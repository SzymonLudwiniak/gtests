#ifndef I_BIT3_DISPLAY_HPP
#define I_BIT3_DISPLAY_HPP

#include <stdint.h>

class IBit3Display {
   public:
    virtual ~IBit3Display() = default;

    virtual void display(uint8_t value) = 0;
};

#endif
