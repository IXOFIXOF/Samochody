#pragma once
#include "Samochod.h"
class CSamochodCiezarowy :
	public CSamochod
{
public:
	CSamochodCiezarowy();
	virtual ~CSamochodCiezarowy();

	void UstalLadownosc();
	void UstalPojemnosc() {}
	void print(ostream& sru) const;
protected:
	int m_Ladownosc;
};

