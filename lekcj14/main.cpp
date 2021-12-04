#include <iostream>

using namespace std;

class Worker{
	private:
		string name, surname, pesel;
		
	public:
		short int height;
		
		Worker(string, string, string, short int);
		
		Worker(const Worker &object){
			name = object.name;
		}
		
		void setName(string pName);
		string getName();
		
		void setSurname(string pSurname);
		string getSurname();
		
		void setPesel(string pPesel);
		string getPesel();
		
		void getData();
	
};

Worker::Worker(string pName, string pSurname, string pPesel, short int pHeight){
	name = pName;
	surname = pSurname;
	pesel = pPesel;
	height = pHeight;
}

void Worker::setName(string pName){
	name = pName;
}
void Worker::setSurname(string pSurname){
	surname = pSurname;
}
void Worker::setPesel(string pPesel){
	pesel = pPesel;
}

string Worker::getName(){
	return name;
}

string Worker::getSurname(){
	return surname;
}

string Worker::getPesel(){
	return pesel;
}

void Worker::getData(){
	cout << "Imiê: " << name
	<< "\nNazwisko: " << surname
	<< "\nPesel: " << pesel
	<< "\nWzrost: " << height << "\n";
}


int main(){
	setlocale(LC_CTYPE, "polish");
	
	Worker nowak("Janusz", "Nowak", "0123456789", 177);
	
	Worker cos = nowak;
	cos.getData();
	
	Worker *wsk = &nowak;
	
	wsk->setName("Marcin");
	
	cout << wsk->getName() << endl << endl;
	
	wsk->getData();
	
	return 0;
}
