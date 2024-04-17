#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include "bit3_display/bit3_display.hpp"

class MockGPIO : public IGPIO {
   public:
    MOCK_METHOD(bool, setLevel, (int level), (override));
    MOCK_METHOD(int, getLevel, (), (override));
};
