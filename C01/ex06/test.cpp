#include <iostream>

int main() {
    int x = 3;

    switch(x) {
        case 1:
            std::cout << "x is 1" << std::endl;
            break;
        case 2:
            std::cout << "x is 2" << std::endl;
            break;
        case 3:
            std::cout << "x is 3" << std::endl;
            break;
        default:
            std::cout << "x is not 1, 2, or 3" << std::endl;
    }

    return 0;
}
