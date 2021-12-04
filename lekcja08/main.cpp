#include <iostream>
using namespace std;

struct Zsk
{
	void zotor();
};

class Traktor
{
	public:
	string marka ;
	string model ;
	static string s_iloscKol;
	static string s_krajPochodzenia;
	
	void showAllData();
	void setData(string marka, string model);	
	
};
void Traktor::setData(string marka, string model)
{
	Traktor::marka = marka;
	Traktor::model = model;	
	
}
void Traktor::showAllData()
{
	cout << "Dane traktora " << "\nMarka: " << marka << "\nModel: " << model << "\nIlosc kol: " << s_iloscKol 
	<<"\nkraj pochodzenia: "<<s_krajPochodzenia;
}
string Traktor::s_iloscKol="4";
string Traktor::s_krajPochodzenia="polska" ;

void Zsk::zotor()
{
	Traktor::setData("ursus", "modelX");
	Traktor::showAllData();		
	
}

int main()
{
	setlocale(LC_CTYPE,"polish");
	
	Traktor traktor;
	traktor.setData("ursus" , "modelX");
	traktor.showAllData();
	
	
	
	return 0;
}
