#include <bits/stdc++.h>
#include <iostream>

#define ll long long

int main() {
    /**
     * N = jumlah botol ajaib
     * M = tinggi pohon
     * K = pertumbuhan pohon
     * A = isi botol
    */
    ll jml, tinggi, tumbuh;
    std::cin >> jml >> tinggi >> tumbuh;
    ll botols[jml];

    // masukan isi botol
    for (int x = 0; x < jml; x++) {
        std::cin >> botols[x];
    }

    std::sort(botols, botols+jml);
    int h = tinggi + tumbuh;
    int berhasil = 0;
    for (int i = 0; i < jml; i++) {
        if (botols[i] > h) {
            h=botols[i]+tumbuh;
            berhasil++;
        }
    }

    std::cout << berhasil << std::endl;
    return 0;
}