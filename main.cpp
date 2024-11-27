#include "kinematics.h"
#include <iostream>

using namespace std;

int main() {
    kinematics arm = kinematics(5, 5, 3, 2);
    array<int, 2> pos = arm.getPos();
    cout << pos[0] << " " << pos[1];
}