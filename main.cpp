#include <iostream>
#include "settings.h"


bool game_over;
int x, y, fruitX, fruitY, score;
enum directions { STOP = 0, LEFT, RIGHT, UP, DOWN };
directions dir;

void setup() {
    game_over = false;
    dir = STOP;
    x = WIDTH / 2;
    y = HEIGHT / 2;
    fruitX = std::rand() % WIDTH;
    fruitY = std::rand() % HEIGHT;
    score = 0;
}
void draw() {}
void input() {}
void logic() {}

int main(){
    setup();
    while (!game_over) {
        input();
        logic();
        draw();
    }

    return 0;
}

