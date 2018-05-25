#pragma once
#include <string>

class CSamochod
{
public:
	CSamochod();
	~CSamochod();
	virtual void UstalPojemnosc() {};
	virtual void UstalLadownosc() {};
	virtual void print(ostream& str) const {};
	void UstalNazwe( string Nazwa );
	void UstalRodzajPaliwa( string RodzajPaliwa );
	string PobierzNazwe() const; 
	string PobierzRodzajPaliwa() const;
	friend ostream & operator<<( ostream & sru, CSamochod* oSamochod );
protected:
	string m_NazwaSamochodu;
	string m_RodzajPaliwa;
};

