#include <iostream>

using namespace std;

struct Date {
	unsigned short int dd, mm, yyyy;
};

struct Student{
	string name, surname;
	unsigned int id;
	unsigned short int gradeInformatics[5];
	Date dateBirthday;
};

int main() {
	setlocale(LC_CTYPE,"polish");
	
	Student kowalski {"Jan", "Kowalski", 10, {5, 3, 4, 5, 6}, {29, 9, 2021}};
	cout << "Imię i nazwisko: " << kowalski.name << " " << kowalski.surname 
			<< "\nIdentyfikator użytkownika: " << kowalski.id
			<< "\nData urodzenia: " <<kowalski.dateBirthday.dd << "-" << kowalski.dateBirthday.mm
			<< "-" << kowalski.dateBirthday.yyyy << "\nOceny z informatyki: \n";

	for(unsigned int i= 0; i<5; i++){
		cout << " - " << i+1 << " ocena: " << kowalski.gradeInformatics[i] << endl;
	}

	return 0;
}
