#include <iostream>

using namespace std;

int numdiv(long long n) {
    int c = 1, d = 2, p;

    while(n != 1) {
        if(n % d == 0) {
            p = 0;
            while(n % d == 0) {
                p++;
                n /= d;
            }
            c *= (p + 1);
        }

        d++;

        if(d * d > n)
            d = n;
    }

    return c;
}

int main(void)
{
    long long a = 1, n;
    bool found = false;

    while(!found) {
        n = a * (a + 1) / 2;
        if(numdiv(n) > 500)
            found = true;
        a++;
    }

    cout << n;

    return 0;
}