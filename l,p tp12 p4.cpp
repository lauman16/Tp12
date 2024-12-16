#include <iostream>
#include <string>
using namespace std;

class Socio {
private:
    string nombre;
    int antiguedad;

public:
    Socio() {
        cout << "Ingrese nombre del socio: "<<endl;
        getline(cin, nombre);
        cout << "Ingrese antigüedad en años: "<<endl;
        cin >> antiguedad;
        cin.ignore();
    }

    int getAntiguedad() {
        return antiguedad;
    }

    string getNombre() {
        return nombre;
    }
};

class Club {
private:
    Socio socios[3];

public:
    void socioantiguo() {
        int maxAntiguedad = 0;
        string nombreMax;
        for (int i = 0; i < 3; i++) {
            if (socios[i].getAntiguedad() > maxAntiguedad) {
                maxAntiguedad = socios[i].getAntiguedad();
                nombreMax = socios[i].getNombre();
            }
        }
        cout << "El socio con mayor antigüedad es: " << nombreMax << " con " << maxAntiguedad << " años." << endl;
    }
};

int main() {
    Club equipo;
    equipo.socioantiguo();
    return 0;
}