#include <iostream>
using namespace std;

int main() {
    int n=0, a=1, b=1, f=0;
    cin >> n;
    cout << a << endl << b << endl;
    while (f<n) {
        f = a + b;
        a = b;
        b = f;
        cout << f << endl;
    }
    return 0;
}
