// Ball.h
#ifndef BALL_H
#define BALL_H

#include <string>

// Enumeración con los posibles colores de bola
enum class Color {
    Red, Green, Blue, Yellow, Purple
};

// Clase Ball para representar una bola con un color
class Ball {
private:
    Color color;

public:
    Ball(); // Constructor por defecto
    Ball(Color c); // Constructor con color

    // Compara dos bolas por color
    bool operator==(const Ball& other) const;

    // Devuelve el color en forma de string
    std::string ToString() const;

    // Getter del color (opcional)
    Color GetColor() const;
};

#endif

// Ball.cpp
#include "Ball.h"

Ball::Ball() : color(Color::Red) {} // Por defecto roja

Ball::Ball(Color c) : color(c) {}

bool Ball::operator==(const Ball& other) const {
    return color == other.color;
}

std::string Ball::ToString() const {
    switch (color) {
        case Color::Red: return "Red";
        case Color::Green: return "Green";
        case Color::Blue: return "Blue";
        case Color::Yellow: return "Yellow";
        case Color::Purple: return "Purple";
        default: return "Unknown";
    }
}

Color Ball::GetColor() const {
    return color;
}

// RandomUtils.h
#ifndef RANDOMUTILS_H
#define RANDOMUTILS_H

#include "Ball.h"
#include <cstdlib>

// Devuelve una bola de color aleatorio
inline Ball RandomBall() {
    int r = rand() % 5;
    return Ball(static_cast<Color>(r));
}

#endif