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
