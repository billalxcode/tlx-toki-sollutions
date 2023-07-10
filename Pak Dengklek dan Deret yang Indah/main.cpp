#include <iostream>

using namespace std;

int main() {
    int s = 0, n, d;
    cin >> s;
    cin >> n;
    cin >> d;

    for (int i = 0; i < n; i++) {
        cout << s << endl;
        s += d;
    }

    return 0;
}