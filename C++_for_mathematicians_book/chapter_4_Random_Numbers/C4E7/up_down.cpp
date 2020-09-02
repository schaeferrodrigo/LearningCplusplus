#include <iostream>

using namespace std;

int updown (int change){
  static int position =0;
  position += change;
  return position;
}

int up(){
  return updown(1);
}

int down(){
  return updown(-1);
}


int main(){
  cout << up() << " ";
  cout << up() << " ";
  cout << up() << " ";
  cout << down() << " ";
  cout << up() << " ";
  cout << down() << endl;
  return 0;}


