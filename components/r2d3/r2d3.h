#include <GL/glut.h>
#include <iostream>

using namespace std;

class R2D3 {
    private:
    int radius;
    int cap_radius;

    public:
    R2D3();
    void draw(float x, float y, float z);
};
