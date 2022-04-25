#include <iostream>

using namespace std;

int main(void)
{
    int a = 0, b = 0, c = 0, m = 2;

    while(a + b + c != 1000) {
        for(int i = 1; i < m; i++) {
            a = m * m - i * i;
            b = 2 * m * i;
            c = m * m + i * i;

            if(a + b + c == 1000)
                break;
        }
        m++;
    }

    cout << a * b * c;

    return 0;
}