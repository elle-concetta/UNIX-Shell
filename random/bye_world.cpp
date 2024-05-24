#include <iostream>
#include <functional>

int main(int argc, char* argv[]) {
    auto out = std::ref(std::cout << "Bye ");
    out.get() << "C++\n";

    return 0;
}
