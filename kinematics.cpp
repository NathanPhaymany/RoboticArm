#include "kinematics.h"

using namespace std;

kinematics::kinematics(int l1, int l2, int x, int y) {
    this->l1 = l1;
    this->l2 = l2;
    this->x = x;
    this->y = y;
}

array<int, 2> kinematics::getPos() {
    return {x, y};
}

