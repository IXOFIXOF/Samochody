#pragma once
#include "Samochod.h"
#include <string>
#include <vector>
class CCzlowiek
{
public:
	CCzlowiek();
	~CCzlowiek();
	void UstalNazweCzlowieka(string Nazwa);
	string PodajNazweCzlowieka() const; 
	friend ostream & operator<<(ostream & sru, const CCzlowiek & Czlowiek);

private:
	string m_NazwaCzlowieka;
	vector< CSamochod* > m_ListaSamochodow;
};

