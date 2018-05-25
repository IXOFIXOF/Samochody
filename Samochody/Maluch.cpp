#include "stdafx.h"
#include "Maluch.h"


CMaluch::CMaluch()
{
}

CMaluch::~CMaluch()
{
}
void CMaluch::UstalPojemnosc()
{
	CSamochodOsobowy::UstalPojemnosc();
}
void CMaluch::print(ostream& sru) const
{
	sru << "Jestem maluchem i nazywam sie: " << m_NazwaSamochodu << "\n";
}