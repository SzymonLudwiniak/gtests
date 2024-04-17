#include "bit3_display/bit3_display.hpp"

Bit3Display::Bit3Display(IGPIO& bit0, IGPIO& bit1, IGPIO& bit2) : _bit0(bit0), _bit1(bit1), _bit2(bit2) {}

void Bit3Display::display(uint8_t value) {
    if (value > 7) {
        return;
    }

    if (value & 0b100) {
        _bit2.setLevel(1);
    } else {
        _bit2.setLevel(0);
    }

    if (value & 0b010) {
        _bit1.setLevel(1);
    } else {
        _bit1.setLevel(0);
    }

    if (value & 0b001) {
        _bit0.setLevel(1);
    } else {
        _bit0.setLevel(0);
    }
}
