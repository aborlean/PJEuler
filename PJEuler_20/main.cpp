#include <iostream>

using namespace std;

int v[201];

int main(void)
{
    int s = 0, p = 200;
    v[200] = 1;

    for(int i = 2; i <= 100; i++) {
        for(int j = 200; j >= p; j--)
            v[j] *= i;
        for(int j = 200; j >= p - 2; j--)
            if(v[j] >= 10) {
                v[j - 1] += v[j] / 10;
                v[j] %= 10;
            }
        if(v[p - 2])
            p -= 2;
        else if(v[p - 1])
            p--;
    }

    for(int i = 1; i <= 200; i++)
        s += v[i];

    cout << s;

    return 0;
}