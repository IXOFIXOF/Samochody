#include "stdafx.h"
#include "Samochod.h"


CSamochod::CSamochod()
{
	m_NazwaSamochodu = "Nie podano nazwy\n";
	m_RodzajPaliwa = "Nie ustalono rodzaju paliwa\n";
}
CSamochod::~CSamochod()
{
}
void CSamochod::UstalNazwe( string Nazwa )
{
	m_NazwaSamochodu = Nazwa;
}
void CSamochod::UstalRodzajPaliwa( string RodzajPaliwa )
{
	m_RodzajPaliwa = RodzajPaliwa;
}
string CSamochod::PobierzNazwe()
{
	return m_NazwaSamochodu;
}
string CSamochod::PobierzRodzajPaliwa()
{
	return m_RodzajPaliwa;
}