#pragma once
#include "SamochodCiezarowy.h"
class CVan :
	public CSamochodCiezarowy
{
public:
	CVan();
	virtual ~CVan();

	void UstalLadownosc();
	void UstalPojemnosc() {}

	void print(ostream& sru) const;
};

