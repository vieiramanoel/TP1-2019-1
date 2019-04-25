#include <domains/EventType.hpp>

EventType::EventType(std::string typeName) {
    evType =
        std::unordered_map<std::string, std::int>{{"TEATRO", 1},
                                                  {"ESPORTE", 2},
                                                  {"SHOW NACIONAL", 3},
                                                  {"SHOW INTERNACIONAL", 4}};
    type = evType[typename];
}
