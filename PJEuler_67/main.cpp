#include <iostream>

using namespace std;

int v[101][101];

int main(void)
{
    for(int i = 1; i <= 100; i++)
        for(int j = 1; j <= i; j++)
            cin >> v[i][j];

    for(int i = 99; i >= 1; i--)
        for(int j = 1; j <= i; j++)
            if(v[i + 1][j] > v[i + 1][j + 1])
                v[i][j] += v[i + 1][j];
            else
                v[i][j] += v[i + 1][j + 1];

    cout << v[1][1];

    return 0;
}