#include "segpoin.h"



int main(){

  Point P(1.,2.);
  Point Q = Point();
  cout << " P ="<<P<<endl;
  cout<< "Q = "<<Q << endl;

  Segment S = P+Q;
  cout << "the segment between P and Q is"<<S<<endl;
  cout <<" the middle point is "<<S.midpoint()<<endl;


  return 0;
}
