# Exercises - Chapter 9

## Exercise 1.

Write a procedure to solve a pair of congruences of the form x = a (mod m) and x= b (mod n).
Where m and n are relatively prime.
The existence and uniqueness (in Z_mn) of the solution to such problem is guaranteed by the Chinese Remainder Theorem.
Therefore, call your procedure ```crt```. 
It should take two Mood  objects as arguments and produce a ```Mod``` value in return.
Your procedure should be declared like this:


```
Mod crt( const Mod a, const Mod b);
```

[Solution](/C9E1) 

## Exercise 2.

Create a class to represent the time of day. Call you class ```Time```and give it the following attributes.

* The data should be held in three ```private```variables representing the hour, minute, and second.
* The default (no-argument) constructor should create a value equal to midnight and a three argument constructor should create the time specified (using hours from 0 to 23).
* Define addition a ```Time```object and a (```long```) integer. If ```T```is type ```Time```and ```n```is type ```long```, then ```T+n```and ```n+T```should be the time ```n```seconds after ```T```. (Of course, ```n``` might be negative.)
* Define substraction, but not only in the form ```T-n```but not ```n-T```.
* Define ```++```and ```--```; the should increase (decrease) ```T``` by one second, respectively.
* Define ```get_hour()```,```get_minute()```, and ```get_second()```methods.
* Define ```ampm()```and ```military()```methods to control how the time is printed (see the next bullet). These methods should affect how all ```Time```objects are printed. Also provided a ```is_ampm()``` method that returns ```true```if the current output style is to use AM/PM and ```false```if the current style is military (24 hour).
* Define << for printing ```Time```objects to the screen. The style of the output should be either be ```5:03:24 pm```or ```17:03:24```as specified by the user with the methods ```ampm()```and ```military()```, respectively. Note the zero in front of the 3 but not in front of 5. Midnight should be reported either as ```12:00:00 am``` or ```0:00:00```and noon as ```12:00:00 pm```or ```12:00:00```as appropriate.

[Solution](/C9E2)
