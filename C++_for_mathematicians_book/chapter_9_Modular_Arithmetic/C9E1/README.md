
Write a procedure to solve a pair of congruences of the form x = a (mod m) and x= b (mod n).
Where m and n are relatively prime.
The existence and uniqueness (in Z_mn) of the solution to such problem is guaranteed by the Chinese Remainder Theorem.
Therefore, call your procedure ```crt```. 
It should take two Mood  objects as arguments and produce a ```Mod``` value in return.
Your procedure should be declared like this:


```
Mod crt( const Mod a, const Mod b);
