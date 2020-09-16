#include "Line.h"
#include <iostream>

using namespace std;


int main(){
  Point X(5,3);
  Point Y(-2,8);
  Line L(X,Y);
  cout << "X = " << X <<endl;
  cout << "Y = " << Y << endl;
  cout << "the line L is " << L << endl;

  Point Q;
  Q = L.generatePoint();
  cout <<"Q=" << Q << " is a point on L";
  Line M(X,Q);
  cout <<  "the line M through X and Q is " << M <<endl;
  cout << "are L and M the same line ?\t" << (M == L) << endl;
  cout << "distance from Y to M is "<< distance(Y , M)<<endl;

  Point P_1(0.,1.);
  Point P_2(0.,-1.);
  Point Q_1(-1.,0.);
  Point Q_2(1.,0.);
  Line  L_1(P_1 , P_2);
  Line L_2(Q_1 , Q_2);
  Point IntersPoint;
  cout << "intersection test "<<testIntersection(L_1 , L_2 , IntersPoint)<< endl;
  cout << "intersection point P= " << IntersPoint;
  
  return 0;

} 
