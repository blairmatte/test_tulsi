#include "fmt/format.h"

int main(int argc, char* argv[]) {
    fmt::print("Program args");
    for (int i = 0; i < argc; ++i) {
        fmt::print("{}: {}", i, argv[i]);
    }
}
