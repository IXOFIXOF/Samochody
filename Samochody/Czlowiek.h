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
	void DodajSamochod(CSamochod* oSamochod);
	vector<CSamochod*>* PobierzListeSamochodow() { return &m_ListaSamochodow; }
	friend ostream & operator<<(ostream & sru, const CCzlowiek & Czlowiek);
	friend CCzlowiek& operator+(CCzlowiek& oCzlowiek, CSamochod& oSamochod);
	friend CCzlowiek& operator-(CCzlowiek& oCzlowiek, CSamochod& oSamochod);
	void UsunAuto(CSamochod* oSamochod );
private:
	string m_NazwaCzlowieka;
	vector< CSamochod* > m_ListaSamochodow;
};

