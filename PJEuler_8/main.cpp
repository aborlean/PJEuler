#include <iostream>

using namespace std;

int v[1001];

int main(void)
{
    long long p, pmax = -1;
    char a;

    v[0] = 1;

    for(int i = 1; i <= 1000; i++) {
        cin >> a;
        v[i] = a - 48;
    }

    for(int i = 1; i <= 988; i++) {
        p = 1;
        for(int j = 0; j <= 12; j++)
            p *= v[i + j];
        pmax = max(pmax, p);
    }

    cout << pmax;

    return 0;
}