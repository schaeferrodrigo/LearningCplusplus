// Player.h
#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include <vector>
#include "Ball.h"

class Player {
private:
    std::string name;
    int position;
    int score;
    std::vector<Ball> gun;

public:
    // Constructor que inicializa al jugador con un nombre y una posición
    Player(const std::string& name, int position);

    // Dispara la primera bola del cargador y la elimina de la pistola
    Ball Shoot();

    // Devuelve true si ya no quedan bolas en el cargador
    bool IsOutOfAmmo() const;

    // Getters
    int GetScore() const;
    int GetPosition() const;
    std::string GetName() const;
};

#endif

// Player.cpp
#include "Player.h"
#include "RandomUtils.h" // Para generar bolas aleatorias

Player::Player(const std::string& name, int position)
    : name(name), position(position), score(0) {
    // Cargar 30 bolas aleatorias en la pistola
    for (int i = 0; i < 30; ++i) {
        gun.push_back(RandomBall());
    }
}

Ball Player::Shoot() {
    if (!gun.empty()) {
        Ball shot = gun.front();
        gun.erase(gun.begin());
        return shot;
    }
    return Ball(); // Devuelve bola por defecto si no hay munición
}

bool Player::IsOutOfAmmo() const {
    return gun.empty();
}

int Player::GetScore() const {
    return score;
}

int Player::GetPosition() const {
    return position;
}

std::string Player::GetName() const {
    return name;
}

// Panel.h
#ifndef PANEL_H
#define PANEL_H

#include <vector>
#include "Ball.h"

class Panel {
private:
    std::vector<Ball> balls;

public:
    // Constructor que inicializa el panel con un número de bolas aleatorias
    Panel(int initialSize);

    // Inserta una bola en la posición indicada desplazando el resto
    void Insert(int position, const Ball& ball);

    // Verifica si hay 3 bolas consecutivas iguales a partir de una posición
    int Verifier(int position, const Ball& ball) const;

    // Elimina 3 bolas consecutivas a partir de una posición
    void DeleteThree(int position);

    // Inserta 3 bolas aleatorias al final del panel
    void InsertThree();

    // Imprime las bolas del panel
    void Print() const;

    // Devuelve el número de bolas actuales
    int Size() const;
};

#endif

// Panel.cpp
#include "Panel.h"
#include "RandomUtils.h"
#include <iostream>

Panel::Panel(int initialSize) {
    for (int i = 0; i < initialSize; ++i) {
        balls.push_back(RandomBall());
    }
}

void Panel::Insert(int position, const Ball& ball) {
    if (position >= 0 && position <= balls.size()) {
        balls.insert(balls.begin() + position, ball);
    }
}

int Panel::Verifier(int position, const Ball& ball) const {
    int count = 1;
    int start = position;

    // Verifica hacia la izquierda
    for (int i = position - 1; i >= 0 && balls[i] == ball; --i) {
        ++count;
        start = i;
    }
    // Verifica hacia la derecha
    for (int i = position + 1; i < balls.size() && balls[i] == ball; ++i) {
        ++count;
    }

    return (count >= 3) ? start : -1;
}

void Panel::DeleteThree(int position) {
    if (position >= 0 && position + 2 < balls.size()) {
        balls.erase(balls.begin() + position, balls.begin() + position + 3);
    }
}

void Panel::InsertThree() {
    for (int i = 0; i < 3; ++i) {
        balls.push_back(RandomBall());
    }
}

void Panel::Print() const {
    for (const Ball& b : balls) {
        std::cout << b.ToString() << " ";
    }
    std::cout << std::endl;
}

int Panel::Size() const {
    return balls.size();
}