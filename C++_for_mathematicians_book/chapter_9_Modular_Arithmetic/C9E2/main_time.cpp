#include <iostream>
#include "Time.h"

using namespace std;

int main(){
  long hour, minute, second;
  hour = 12;
  minute = 23;
  second = 59;
  Time T, S;
  T = Time(hour,minute,second);
  cout << T;
  Time::military();
  cout << T;
  Time::ampm();
  cout <<T;
  S = Time();
  cout<<S;
  cout <<S+10;
  cout <<S-10;;

  return 0;
}
