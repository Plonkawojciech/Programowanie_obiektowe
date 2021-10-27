#include <iostream>

using namespace std;

class Worker
{
	public:
		int id{8};
		string name{"katarzyna"};
		string surname{"nowak"};
		
		Worker();
		
		Worker(int pId,string pName, string pSurname);	
		
		void getData();
		
};

Worker::Worker()
{
	id=13;
	name="DOMYŚLNE IMIĘ";
	surname = "DOMYŚLNE NAZWIISKO";
}


Worker::Worker(int pId ,string pName , string pSurname )
{
	id=pId;
	name=pName;
	surname=pSurname;
}

void Worker::getData()
{
	cout<<"id: " << id << "\nName: " << name << "\nSurname: " << surname << endl;
}

int main(int argc, char** argv)
{
	setlocale(LC_CTYPE, "polish");
	
	Worker nowak;	
	nowak.getData();
	
	Worker nowak1 = Worker(10,"krystyna","pawlak");
	nowak1.getData();
	
	Worker nowak2 = Worker();
	nowak2.getData;
	
	
	
	return 0;
}
