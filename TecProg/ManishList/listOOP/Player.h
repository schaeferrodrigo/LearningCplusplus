#pragma once
#include <iostream>
#include <vector>
#include "Ball.h"

class Player{

    
   private:
       
    std::string id;
    int score;
    int position;
    std::vector<Ball> gun;

  public:
    
    Player(std::string& name, int position);
    
    Ball shoot();

    /*
    int getScore() const;
    int getPosition() const;
    std::string getName() const;
    */

};