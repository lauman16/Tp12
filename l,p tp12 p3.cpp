#include <iostream>
using namespace std;

class Puntito {
private:
    int x;
    int y;

public:
    Puntito(): x(0), y(0) {}
    };

    Puntito(int xVal, int yVal) : x(xVal), y(yVal) {}

    void imprimir() {
        cout << "Punto: (" << x << ", " << y << ")" << endl;
    }

int main() {
    Puntito p1;
    p1.imprimir();

    Puntito p2(3, 4);
    p2.imprimir();
    
    return 0;
}