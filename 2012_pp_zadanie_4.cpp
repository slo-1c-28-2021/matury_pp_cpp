#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a;
    int wynik = 0;
    ifstream f("cyfry.txt");
    while(f>>a)
    {
    if(a%2==0) wynik++;
    }
    cout << wynik;
}
