#include <iostream>

using namespace std;

int main(void)
{
    unsigned long long number, max_chain_length = 0, max_chain_number, current_chain_length;

    for(int i = 2; i <= 1000000; i++) {
        number = i;
        current_chain_length = 1;
        while(number != 1) {
            if(number % 2 == 0)
                number /= 2;
            else
                number = number * 3 + 1;
            current_chain_length++;
        }
        if(current_chain_length > max_chain_length) {
            max_chain_length = current_chain_length;
            max_chain_number = i;
        }
    }

    cout << max_chain_number;

    return 0;
}