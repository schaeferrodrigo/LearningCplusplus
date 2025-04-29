#include "Player.h"
#include "Ball.h"



Player::Player(std::string& name,  int newPosition){

    id = name;
    position = newPosition;
    score = 0;

    //charge gun with 30 balls 
    for(int i = 0; i<30; i++){
        int indexColor = rand()%5;
        gun.push_back(Ball(static_cast<Color>(indexColor)));
    }

}

Ball Player::shoot(){

    Ball shotBall = gun.front();
    gun.erase(gun.begin());
    return shotBall;
 
 }


 /*
 ostream& operator<<(ostream& os , const Point P){
    os<<"("<<P.getX()<<"," << P.getY()<<")";
    return os;
  }
    */