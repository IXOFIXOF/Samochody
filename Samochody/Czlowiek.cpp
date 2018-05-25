#include "stdafx.h"
#include "Czlowiek.h"


CCzlowiek::CCzlowiek()
{
	m_NazwaCzlowieka = "Nie podano nazwy\n";
}


void CCzlowiek::UstalNazweCzlowieka(string Nazwa)
{
	m_NazwaCzlowieka = Nazwa;
}
string CCzlowiek::PodajNazweCzlowieka() const
{
	return m_NazwaCzlowieka;
}
ostream & operator<<(ostream & sru, const CCzlowiek & Czlowiek)
{
	sru << "Nazywam sie " << Czlowiek.m_NazwaCzlowieka << " i mam " << Czlowiek.m_ListaSamochodow.size() << " samochodow\n";
	return sru;
}
void CCzlowiek::UsunAuto( CSamochod* oSamochod)
{
	vector <CSamochod*> :: iterator it = find(m_ListaSamochodow.begin(), m_ListaSamochodow.end(), oSamochod);
	if (it != m_ListaSamochodow.end())
	{
		m_ListaSamochodow.erase(it);
	}
	delete oSamochod;
}
CCzlowiek& operator-(CCzlowiek& oCzlowiek, CSamochod& oSamochod)
{
	oCzlowiek.UsunAuto( &oSamochod );
	return oCzlowiek;
}
void CCzlowiek::DodajSamochod(CSamochod* oSamochod)
{
	CSamochod* samochod = new CSamochod(*oSamochod);
	m_ListaSamochodow.push_back( samochod );
}

CCzlowiek& operator+(CCzlowiek& oCzlowiek, CSamochod& oSamochod)
{
	oCzlowiek.DodajSamochod(&oSamochod);
	return oCzlowiek;
}
CCzlowiek::~CCzlowiek()
{
}
