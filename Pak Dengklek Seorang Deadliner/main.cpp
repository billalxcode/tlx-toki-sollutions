#include <iostream>

using namespace std;

int main() {
    int n, second, hour, minute;

    cin >> n;

    minute = n / 60;
    second = n % 60;
    hour = minute / 60;
    minute = minute % 60;
    
    cout << hour << endl;
    cout << minute << endl;
    cout << second << endl;
    return 0;
}