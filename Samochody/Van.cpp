#include "stdafx.h"
#include "Van.h"


CVan::CVan()
{
}

CVan::~CVan()
{
}

void CVan::UstalLadownosc()
{
	CSamochodCiezarowy::UstalLadownosc();
}
void CVan::print(ostream& sru) const
{
	sru << "Jestem vanem i nazywam sie " << m_NazwaSamochodu << "\n";
}