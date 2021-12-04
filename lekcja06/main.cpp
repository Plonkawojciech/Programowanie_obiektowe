#include <iostream>

using namespace std;

class School{
	public:
		static string s_school;
		static string s_jobPosition;
		
		string name;
		string surname;
		
		void getData();
		void setNameSurname(string name, string surname);
		
		static string s_getSchool();
		
		static void s_setSchool();
};

string School::s_school = "zsk";
string School::s_jobPosition = "Uczeñ";

void School::getData(){
	cout << "Imiê i nazwisko: " << name << " " << surname << endl;
}

void School::setNameSurname(string pName, string pSurname){
	name = pName;
	surname = pSurname;
}

string  School::s_getSchool(){
return School::s_school;
}

void School::s_setSchool(){
	
}

int main(){
	setlocale(LC_CTYPE,"polish");
	
	cout << School::s_school << endl;
	cout << School::s_jobPosition << endl;
	
	School kowal;
	kowal.setNameSurname("Krystyna", "Kowal");
	kowal.getData();
	
	School::s_jobPosition = "Nauczyciel";
	cout << "Stanowisko: " << School::s_jobPosition << endl;
	kowal.s_jobPosition = "dyrektor";
	cout << "Stanowisko: " << School::s_jobPosition << endl;
	
cout << 	kowal.s_getSchool() << endl;

return 0;
}
