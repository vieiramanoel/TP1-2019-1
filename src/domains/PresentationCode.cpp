#include <domains/PresentationCode.hpp>

PresentationCode::PresentationCode(std::string presCode) {
    setPresentationCode(presCode);
}

void PresentationCode::setPresentationCode(std::string code) {
    std::regex code_regex("^[0-9]{4}");
    std::smatch match;

    if (std::regex_match(code, match, code_regex)) {
        this->code = code;
    } else {
        /** Regex Format verification*/
        throw std::invalid_argument("PresentationCode must be like XXXX");
    }
}

std::string PresentationCode::getPresentationCode() { return this->code; }