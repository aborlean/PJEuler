#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

ifstream fin("names.txt");

vector <string> v;


int main(void)
{
    int p, sc;
    long long sum = 0;
    char c;
    string s = "";
    bool nume_nou = false;

    while(fin >> c) {
        if(c == '"' && nume_nou == false) {
            nume_nou = true;
            s = "";
        }
        else if(c != '"')
            s += c;
        else {
            v.push_back(s);
            nume_nou = false;
        }
    }

    sort(v.begin(), v.end());

    for(int i = 0; i <= v.size(); i++) {
        s = v[i];
        p = 0;
        sc = 0;

        while(s[p]) {
            sc += s[p] - 'A' + 1;
            p++;
        }

        sum += sc * (i + 1);
    }

    cout << sum;

    return 0;
}