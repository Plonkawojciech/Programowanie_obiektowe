#include <iostream>

using namespace std;

class Car
{
	public:
		string brand;
		string model;
		string color;
		int year;
		float price;
		
		Car()
		{
			cout << "Konstruktor somyślny został wywyłany" << endl;
		}		
		
		Car(string pBrand, string pModel, int pYear);
		Car(string pBrand, string pModel, string pColor, int pYear, float pPrice);
		~Car()
		{
			cout << "Destruktor domyślny został wywołany" << endl;
		}
		
		void showData();

};

Car::Car(string pBrand, string pModel, int pYear):
	brand{pBrand},
	model{pModel},
	year{pYear}
	{
		
	}

Car::Car(string pBrand, string pModel, string pColor, int pYear, float pPrice)
{
	brand = pBrand;
	model = pModel;
	color = pColor;
	year = pYear;
	price = pPrice;
}

void Car::showData()
{
	cout << "Marka: " << brand 
	<< "\nModel: " << model 
	<< "\nKolor: " << color 
	<< "\nRok produkcji: " << year
	<< "\nCena: " << price << endl;
}

void createObject()
{
	Car car;
}


int main()
{
	setlocale(LC_CTYPE,"polish");
	
	Car fiat = Car("Fiat", "Multipla", "szary", 2000, 2000.99);	
	
	Car* auto1 = &fiat;
	auto1->price = 1900;
	
	fiat.showData();
	
	createObject();

	return 0;
}
