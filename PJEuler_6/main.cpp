#include <iostream>

using namespace std;

int main(void)
{
    long long n, a;

    cin >> n;

    a = n * n * (n + 1) * (n + 1) / 4 - n * (n + 1) * (2 * n + 1) / 6;

    cout << a;

    return 0;
}