#include <iostream>

using namespace std;

int main(void)
{
    long long n, a, d = 2;

    cin >> n;

    while(n != 1) {
        if(n % d == 0) {
            a = d;
            while(n % d == 0)
                n /= d;
        }
        d++;
        if(d * d > n)
            d = n;
    }

    cout << a;

    return 0;
}