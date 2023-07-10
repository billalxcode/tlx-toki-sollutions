#include <iostream>

int main() {
    /**
     * N = soal yang benar (pilihan ganda)
     * M = soal yang benar (isian singkat)
     * X = soal yang salah (pilihan ganda)
     * Y = soal yang salah (isian singkat)
     * 
    */
    int n,m,x,y;
    std::cin >> n >> m >> x >> y;
    int tn = (n-x) + (m-y) * 2;
    if (tn > 25) {
        std::cout << "LOLOS" << std::endl;
    } else {
        std::cout << "TIDAK LOLOS" << std::endl;
    }
    return 0;
}