#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

int main() {
    float lado1, lado2, lado3;

    // Ingreso de datos
    cout << "Ingrese la longitud del primer lado: ";
    cin >> lado1;
    cout << "Ingrese la longitud del segundo lado: ";
    cin >> lado2;
    cout << "Ingrese la longitud del tercer lado: ";
    cin >> lado3;

    // Verificar si forma un triángulo válido
    if (lado1 > 0 && lado2 > 0 && lado3 > 0 &&
        lado1 + lado2 > lado3 &&
        lado1 + lado3 > lado2 &&
        lado2 + lado3 > lado1) {
        
        // Determinar el tipo de triángulo
        if (lado1 == lado2 && lado2 == lado3) {
            cout << "El triangulo es EQUILATERO." << endl;
        } else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
            cout << "El triangulo es ISOSCELES." << endl;
        } else {
            cout << "El triangulo es ESCALENO." << endl;
        }

    } else {
        cout << "Las medidas ingresadas NO forman un triangulo valido." << endl;
    }

    return 0;
}
