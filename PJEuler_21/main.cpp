#include <iostream>

using namespace std;

int v[10000];

int sum_proper_divisors(int n)
{
    int s = 1;

    for(int i = 2; i * i <= n; i++) {
        if(n % i == 0) {
            s += i;
            if(i * i != n)
                s += n / i;
        }
    }

    return s;
}

int main(void)
{
    int s = 0, sd1, sd2;

    for(int i = 2; i <= 10000; i++) {
        sd1 = sum_proper_divisors(i);
        sd2 = sum_proper_divisors(sd1);
        if(i == sd2 && !v[min(sd1, sd2)] && sd1 != i) {
            v[min(sd1, sd2)] = 1;
            s += sd1 + sd2;
        }
    }

    cout << s;

    return 0;
}