#include "Point.h"
#include <iostream>
#include <cmath>

using namespace std;

// testing point class

int main(){

  Point X;
  Point Y(3,4);

  cout << "the point X is " << X << " and the point Y is " << Y << endl;
  cout << " Point Y in polar cordinates is ("<< Y.getR() <<","<< Y.getA()<<")"<< endl;

  cout << "the distance between these points is " << dist(X,Y)<<endl;
  cout << " the midpoint between these points is " <<midpoint(X , Y) <<endl;

  Y.rotate(M_PI/2);
  cout << "after 90-degree rotation, Y = "<<Y<< endl;
  
  Y.setR(100);
  cout << "after rescaling, Y = "<<Y<<endl;

  Y.setA(M_PI/4);
  cout << "after seeting Y's angle to 45 degrees, Y = " << Y << endl;

  Point Z;
  Z= Y;
  cout << "Z is "<< Z << endl;

  X = Point( 5, 3);
  Y = Point(5 , -3);

  cout << "X = " << X << " and Y = "<< Y << endl;

  if (X==Y) {
    cout << "They are equal!" << endl;
  }
  if (X!=Y){
    cout << " They are NOT equal!"<< endl;
  }
 return 0;
}

