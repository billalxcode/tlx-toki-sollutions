#include <iostream>

int main() {
    int n;
    int r;
    std::cin >> n;
    if (n%2==0) r = n*n;
    else r = (n*n-1);
    std::cout << r << std::endl;
    return 0;
}