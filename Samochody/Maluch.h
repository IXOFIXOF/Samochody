#pragma once
#include "SamochodOsobowy.h"
class CMaluch :
	public CSamochodOsobowy
{
public:
	CMaluch();
	virtual ~CMaluch();

	void UstalLadownosc() {}
	void UstalPojemnosc();
	void print(ostream& sru) const;
};

