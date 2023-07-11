#include <iostream>

int main() {
    int n;
    std::cin >> n;
    if (n%10!=0)
        std::cout << "Neb" << std::endl;
    else
        std::cout << "Rep" << std::endl;

    return 0;
}