#include "Rectangle.h"
#include "Rhombus.h"

int main(){
   Parallelogram P = Parallelogram();
   cout<< P;
   Parallelogram R = Parallelogram(-2, 3, 5);
   cout << R.area()<<endl;;
   cout << R.perimeter()<<endl;

   Rectangle S = Rectangle(2,4);
   cout << S.area()<<endl;
   cout << S.perimeter()<<endl;
   cout << S;

   Rhombus T = Rhombus(2,1);
   cout<< T;


   return 0;
}
