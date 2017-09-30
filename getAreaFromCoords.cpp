#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <iostream>
#include <cmath>

#define test_args_enabled 0
class vec2D {
public:
    vec2D() : _x(0.0f), _y(0.0f) {};
    vec2D(float x, float y) : _x(x), _y(y) {};
    vec2D(const vec2D& inVec) : _x(inVec.getX()), _y(inVec.getY()) {};
    vec2D& operator= (const vec2D& inVec) {
        this->_x = inVec.getX();
        this->_y = inVec.getY();
        return *this;
    };
    ~vec2D() {};
    const float getX() const {
        return this->_x;
    }

    const float getY() const {
        return this->_y;
    }

    float my_dist(const vec2D& y) {
        // calculate delta (difference)
        float xDelt = this->_x  - y.getX();
        float yDelt = this->_y  - y.getY();
        // square the delta
        xDelt *= xDelt;
        yDelt *= yDelt;
        // accumulate in xDelt
        xDelt += yDelt;
        return std::sqrt(xDelt);
    };
private:
    float _x;
    float _y;
};

float floatTriangleArea(float args[]) {
    // convert the args into numbers
    vec2D v_arr0;
    vec2D v_arr1;
    vec2D v_arr2;
    v_arr0 = vec2D(args[0], args[1]);
    v_arr1 = vec2D(args[2], args[3]);
    v_arr2 = vec2D(args[4], args[5]);
   
    // calculate the side lengths a, b, c
    float a = v_arr0.my_dist(v_arr1);
    float b = v_arr1.my_dist(v_arr2);
    float c = v_arr2.my_dist(v_arr0);
    std::cout << a << " " << b << " " << c << std::endl;
   /** use herons formula
     *  s = 1/2(a + b + c)
     *  A = sqrt(s*(s-a)*(s-b)*(s-c))
     */
    float s = 0.5f * (a + b + c);
    return sqrtf(s * (s-a) * (s-b) * (s-c));
};

void usage() {
	std::cout << "you're using me wrong, BABAY!\ninclude three points separated by spaces:"<< std::endl;
    std::cout << "areaFromCoords x1 y1 x2 y2 x3 y3" << std::endl;
};

int main(int argc, char** argv) {
	// read in from commandline
	#if test_args_enabled
            float f_arr[6] = {1.0f, 2.0f, 7.0f, 12.0f, 13.0f, 29.0f};
            std::cout << floatTriangleArea(&f_arr[0]) << std::endl;
    #else
    if(argc < 6) {
        usage();
        return -1;
    } else {
        float f_arr[argc];
        for (int i = 0; i < argc - 1; i++) {
            float tmp = atof(*(argv++));
            f_arr[i] = tmp;
        }        
        std::cout << floatTriangleArea(&f_arr[0]) << std::endl;
        return 1; 
    }
    #endif
        
}
