#include<iostream>

using namespace std;

void szyfruj(int klucz, char tab[])
{
	int dl = strlen(tab);
	if (!(klucz >= -26 && klucz <= 26)) return;









	if (klucz >= 0)
		for (int i = 0; i < dl; i++)
			if (tab[i] + klucz <= 'Z')
				tab[i] += klucz;
			else
				tab[i] = tab[i] + klucz - 26;
	else
		for (int i = 0; i < dl; i++)
			if (tab[i] + klucz >= 'A')
				tab[i] += klucz;
			else
				tab[i] = tab[i] + klucz + 26;
}







int main()
{
	char tab[1001];

	int klucz;

	cout << "Podaj mi slowo skladajacy sie z wielkich liter : ";
	cin >> tab;

	cout << "Podaj mi klucz z przedzialu [-26..26]: ";
	cin >> klucz;

	szyfruj(klucz, tab); 

	cout << "before: " << tab << endl;

	szyfruj(-klucz, tab); 

	cout << "after: " << tab << endl;

	return 0;
}