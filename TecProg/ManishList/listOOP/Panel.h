#pragma once
#include "Ball.h"
#include <vector>


class Panel{

    private:
        std::vector<Ball> balls;
    
    public:

        Panel(int initialSize);

        void Insert(int position, const Ball& ball);

        int Verifier(int position, const Ball& ball) const;

        void DeleteThree(int position);

        void InsertThree();

        void PrintPanel() const;
        
        int PrintSize() const;
};


