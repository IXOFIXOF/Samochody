#include "stdafx.h"
#include "SamochodOsobowy.h"


CSamochodOsobowy::CSamochodOsobowy()
{
	m_Pojemnosc = 0;
}


CSamochodOsobowy::~CSamochodOsobowy()
{
}
void CSamochodOsobowy::UstalPojemnosc()
{
	cout << "Podaj ilosc osob mogacych wejsc do samochodu: ";
	int n;
	cin >> n;
	m_Pojemnosc = n;
}
void CSamochodOsobowy::print(ostream& sru) const
{
	sru << "Jestem samochodem osobowym i nazywam sie: " << m_NazwaSamochodu << "\n";
}