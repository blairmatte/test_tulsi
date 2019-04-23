#include <cstdio>
#include <string>
#include <vector>
#include <spdlog/spdlog.h>

int main(int argc, char* argv[]) {
    std::vector<std::string> arguments;
    for (int i = 0; i < argc; ++i) {
        arguments.push_back(std::string(argv[i]));
    }
    spdlog::info("Program args");
    for (const auto &arg : arguments) {
        spdlog::info("> {}", arg);
    }
}
