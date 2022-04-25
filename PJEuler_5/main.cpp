#include <iostream>

using namespace std;

int gcd(int a, int b)
{
    if(a == 0)
        return b;
    return gcd(b % a, a);
}

int main(void)
{
    long long d = 1;

    for(int i = 2; i <= 20; i++)
        d = d * i / gcd(d, i);

    cout << d;

    return 0;
}