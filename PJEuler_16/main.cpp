#include <iostream>

using namespace std;

int v[351];

int main(void)
{
    int s = 0;

    v[350] = 1;

    for(int i = 1; i <= 1000; i++) {
        for(int j = 1; j <= 350; j++)
            v[j] *= 2;
        for(int j = 350; j >= 1; j--)
            if(v[j] >= 10) {
                v[j - 1] += v[j] / 10;
                v[j] %= 10;
            }
    }

    for(int i = 1; i <= 350; i++)
        s += v[i];

    cout << s;
    
    return 0;
}