#include <iostream>
using namespace std;

struct Date{
	unsigned short int dd, mm, yyyy;
};

class Worker{
	public:
		unsigned int id {};
		string name {}, surname {};
		Date dateBirthday {};
		
		void showAllData();
		void setData(unsigned int id, string name, string surname, Date dateBirthday);
};

void Worker::setData(unsigned int id, string name, string surname, Date dateBirthday){
	Worker::id = id;
	Worker::name = name;
	Worker::surname = surname;
	Worker::dateBirthday = dateBirthday; 
}

void Worker::showAllData(){
	cout << "Dane pracownika: \nIdentyfikator pracownika: " << id << "\nImiê i nazwisko: " << name << " " << surname
	 << "\nData urodzenia: " << dateBirthday.dd << "-" << dateBirthday.mm << "-" << dateBirthday.yyyy << "\n";
}



int main(){
	setlocale(LC_CTYPE,"polish");
	Worker kowalski;
	
	kowalski.setData(100, "jan", "kowalski", {29,9,2021});
	kowalski.showAllData();
	
	
	
	return 0;
}
