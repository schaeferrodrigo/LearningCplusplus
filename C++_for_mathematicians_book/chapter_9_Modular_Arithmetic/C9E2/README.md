
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


[.h file](Time.h) <br>
[.cpp file](Time.cpp) <br>
[repository link](https://github.com/schaeferrodrigo/LearningCplusplus/tree/master/C%2B%2B_for_mathematicians_book/chapter_9_Modular_Arithmetic/C9E2)
