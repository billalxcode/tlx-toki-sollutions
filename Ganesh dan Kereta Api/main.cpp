#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << a[n-1];

    for (int x = n-2; x >= 0; x--) {
        cout << "," << a[x];
    }
    return 0;
}