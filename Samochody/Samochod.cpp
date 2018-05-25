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
string CSamochod::PobierzNazwe() const
{
	return m_NazwaSamochodu;
}
string CSamochod::PobierzRodzajPaliwa() const
{
	return m_RodzajPaliwa;
}
ostream & operator<<(ostream & sru, CSamochod* oSamochod)
{
	oSamochod->print(sru);
	return sru;
}