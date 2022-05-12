#include <iostream>

using namespace std;

int v[52];

int main(void)
{
    int c;
    char a;

    for(int i = 1; i <= 100; i++)
        for(int j = 1; j <= 50; j++) {
            cin >> a;
            c = a - '0';
            v[j] += c;
        }

    for(int i = 50; i >= 1; i--)
        if(v[i] > 10) {
            v[i - 1] += v[i] / 10;
            v[i] %= 10;
        }

    if(v[0] < 10)
        for(int i = 0; i <= 9; i++)
            cout << v[i];
    else if(v[0] < 100)
        for(int i = 0; i <= 8; i++)
            cout << v[i];
    else
        for(int i = 0; i <= 7; i++)
            cout << v[i];

    return 0;
}