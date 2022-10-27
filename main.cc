#include <iostream>
#include "ffi.h"

int main() {
    Foo value;
    value.array = nullptr;
    init_foo(&value);

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            std::cout << value.array[i][j] << ", ";
        }
        std::cout << std::endl;
    }

    return 0;
}
