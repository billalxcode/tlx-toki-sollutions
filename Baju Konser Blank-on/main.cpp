#include <iostream>

int main() {
    int b, p, l;
    std::cin >> b >> p >> l;
    if (b<=10&&p<=40&&l<=90) {
        std::cout << "S";
    } else if (b<=14&&p<=60&&l<=120) {
        std::cout << "M";
    } else if (b<=18&&p<=80&&l<=180) {
        std::cout << "L";
    } else {
        std::cout << "X";
    }
    return 0;
}