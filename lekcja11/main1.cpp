#include <iostream>

using namespace std;

class Animal{
	public:
		static int s_count;
		
		Animal(){
			s_count ++;
		}
		
		~Animal(){
			s_count --;
			cout << "Destruktor" << endl;
		}
		
		 static void getAmount();
};

	int Animal::s_count = 0; 

	void Animal::getAmount(){
	cout << "Liczba zwierząt: " << Animal::s_count << endl;
}


int main(){
	setlocale(LC_CTYPE,"polish");

	
	Animal *p_elephant = new Animal;
	Animal *p_filip = new Animal;
	
	Animal::getAmount();
	
	delete p_elephant;
	delete p_filip;
	
	Animal::getAmount();

	

	return 0;
}
