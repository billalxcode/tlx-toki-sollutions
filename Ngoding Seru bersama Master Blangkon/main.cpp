#include <bits/stdc++.h>
#include <iostream>

int main() {
    int d[3],k;
    for (int i=0;i<3;i++) {
        std::cin >> d[i];
    }
    std::cin >> k;
    if (k==1) {
        std::sort(d, d+3);
    } else {
        std::sort(d, d+3,std::greater<int>());
    }
    for (int i=0;i<3;i++) {
        std::cout<<d[i]<<' ';
    }

    return 0;
}