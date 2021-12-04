#include <iostream>

using namespace std;

class Worker
{
	public:
		int id{8};
		string name{"katarzyna"};
		string surname{"nowak"};
		
		Worker(int pId,string pName, string pSurname);	
		
		void getData();
		
};

Worker::Worker(int pId = 1,string pName = "Name", string pSurname = "Surname")
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
	
	Worker nowak();	
	nowak.getData();
	
	Worker nowak1() = Worker(10,"krystyna","pawlak");
	
	
	
	return 0;
}
