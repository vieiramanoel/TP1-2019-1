#include <domains/CardNumber.hpp>
#include <gtest/gtest.h>
#include <stdexcept>
#include <string>
// Testes
TEST(CardNumberTest, FormatValid) {
    ASSERT_THROW(CardNumber("1234123123123444"), std::invalid_argument)
        << "Boa1";
}
TEST(CardNumberTest, FormatValidWrongSequence) {
    ASSERT_THROW(CardNumber("4040404044000222"), std::invalid_argument)
        << "Não eh para eu aparecer";
}

TEST(CardNumberTest, FormatInvalid) {
    ASSERT_THROW(CardNumber("12929229"), std::invalid_argument)
        << "Não eh para eu aparecer";
}

// Ludum Dare
