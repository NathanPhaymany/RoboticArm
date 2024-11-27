#ifndef kinematics_H
#define kinematics_H
#include <array>

class kinematics {
    private:
    int l1, l2, x, y;

    public:
    kinematics(int l1, int l2, int x, int y);
    std::array<int, 2> getPos();
    void moveTo(int newx, int newy);
    void move(int deltax, int deltay);
};

#endif