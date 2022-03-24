#include <bits/stdc++.h>

using namespace std;

bool is_palindrome(string s)
{

    int p=0;
    int k = s.size()-1;
    while(p<k)
    {
        if (s[p] != s[k]) return false;
        p++;
        k--;
    }
    return true;
    /*
    int p=0;
    if (s[0]=='A') return true;
    */
}

int main()
{
    int licznik = 0;
    string s;
    ifstream f("dane.txt");
    while (f>>s)
    {
        if (is_palindrome(s) == true)
        {
            licznik++;
            cout << s <<"\n";
        }
    }
    cout << "Wynik: " << licznik;
}
