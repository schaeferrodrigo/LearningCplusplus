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
