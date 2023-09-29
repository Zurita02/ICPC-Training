#include <iostream>
using namespace std;

int w, h, n;

bool good(int m) {
    int posibles = (m / w) * (m / h);
    return posibles >= n;
}

void cuadrados() {
    long long l = 0, r = 100;  

    while (r > l +1) {
        long long m = (r + l) / 2;

        if (good(m)) {
            r = m;  
        } else {
            l = m;  
        }
    }

    cout << r;  
}

int main() {
    cin >> w >> h >> n;
    cuadrados();
    return 0;
}
