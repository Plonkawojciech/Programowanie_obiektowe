#include <iostream>

using namespace std;

class Worker{
	
		const int id {8};
		public:
		string name {"Katarzyna"};
		string surname {"Nowak"};
		
		Worker();
		Worker(int pId, string pName, string pSurname);
		
		void getData();
		
};

Worker::Worker(){
	
//	id jest const
	
	id = 13;
	name = "DOMYOLNE IMIE";
	surname = "DOMYOLNE NAZWISKO";
}



Worker::Worker(int pId, string pName, string pSurname){
id = pId;
name = pName;
surname = pSurname;
}


void Worker::getData(){
	cout<<"Id: " << id << "\nImie: " << name << ", nazwisko: " << surname << endl;
}

int main(){
	setlocale(LC_CTYPE, "polish");
	Worker nowak;
	nowak.getData();
Worker nowak1 = Worker(1, "Jan", "Nowak");
nowak1.getData();
	
	
	return 0;
}
