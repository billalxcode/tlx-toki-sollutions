#include <iostream>

using namespace std;

int main() {
    int masukan;
    cin >> masukan;

    if (masukan < -1) {
        cout << "TIDAK" << endl;
    } else if (masukan > 0) {
        cout << "YA" << endl;
    }
    
    return 0;
}