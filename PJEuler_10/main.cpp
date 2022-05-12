#include <iostream>

using namespace std;

bool prime[2000001];

int main(void)
{
    long long s = 2;

    for(int i = 3; i <= 1500; i += 2)
        if(!prime[i])
            for(int j = 3; i * j <= 2000000; j += 2)
                prime[i * j] = 1;


    for(int i = 3; i < 2000000; i += 2)
        if(!prime[i])
            s += i;

    cout << s;

    return 0;
}