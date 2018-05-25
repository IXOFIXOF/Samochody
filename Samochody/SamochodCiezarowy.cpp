#include "stdafx.h"
#include "SamochodCiezarowy.h"


CSamochodCiezarowy::CSamochodCiezarowy()
{
}

void CSamochodCiezarowy::UstalLadownosc()
{
	cout << "Podaj ladownosc samochodu: ";
	int n;
	cin >> n;
	m_Ladownosc = n;
}
void CSamochodCiezarowy::print(ostream& sru) const
{
	sru << "Jestem samochodem ciezarowym i nazywam sie: " << m_NazwaSamochodu << "\n";
}
CSamochodCiezarowy::~CSamochodCiezarowy()
{
}
