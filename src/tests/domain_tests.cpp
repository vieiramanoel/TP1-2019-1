#include <domains/tests/Availability_test.hpp>
#include <domains/tests/EventCode_test.hpp>
#include <domains/tests/EventName_test.hpp>
#include <domains/tests/PassportCode_test.hpp>
#include <domains/tests/PresentationCode_test.hpp>
#include <domains/tests/Price_test.hpp>
#include <domains/tests/Room_test.hpp>
#include <domains/tests/Ticket_test.hpp>
#include <gtest/gtest.h>

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}