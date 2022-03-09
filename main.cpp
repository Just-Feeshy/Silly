#include <iostream>
#include <map>

int main() {
    std::map<std::string, float> sillyMap;

    const char* who = "woman";

    sillyMap.insert(std::pair<std::string, float>("woman", 6.9f));
}