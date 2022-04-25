#include <iostream>

using namespace std;

bool prime[250000];

int main(void)
{
    int p = 1;

    for(int i = 3; i <= 501; i += 2)
        if(!prime[i])
            for(int j = 3; i * j < 250000; j += 2)
                prime[i * j] = 1;

    for(int i = 3; i <= 250000; i += 2) {
        if(!prime[i])
            p++;
        if(p == 10001) {
            cout << i;
            break;
        }
    }

    return 0;
}