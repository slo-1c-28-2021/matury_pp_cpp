#include <bits/stdc++.h>

using namespace std;

int main()
{

    string s;
    ifstream f("hasla.txt");
    int suma;
    suma = 0;
    while(f>>s)
    {
      for (int i=0; i<s.size()-1; i++)
        if((int)s[i]+(int)s[i+1]==220)
      {
          cout << s << "\n";
          break;
      }
    }
}
