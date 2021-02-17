
Create a class to represent the time of day. Call you class ```Time```and give it the following attributes.

* The data should be held in three ```private```variables representing the hour, minute, and second.
* The default (no-argument) constructor should create a value equal to midnight and a three argument constructor should create the time specified (using hours from 0 to 23).
* Define addition a ```Time```object and a (```long```) integer. If ```T```is type ```Time```and ```n```is type ```long```, then ```T+n```and ```n+T```should be the time ```n```seconds after ```T```. (Of course, ```n``` might be negative.)
* Define substraction, but not only in the form ```T-n```but not ```n-T```.
* Define ```++```and ```--```; the should increase (decrease) ```T``` by one second, respectively.
* Define ```get_hour()```,```get_minute()```, and ```get_second()```methods.
* Define ```ampm()```and ```military()```methods to control how the time is printed (see the next bullet). These methods should affect how all ```Time```objects are printed. Also provided a ```is_ampm()``` method that returns ```true```if the current output style is to use AM/PM and ```false```if the current style is military (24 hour).
* Define << for printing ```Time```objects to the screen. The style of the output should be either be ```5:03:24 pm```or ```17:03:24```as specified by the user with the methods ```ampm()```and ```military()```, respectively. Note the zero in front of the 3 but not in front of 5. Midnight should be reported either as ```12:00:00 am``` or ```0:00:00```and noon as ```12:00:00 pm```or ```12:00:00```as appropriate.


## Solution



``` 
#ifndef TIME_H
#define TIME_H
#include <iostream>

using namespace std;

const int INITIAL_PRINT = 1;

class Time{

private:

  long hour;
  long minute;
  long second;
  static int default_print;

public:

  Time(){
    hour = 0;
    minute = 0;
    second = 0;
  }

  Time(long h , long m, long s);

  Time add(const long n)const;

  Time operator+(const long n)const {return add(n);}
  Time operator-(const long n)const{
    return (*this + (-n));
  }

  Time operator++(){
    return (*this + 1);
  }
  Time operator--(){
    return (*this + (-1));
  }

  long get_print()const{
    return default_print;
  }

  long get_hour() const{
    return hour;
  }

  long get_minute() const{
    return minute;
  }

  long get_second() const{
    return second;
  }

  static void ampm(){
    default_print = 1;
  };

  static void military(){
    default_print = 0;
  }
};

ostream& operator<<(ostream& os, const Time T);

inline Time operator+(long n , Time T){
  return (T+n);
}

long sixty_bound( long value , long& extra);
long twenty_four_boud(long value );

#endif

```


```
#include <iostream>
#include <iomanip>
#include "Time.h"
#include "../Mod.h"

using namespace std;

int Time::default_print = INITIAL_PRINT;

long sixty_bound( long value , long& extra){
  if(value >=60){
    Mod module;
    extra= value/60;
    module = Mod(value , 60);
    return(module.get_val());
  }
    extra = 0;
    return value;
}

long twenty_four_boud(long value ){
  if (value >= 24){return (value - 24);}
  return value;
}

Time::Time(long h, long m, long s){
  if((h<0)|| (m<0)||(s<0)){
    cout <<" INVALID ENTRY ";
    Time();

  }

  long extra_second, extra_minute;
  second = sixty_bound( s , extra_second);
  m += extra_second;
  minute = sixty_bound( m , extra_minute);
  h+= extra_minute;
  hour = twenty_four_boud( h );
}

Time Time::add(const long n)const{
  if( second + n< 0){
    long extra_second = -(second + n)/60 + 1;
    //cout<< "extra_second ="<< extra_second<<"\n";
    long total_second = (extra_second)*60 + (second+n);
    //cout <<"total_second="<< total_second<<"\n";
    //cout<<"minutes= "<< minute<<"\n";
    //cout <<"minute - extra_second = " <<minute - extra_second<<"\n";
    if (minute-extra_second <0){
      long extra_minute = -(minute-extra_second)/60 +1;
      long total_minute = (extra_minute)*60+(minute-extra_minute);
      if(hour - extra_minute<0){
        long extra_hour = -(hour - extra_minute)/24 +1;
        long total_hour = (extra_hour)*24+ (hour-extra_hour);
        return Time(total_hour,total_minute, total_second);
      }
      else{ return Time(hour, total_minute,total_second);}
    }
    else{ return Time(hour, minute , total_second);}
  }
  return Time(hour, minute , second + n);
}

ostream& operator<<(ostream& os, const Time T){
  if(T.get_print() ==0){
    os<<T.get_hour()<<":"<< setw(2) << setfill('0')<<T.get_minute()<<":"<< setw(2) << setfill('0')<<T.get_second()<<"\n";
  }
  else if(T.get_print() ==1){
    if ((T.get_hour()==0)&&(T.get_minute()==0)&&(T.get_second()==0)){
      os << 12<<":"<<"00"<<":"<<"00"<<" am\n";
    }
    else if (T.get_hour()<12){
      os << T.get_hour()<<":"<<setw(2) << setfill('0')<<T.get_minute()<<":"<< setw(2) << setfill('0')<<T.get_second()<<" am\n";
      }
    else if( (T.get_hour()>= 12)&&(T.get_hour()<13)  ){
      os << T.get_hour()<<":"<<setw(2) << setfill('0')<<T.get_minute()<<":"<< setw(2) << setfill('0')<<T.get_second()<<" pm\n";
         }
    else{
      os << T.get_hour()-12<<":"<<setw(2) << setfill('0')<<T.get_minute()<<":"<< setw(2) << setfill('0')<<T.get_second()<<" pm\n";
      }
  }
  else{os << "There is some problem here!!";}
  return os;
}

