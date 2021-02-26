#include "rectangle.h"
#include "square.h"
#include <iostream>

using namespace std;

int main(){

  Rectangle R = Rectangle( 2. , 3.);
  cout << R;
  cout << "the area of R is "<< R.area()<<endl;
  cout << " the perimeter of R is "<< R.perimeter()<<endl;
  R.set_width(4);
  R.set_height(5);
  cout <<"the rectangle R is "<< R<<endl;

  Square S = Square(2);
  cout<<S;
  cout<< "the area of S is "<<S.area()<<endl;
  cout << " the perimeter of S is "<<S.perimeter()<<endl;
  S.set_length(3);
  cout << "the new square S is "<<S;

  return 0;
}
