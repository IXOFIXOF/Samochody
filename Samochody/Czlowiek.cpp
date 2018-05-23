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
CCzlowiek::~CCzlowiek()
{
}
