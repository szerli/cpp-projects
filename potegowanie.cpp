#include <iostream>

using namespace std;

int main()
	
{
	int podstawa, wykladnik, wynik=1;
	cout << "Podaj podstawe ktora chcesz spotegowac: " << endl;
	cin >> podstawa;
	cout << "Podaj wykladnik potegi: " << endl;
	cin >> wykladnik;
	for(int i=0; i<wykladnik; i++)
	{
		wynik=wynik*podstawa;
	}
	cout << "Wynikiem potegowania jest:\n" << wynik;
	cout << "\n";

	return 0;
}
