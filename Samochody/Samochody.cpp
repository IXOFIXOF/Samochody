// Samochody.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <vector>
#include <iostream>
#include "Czlowiek.h"
#include "Samochod.h"
#include "SamochodOsobowy.h"
#include "SamochodCiezarowy.h"
#include "Van.h"
#include "Maluch.h"


void UsunAutoZPosiadania(vector <CCzlowiek>& Ludzie );
void DodajSamochodDlaCzlowieka(vector <CCzlowiek>& Ludzie, vector<CSamochod*>& Samochody);
CCzlowiek DodajCzlowieka();
template < class dane >
void Pokaz(vector< dane >& Ludzie);
CSamochod* DodajSamochod();
int main()
{
	vector<CCzlowiek> Ludzie;
	vector<CSamochod*> Samochody;
	int wybor;
	do
	{
		cout << "Wybierz co chcesz zrobic:\n";
		cout << "1. Dodaj czlowieka\n2. Dodaj samochod\n3. Dodaj samochod dla czlowieka\n";
		cout << "4. Usun samochod z posiadanych przez czlowieka\n5. Pokaz ludzi\n6. Pokaz samochody\n";
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
			Samochody.push_back(DodajSamochod());
			system("cls");
			break;
		}
		case 3:
		{
			DodajSamochodDlaCzlowieka(Ludzie, Samochody);
			system("cls");
			break;
		}
		case 4:
		{
			UsunAutoZPosiadania(Ludzie);
			system("cls");
			break;
		}
		case 5:
		{
			Pokaz< CCzlowiek >( Ludzie );
			break;
		}
		case 6:
		{   
			Pokaz< CSamochod* >(Samochody);
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
void UsunAutoZPosiadania(vector <CCzlowiek>& Ludzie )
{
	cout << "Wybierz czlowieka dla ktorego chcesz usunac samochod: \n";
	vector< CCzlowiek >::const_iterator it = Ludzie.begin();
	int licznik = 1;
	int KtoryCzlowiek = 0;
	int KtorySamochod = 0;
	while (it != Ludzie.end())
	{
		cout << licznik << ". " << it->PodajNazweCzlowieka() << "\n";
		it++;
		licznik++;
	}
	cin >> KtoryCzlowiek;
	licznik = 1;
	vector <CSamochod*> ListaSamochodow = *Ludzie[KtoryCzlowiek - 1].PobierzListeSamochodow();
	vector <CSamochod*> ::iterator itt = ListaSamochodow.begin();
	while (itt != ListaSamochodow.end())
	{
		cout << licznik << ". " << (*itt)->PobierzNazwe() << "\n";
		itt++;
		licznik++;
	}
	
	cin >> KtorySamochod;
	if (KtorySamochod > 0 && KtoryCzlowiek > 0)
	{
		Ludzie[KtoryCzlowiek - 1] = Ludzie[KtoryCzlowiek - 1] - *(ListaSamochodow[KtorySamochod - 1]);
	}
	else
	{
		cout << "Nie ma co usuwac\n";
	}
}
void DodajSamochodDlaCzlowieka(vector <CCzlowiek>& Ludzie, vector<CSamochod*>& Samochody)
{
	cout << "Wybierz czlowieka dla ktorego chcesz dodac samochod: \n";
	vector< CCzlowiek >::const_iterator it = Ludzie.begin();
	int licznik = 1;
	int KtoryCzlowiek = 0;
	int KtorySamochod = 0;
	while (it != Ludzie.end())
	{
		cout <<licznik<<". "<< it->PodajNazweCzlowieka()<<"\n";
		it++;
		licznik++;
	}
	cin >> KtoryCzlowiek;

	cout << "Wybierz samochod ktory chcesz dodac dla tego czlowieka: \n";
	vector< CSamochod*>:: const_iterator itt = Samochody.begin();
	licznik = 1;
	while ( itt != Samochody.end())
	{
		cout << licznik << ". " << (*itt)->PobierzNazwe()<< "\n";
		itt++;
		licznik++;
	}
	cin >> KtorySamochod;
	Ludzie[KtoryCzlowiek - 1] = Ludzie[KtoryCzlowiek - 1] + *(Samochody[KtorySamochod-1]);
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
CSamochod* DodajSamochod()
{
	CSamochod* pSamochod = nullptr;
	cout << "1. Samochod osobowy\n2. Samochod ciezarowy\n3. Maluch\n4.Van\n";
	int n;
	cin >> n;
	switch (n)
	{
	case 1: pSamochod = new CSamochodOsobowy; break;
	case 2: pSamochod = new CSamochodCiezarowy; break;
	case 3: pSamochod = new CMaluch; break;
	case 4: pSamochod = new CVan; break;
	default:
		cout << "Zly wybor\n";
		break;
	}
	if (pSamochod != nullptr)
	{
		cout << "Podaj nazwe i rodzaj paliwa: ";
		string nazwa, rodzajPaliwa;
		cin >> nazwa >> rodzajPaliwa;
		pSamochod->UstalNazwe(nazwa);
		pSamochod->UstalRodzajPaliwa(rodzajPaliwa);
		pSamochod->UstalLadownosc();
		pSamochod->UstalPojemnosc();
	}
	return pSamochod;
}
template < class dane >
void Pokaz(vector< dane >& Dane)
{
	vector< dane >::iterator it;
	it = Dane.begin();
	while (it != Dane.end())
	{
		cout << *it;
		it++;
	}
}