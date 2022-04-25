#include <iostream>

using namespace std;

int oglindit(int n)
{
    int a = 0;

    while(n) {
        a *= 10;
        a += n % 10;
        n /= 10;
    }

    return a;
}

int main(void)
{
    int m = 1;

    for(int i = 999; i >= 100; i--)
        for(int j = i - 1; j >= 100; j--)
            if(oglindit(i * j) == i * j)
                m = max(m, i * j);

    cout << m;

    return 0;
}