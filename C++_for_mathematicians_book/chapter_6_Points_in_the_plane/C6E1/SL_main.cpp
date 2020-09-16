#include "../Point.h"
#include "SegmentLine.h"
#include <iostream>

using namespace std;


int main(){
  SegmentLine r = SegmentLine();
  SegmentLine s = r;
  cout << "r = " << r <<endl;
  cout <<"start point is "<<r.getP()<<" and the endpoint is " << r.getQ()<<endl;
  cout << "the midpoint is" << r.mid_point()<<endl;

  cout << " the lenght is " << r.length() << endl;
  Point Q(1,1);
  r.setQ(Q);
  cout << "the new endpoint is " << r.getQ()<<endl;
  cout << "r= "<< r<<endl;
  cout << "its length "<< r.length() << " and midpoint " <<r.mid_point()<<endl;
  cout << "s = " << s << endl;
  cout << "s = r? "<< (s==r)<< endl;
  cout << (s == SegmentLine())<< endl;
  return 0; 
}
