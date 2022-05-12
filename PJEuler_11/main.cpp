#include <iostream>

using namespace std;

int v[21][21];

int main(void)
{
    int pmax = 1;

    for(int i = 1; i <= 20; i++)
        for(int j = 1; j <= 20; j++)
            cin >> v[i][j];

    for(int i = 1; i <= 20; i++)
        for(int j = 1; j <= 17; j++)
            pmax = max(pmax, v[i][j] * v[i][j + 1] * v[i][j + 2] * v[i][j + 3]);

    for(int j = 1; j <= 20; j++)
        for(int i = 1; i <= 17; i++)
            pmax = max(pmax, v[i][j] * v[i + 1][j] * v[i + 2][j] * v[i + 3][j]);

    for(int i = 4; i <= 17; i++)
        for(int j = 4; j <= 17; j++) {
            pmax = max(pmax, v[i][j] * v[i + 1][j + 1] * v[i + 2][j + 2] * v[i + 3][j + 3]);
            pmax = max(pmax, v[i][j] * v[i - 1][j - 1] * v[i - 2][j - 2] * v[i - 3][j - 3]);
            pmax = max(pmax, v[i][j] * v[i + 1][j - 1] * v[i + 2][j - 2] * v[i + 3][j - 3]);
            pmax = max(pmax, v[i][j] * v[i - 1][j + 1] * v[i - 2][j + 2] * v[i - 3][j + 3]);
         }

    cout << pmax;

    return 0;
}