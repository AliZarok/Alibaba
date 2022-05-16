#include <iostream>
#include <iomanip>

using namespace std;

int Nom[] = { 50000, 20000, 10000, 5000, 2000, 1000, 500, 200, 100, 50, 20, 10, 5, 2, 1 };

int main()
{
    double Reszta;
    cout << "Reszta do wydania: ";
    cin >> Reszta;
    cout << "(ㆆ_ㆆ)\n";
    int Kwota = int(100 * Reszta);
    for (int k = 0; Kwota > 0; k++)
    {
        int n = Kwota / Nom[k];
        if (n > 0)
        {
            if (Nom[k] >= 100)
                cout << setw(3) << Nom[k] / 100 << " z\x88: ";
            else
                cout << setw(3) << Nom[k] << " gr: ";
            cout << n << endl;
            Kwota %= Nom[k];
        }
    }
    cout << "----------------------------\n";
    if (Reszta == 0)
    {
        cout << "To ty jakiś biedny jesteś";
    }
}