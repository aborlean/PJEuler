#include <iostream>

using namespace std;

int main(void)
{
    int c9 = 36, c19, c99 = 0, c1000 = 0;

    c19 = c9 + 70;
    c99 = 10 * (6 + 6 + 6 + 5 + 5 + 5 + 7 + 6) + 8 * c9 + c19;

    c1000 = 100 * c9 + 10 * c99 + 9 * 7+ 9 * 99 * 10 + 11;

    cout << c1000;

    return 0;
}