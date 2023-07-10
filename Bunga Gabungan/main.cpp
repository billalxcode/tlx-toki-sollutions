#include <math.h>
#include <iostream>

int main() {
    int p;
    int q;
    int bunga=0;
    std::cin >> p >> q;
    bunga += std::pow(p, 2); // hari pertama
    bunga += std::pow(q, 2); // hari kedua
    bunga += 1; // hari kedua
    int sisa = bunga % 4;
    if (sisa == 0) {
        std::cout << sisa << std::endl;
    } else {
        std::cout << -1 << std::endl;
    }

    return 0;
}