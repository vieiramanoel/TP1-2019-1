#include <domains/TicketCode.hpp>

TicketCode::TicketCode(std::string passCode) { setCode(passCode); }

void TicketCode::setCode(std::string code) {
    std::regex code_regex("([0-9])\\w{4}");
    std::smatch match;

    if (std::regex_match(code, match, code_regex)) {
        this->code = code;
    } else {
        throw std::invalid_argument("Event code must be like XXX");
    }
}