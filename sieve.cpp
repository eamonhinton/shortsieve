#include <iostream>
using namespace std;
int main() {
    int n = 10000000;
    bool p[n+1] = {};
    for (int i = 2; i <= n; i++) if (!p[i]) {
        for (int j = i * 2; j <= n; j += i) p[j] = 1;
        cout << i << " ";
    }
}
