#include <iostream>

int main() {
    /**
     * N = baris
     * M = kolom
    */
    long n,m;
    std::cin >> n >> m;

    if (m == 1) {
        std::cout << (n-1) << std::endl;
    } else {
        std::cout << (n)*(m-1) << std::endl;
    }
    return 0;
}