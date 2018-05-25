#pragma once
#include "Samochod.h"
class CSamochodOsobowy :
	public CSamochod
{
public:
	CSamochodOsobowy();
	void UstalLadownosc() {}
	void UstalPojemnosc();
	void print(ostream& sru) const;
	virtual ~CSamochodOsobowy();
protected:
	int m_Pojemnosc;
};

