#include <iostream>

int main() {
    int n;
    std::cin >> n;
    if (n>=0 && n<=100) {
        std::cout << "YA" << std::endl;
    } else {
        std::cout << "TIDAK" << std::endl;
    }

    return 0;
}