#include <iostream>

using namespace std;

int main(void)
{
    int a = 1, b = 2, s = 0;

    while(b < 4000000) {
        if(b % 2 == 0)
            s += b;
        swap(a, b);
        b += a;
    }

    cout << s;
    return 0;
}