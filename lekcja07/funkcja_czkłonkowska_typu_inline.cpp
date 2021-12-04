#include <iostream>
using namespace std;

class Room{
   public:
      float length, width, height;
      
      inline float roomVolume(float length, float width, float height){
         return length * width * height;
      }
};

int main(){
   setlocale(LC_CTYPE,"polish");
   
   Room kuchnia;
   
   kuchnia.length=6;
   kuchnia.width=3.5;
   kuchnia.height=2.5;
   
   cout << "Kuchnia \nDługość: "<<kuchnia.length << "m\nSzerokość: " <<
    kuchnia.width<< "m\nWysokość: "<< kuchnia.width<< "m\n\n"<< "Kubatura pomieszczenia: " 
    << kuchnia.roomVolume(kuchnia.length, kuchnia.width, kuchnia.height) <<"m^3\n";
   
   return 0;
}
