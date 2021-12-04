#include <iostream>
using namespace std;

class Rectangle {
  public:
    double sideA{ 0 };
    double sideB{ 0 };
  
  	Rectangle();
  	Rectangle(double pSideA, double pSideB);
  
  	void getSides();
};
Rectangle::Rectangle(){
}
Rectangle::Rectangle(double pSideA, double pSideB){
	sideA = pSideA;
	sideB = pSideB;
}

void Rectangle::getSides(){
	cout << "Bok a: " << sideA << "\nBok b: " << sideB << endl;
}

int main()
{
    setlocale(LC_CTYPE, "polish");
    double a = 10;
    double b = 20;
    
  
  	Rectangle p1;


    return 0;
}
