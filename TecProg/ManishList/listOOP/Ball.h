#pragma once
enum class Color
{
	Red, Green, Blue, Yellow, Orange
};


class Ball{

    private:
        Color corlor;

    public:
        Ball();
        Ball(Color c);
};