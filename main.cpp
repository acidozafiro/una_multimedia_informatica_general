#include <iostream>
#include <string>
using namespace std;

int main() {
    bool jugando = true; // Estado del juego
    int opcion; // Para el menú principal
    int decision; // Para las decisiones dentro del juego
    float salud = 100.0; // Vida de Mario
    string nombre; // Nombre del jugador

    // Título
    cout << "¡Bienvenido a la Aventura en el Reino Hongo!\n";
    cout << "Introduce tu nombre: ";
    getline(cin, nombre);

    // Menú principal
    while (jugando) {
        cout << "\nMenú Principal:\n";
        cout << "1. Iniciar Aventura\n";
        cout << "2. Instrucciones\n";
        cout << "3. Salir\n";
        cout << "Elige una opción: ";
        cin >> opcion;

        switch(opcion) {
            case 1: {
                // Iniciar la aventura
                cout << "\n¡Comenzó la aventura, " << nombre << "...\n";
                
                // Nivel 1: Enfrentarse a un Goomba
                cout << "Estás en el Reino Hongo..\n";
                cout << "Un Goomba se acerca, ¿qué hacés?\n";
                cout << "1. Saltar sobre el Goomba\n";
                cout << "2. Huir hacia una tubería\n";
                cout << "Elige una opción: ";
                cin >> decision;

                if (decision == 1) {
                    salud -= 10.0; // Perdés algo de vida por no tener suficiente velocidad.
                    cout << "Saltas sobre el Goomba, pero no lo lograste bien. Perdés 10 de vida.\n";
                } else if (decision == 2) {
                    cout << "Huís rápidamente hacia la tubería y llegas a un nuevo nivel.\n";
                } else {
                    cout << "Opción no válida...\n";
                }

                // Verifica si la vida llega a 0
                if (salud <= 0) {
                    cout << "¡Perdiste! Vida agotada.\n";
                    jugando = false; // Terminar el juego
                } else {
                    // Nivel 2: Decisión sobre el camino a seguir
                    cout << "Tu vida actual es: " << salud << "\n";
                    cout << "Ahora te enfrentarás a un dilema...\n";
                    cout << "Hay dos caminos: el camino del castillo de Bowser o el bosque misterioso.\n";
                    cout << "1. Ir al castillo de Bowser\n";
                    cout << "2. Ir al bosque misterioso\n";
                    cout << "Elige una opción: ";
                    cin >> decision;

                    if (decision == 1) {
                        cout << "Te enfrentas a Bowser en su castillo...\n";
                        // Aquí podrías crear una batalla con Bowser, o que el jugador encuentre un poder extra.
                    } else if (decision == 2) {
                        cout << "El bosque misterioso es peligroso... Te encuentras con una estrella.\n";
                    }

                    // Continuar con más decisiones...
                }

                break;
            }
            case 2: {
                // Instrucciones
                cout << "\nInstrucciones:\n";
                cout << "Usa las opciones numéricas para tomar decisiones en la aventura.\n";
                cout << "El objetivo es rescatar a la Princesa Durazno y derrotar a Bowser.\n";
                break;
            }
            case 3: {
                // Salir del juego
                cout << "¡Gracias por jugar a la Aventura en el Reino Hongo! ¡Hasta luego, !" << nombre << ".\n";
                jugando = false;
                break;
            }
            default:
                cout << "Opción no válida, intenta nuevamente.\n";
                break;
        }
    }

    return 0;
}
