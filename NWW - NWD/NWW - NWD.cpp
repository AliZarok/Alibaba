// NWW - NWD.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.

#include <iostream>
using namespace std;
int main()
{
    int a;
    int b;
    cout << "wpisz pierwszą liczbę ";
    cin >> a;
    cout << "wpisz drugą liczbę";
    cin >> b;
    while (a != b) {
        if (a < b) {
            b - a;

        }
        else
            a - b;
    }
    }


} 
    

