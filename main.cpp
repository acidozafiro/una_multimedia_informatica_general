#include <iostream>
#include <string>
using namespace std;

int main() {
    bool jugando = true;
    int opcion;
    int decision;
    int salud = 100;
    string nombre;
    bool estrellaDisponible = false; // Empezás sin la estrella
    bool bosqueVisitado = false;  // Chequea si ya fuiste al bosque

    cout << R"(
                                              
)" << endl;

    cout << "¡Bienvenido a la Aventura en el Reino Hongo!\n";
    cout << "Introduce tu nombre: ";
    getline(cin, nombre);

    while (jugando) {
        cout << "\nMenú Principal:\n\n";
        cout << "1. Iniciar Aventura\n";
        cout << "2. Instrucciones\n";
        cout << "3. Salir\n";
        cout << "Elige una opción: ";
        cin >> opcion;

        switch(opcion) {
            case 1: {
                cout << "\n¡Comenzó la aventura, " << nombre << "...\n";

                // Nivel 1
                cout << "Un Goomba se acerca, ¿qué hacés?\n";
                cout << "1. Saltar sobre el Goomba\n";
                cout << "2. Huir hacia una tubería\n";
                cout << "Elige una opción: ";
                cin >> decision;

                if (decision == 1) {
                    salud -= 10;
                    cout << "Saltaste pero no lo lograste bien. Perdés 10 de vida.\n";
                } else if (decision == 2) {
                    cout << "Huís hacia una tubería y llegás a un nuevo nivel.\n";
                } else {
                    cout << "Opción no válida...\n";
                }

                if (salud <= 0) {
                    cout << "¡Perdiste! Vida agotada.\n";
                    jugando = false;
                    break;
                }

                // Nivel 2
                cout << "\nTu vida actual es: " << salud << "\n";
                cout << "Hay dos caminos: el castillo de Bowser o el bosque misterioso.\n";
                cout << "1. Ir al castillo de Bowser\n";
                cout << "2. Ir al bosque misterioso\n";
                cout << "Elige una opción: ";
                cin >> decision;

                if (decision == 1) {
                    cout << "Te enfrentas a Bowser en su castillo...\n";

                    int saludJugador = salud;
                    int saludBowser = 80;
                    int accion;
                    bool enBatalla = true;

                    while (enBatalla) {
                        cout << "\nTu salud: " << saludJugador << " | Salud de Bowser: " << saludBowser << "\n";
                        cout << "¿Qué querés hacer?\n";
                        cout << "1. Saltar sobre Bowser (ataque normal)\n";
                        cout << "2. Usar la estrella (ataque fuerte)\n";
                        cout << "3. Curarte (+20 salud)\n";
                        cout << "Elige tu acción: ";
                        cin >> accion;

                        switch(accion) {
                            case 1:
                                cout << "Saltaste sobre Bowser. Le quitas 10 de salud.\n";
                                saludBowser -= 10;
                                break;
                            case 2:
                                if (estrellaDisponible) {
                                    cout << "¡Usaste la estrella! Le haces 20 de daño.\n";
                                    saludBowser -= 20;
                                    estrellaDisponible = false;
                                } else {
                                    cout << "Ya usaste tu única estrella o no la tenés y necesitas buscarla en el bosque.\n";
                                }
                                break;
                            case 3:
                                cout << "Te curaste. +20 salud.\n";
                                saludJugador += 20;
                                if (saludJugador > 100) saludJugador = 100;
                                break;
                            default:
                                cout << "Acción no válida, perdiste el turno.\n";
                                break;
                        }

                        if (saludBowser > 0) {
                            cout << "Bowser ataca...\n";
                            saludJugador -= 15;
                            cout << "Bowser te quita 15 de salud.\n";
                        }

                        if (saludJugador <= 0) {
                            cout << "¡Perdiste la batalla! Bowser te venció.\n";
                            enBatalla = false;
                            jugando = false;
                        } else if (saludBowser <= 0) {
                            cout << "¡Ganaste! Has derrotado a Bowser y rescatado a la princesa.\n";
                            enBatalla = false;
                            cout << "¡Felicidades, " << nombre << "! Completaste la aventura.\n";
                            jugando = false;
                        }
                    }

                } else if (decision == 2) {
                    if (bosqueVisitado) {
                        cout << "Ya visitaste el bosque y no hay más estrellas brillantes...\n";
                    } else {
                        cout << "Entrás al bosque misterioso y encontrás una estrella brillante.\n";
                        estrellaDisponible = true;
                        bosqueVisitado = true;
                        cout << "Guardás la estrella para matar a Bowser.\n";
                    }
                } else {
                    cout << "Opción no válida...\n";
                }

                break;
            }
            case 2:
                cout << "\nInstrucciones:\n\n";
                cout << "★ Usá los números para tomar decisiones.\n";
                cout << "★ Encontrá la estrella en el bosque antes de enfrentar a Bowser.\n";
                cout << "★ Derrotá a Bowser y rescatá a la princesa Durazno.\n";
                break;
            case 3:
                cout << "¡Gracias por jugar, " << nombre << "! Hasta luego.\n";
                jugando = false;
                break;
            default:
                cout << "Opción no válida, intentá nuevamente.\n";
                break;
        }
    }

    return 0;
}
