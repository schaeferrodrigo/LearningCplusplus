#include "Counted.h"
#include <iostream>

using namespace std;


int main(){


  Counted X,Y;
  Counted* array;
  array = new Counted[20];

  cout<< "There are "<< Counted::count()
      << " Counted objects in memory"<<endl;

  delete[] array;

  cout<<"And now the are "<<Counted::count()
        <<" Counted objects in memory"<<endl;

  return 0;
}
