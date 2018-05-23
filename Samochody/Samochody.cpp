// Samochody.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include "Czlowiek.h"

CCzlowiek DodajCzlowieka();
void PokazLudzi( vector< CCzlowiek >* Ludzie );
void PokazSamochody(vector< CSamochod*> * Samochody );
int main()
{
	vector<CCzlowiek> Ludzie;
	vector<CSamochod*> Samochody;
	int wybor;
	do
	{
		cout << "Wybierz co chcesz zrobic:\n";
		cout << "1. Dodaj czlowieka\n2. Dodaj Samochod dla czlowieka\n3. Usun samochod z posiadanych przez czlowieka\n";
		cout << "4. Dodaj samochod\n5. Pokaz ludzi\n6. Pokaz samochody\n";
		cin >> wybor;
		switch (wybor)
		{
		case 1:
		{
			Ludzie.push_back(DodajCzlowieka());
			system("cls");
			break;
		}
		case 2:
		{
			break;
		}
		case 3:
		{
			break;
		}
		case 4:
		{
			break;
		}
		case 5:
		{
			PokazLudzi( &Ludzie );
			break;
		}
		case 6:
		{
			break;
		}
		default:
			break;
		}
		
	} while (wybor != 7);
	


	
	std::cout << "Klasy bazowe samochody, ludzie i klasy pochodne samochody_osobowe, ciê¿arowe," 
		<<" van i maluch. Przeci¹¿yæ operator strumienia i dodawania i odejmowania"
		<<" ze stanu posiadania danego cz³owieka i parê wed³ug w³asnego pomys³u.\n";
	std::cin.get();
    return 0;
}
CCzlowiek DodajCzlowieka()
{
	CCzlowiek oCzlowiek;
	cout << "Podaj nazwe czlowieka: ";
	string nazwa;
	cin >> nazwa;
	oCzlowiek.UstalNazweCzlowieka(nazwa);
	return oCzlowiek;
}
void PokazLudzi(vector< CCzlowiek >* Ludzie)
{
	vector< CCzlowiek >::iterator it;
	it = Ludzie->begin();
	while ( it != Ludzie->end() )
	{
		cout << *it;
		it++;
	}
}
void PokazSamochody(vector< CSamochod*> * Samochody)
{

}