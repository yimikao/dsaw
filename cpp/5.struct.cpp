#include <iostream>


struct Euclid {
    int x;
    int y;
    Euclid(int x, int y) {
        x = x;
        y = y;
    };
    Euclid mirror() {
        return Euclid(x, -y);
    };
    Euclid extend(const Euclid &other) {
        return Euclid(x+other.x, y+other.y);
    }
    void print(const Euclid &e) {
        std::cout << e.x << e.y << std::endl;
    };
};

