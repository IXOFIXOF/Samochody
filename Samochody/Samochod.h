#pragma once
#include <string>

class CSamochod
{
public:
	CSamochod();
	~CSamochod();
	void UstalNazwe( string Nazwa );
	void UstalRodzajPaliwa( string RodzajPaliwa );
	string PobierzNazwe();
	string PobierzRodzajPaliwa();

protected:
	string m_NazwaSamochodu;
	string m_RodzajPaliwa;
};

