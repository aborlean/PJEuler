#include <iostream>

using namespace std;

unsigned long long v[21][21];

int main(void)
{
    for(int i = 0; i <= 20; i++) {
        v[0][i] = 1;
        v[i][0] = 1;
    }

    for(int i = 1; i <= 20; i++)
        for(int j = 1; j <= 20; j++)
            v[i][j] = v[i - 1][j] + v[i][j - 1];

    cout << v[20][20];

    return 0;
}