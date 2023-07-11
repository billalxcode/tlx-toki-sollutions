#include <iostream>
#define l long
#define ll long long

int main() {
    /**
     * A = baris data
     * N = jumlah data
     * Z = bilangan positif
    */
    int n,a;
    std::cin>>n;
    l z = 1;

    for (int i = 0; i<n;i++) {
        std::cin>>a;
        z *= a;
        z %= 998244353;
    }
    std::cout << z << std::endl;
    return 0;
}