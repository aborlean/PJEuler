#include <iostream>

using namespace std;

int t[] = { 0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4 };

int day_of_the_week(int y, int m, int d)
{
    if(m < 3)
        y--;

    return ((y + y / 4 - y / 100 + y / 400 + t[m - 1] + d) % 7);
}
int main(void)
{
    int c = 0;

    for(int year = 1901; year <= 2000; year++)
        for(int month = 1; month <= 12; month++)
            if(day_of_the_week(year, month, 1) == 0) {
                cout << 1 << ' ' << month << ' '<< year << '\n';
                c++;
            }

    cout << c;
    return 0;
}