// Deira Luca
// Moseinco Valentín
// Santin Lucero

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    bool jugando = true; // Estado del juego
    bool finPelea = false; // Para la pelea con Bowser
    //int opcion; // Para el menú principal
    int decision; // Para las decisiones dentro del juego
    float salud = 100; // Vida de Mario
    float saludBowser = 100; // Vida de Bowser
    string nombre; // Nombre del jugador

    // Título
    cout << "¡Bienvenido a la Aventura en el Reino Hongo!\n";
    cout << "Introduce tu nombre: ";
    getline(cin, nombre);

    // Menú principal
    do {
        system("clear");
        cout << "\nMENÚ PRINCIPAL:\n\n";
        cout << "1. Iniciar Aventura\n";
        cout << "2. Instrucciones\n";
        cout << "3. Salir\n\n";
        cout << "Elige una opción: ";
        cin >> decision;

        switch (decision) {
            case 1: {
                // Iniciar la aventura
                system("clear");
                cout << "\n¡Comenzó la aventura, " << nombre << "...\n";

                    // Nivel 1: Enfrentarse a un Goomba
                    cout << "Estás en el Reino Hongo..\n";
                    cout << "Un Goomba se acerca, ¿Qué haces?\n\n";
                    cout << "1. Saltar sobre el Goomba\n";
                    cout << "2. Huir hacia una tubería\n\n";
                    cout << "Elige una opción: ";
                    cin >> decision;

                    if (decision == 1) {
                        salud -= 10;
                        system("clear");
                        cout << "\nSaltas sobre el Goomba, pero no lo lograste bien. Pierdes 10 de vida.\n";
                        cout << "Huyes, triste y desesperado por el miedo, hacia la tubería.\n\n";
                    } else if (decision == 2) {
                        system("clear");
                        cout << "\nHuyes rápidamente hacia la tubería.\n\n";
                    } else {
                        system("clear");
                        cout << "Opción no válida...\nElija nuevamente\n\n";
                        cin.clear() ;
                        cin.ignore();
                    }

                system("clear");

                    // Nivel 2: Enfrentarse a un Koopa Troopa
                    cout << "¡Has llegado a un nuevo nivel!\n\n";
                    cout << "A lo lejos puedes ver un Koopa Troopa de color verde.\n";
                    cout << "No parece muy amigable, pero si logras superarlo ";
                    cout << "hay otra tubería esperándote...\n\n";

                    cout << "Presione ENTER para continuar...";
                    cin.ignore().get();

                    system("clear");
                    cout << "¡Cuidado " << nombre << "!\n";
                    cout << "¡El Koopa Troopa verde se acerca rápidamente hacia ti!\n";
                    cout << "¿Que quieres hacer?\n\n";
                    cout << "1. Saltar para intentar esquivar al Koopa Troopa.\n";
                    cout << "2. Enfrentar la embestida.\n\n";
                    cout << "Elige una opción: ";
                    cin >> decision;

                    if (decision == 1) {
                        system("clear");
                        cout << "Saltas y el Koopa Troopa pasa por debajo tuyo.\n";
                        cout << "Ha continuado su camino a toda velocidad y al llegar al precipicio se ha caído.\n\n";
                        cout << "Que suerte, has podido evitar su ataque.\n";
                    } else if (decision == 2) {
                        system("clear");
                        cout << "¡El Koopa Tropa golpea y fuerte!\n";
                        cout << "Pierdes 10 de vida.\n\n";
                        cout << "Afortunadamente luego de golpearte ha seguido su ";
                        cout << "camino y se ha caido por el precipicio.\n";
                        salud -= 10;
                        cout << "Tu nivel de vida ahora es de " << salud << ".\n";
                    } else {
                        system("clear");
                        cout << "Opción no válida...\nElija nuevamente\n\n";
                        cin.clear() ;
                        cin.ignore();
                    }

                    // Nivel 3: Enfrentar a Bowser
                    system("clear");
                    cout << "Llegaste a un castillo aterrador\n";
                    cout << "Aquí dentro, Bowser tiene secuestrada a tu amada, la princesa Duraznito...\n";
                    cout << "Vas a tener que pelear con él para salvarla.\n";
                    cout << "La batalla comenzará en...\n";
                    for (int x = 3; x >= 1; x--) {
                     cout << endl << x << endl;
                    }
                    cout << "¡Bowser viene a atacarte!\n";
                    cout << "Elegí una de las siguientes opciones para enfrentarlo\n";
                    cout << "1. Saltar sobre Bowser\n";
                    cout << "2. Esquivarlo y correr alrededor para confundirlo\n";
                    cin >> decision;
                    
                    if (decision == 1) {
                        system("clear");
                        cout << "Saltaste sobre Bowser y lograste lastimarlo un poco\n";
                        saludBowser -= 30;
                        cout << "Igualmente, logró contraatacar y te hizo algo de daño.\n";
                        salud -= 20;
                        } 
                        else if (decision == 2) {
                        system("clear");
                        cout << "Corrés alrededor de Bowser para confundirlo...\n";
                        cout << "Lográs esquivar su ataque, pero te tropezás un poco.\n";
                        salud -= 10;
                        } else {
                        system("clear");
                        cout << "Opción inválida. Se considera que no hiciste nada.\n";
                        cout << "Bowser te golpea.\n";
                        salud -= 30;
                        cout << "Tu salud: " << salud << endl;
                        cout << "Salud de Bowser: " << saludBowser << endl;
                    }

                    cout << "\n¡Continúa la batalla!\n";
                    cout << "¡Encontraste una flor de fuego en el castillo!\n";
                    cout << "¿Cuál es tu próximo ataque? Elegí una de las opciones\n";
                    cout << "1. Convertirte en Fire Mario y lanzar una bola de fuego\n";
                    cout << "2. Pegarle a Bowser con la flor\n";
                    cin >> decision;
                    
                    if (decision == 1) {
                        system("clear");
                        cout << "¡¡Te transformaste en FIRE MARIO!!\n";
                        cout << "Preparate para lanzar una bola de fuego en...\n";
                        for (int i = 0; i < 3; i++) {
                            cout << ".";
                        }
                        cout << "\n";
                        srand(time(0));
                        int exito = rand() % 100;
                        if (exito < 30) {
                             cout << "¡Fallaste el tiro! Bowser esquiva con agilidad.\n";
                            cout << "Te ataca con su aliento de fuego.\n";
                            salud -= 25;
                            } else {
                                cout << "¡La bola de fuego impacta a Bowser!\n";
                                cout << "¡Bowser ruge de furia!\n";
                                saludBowser -= 70;
                            }
                        } else if (decision == 2) {
                            system("clear");
                            cout << "Le pegás a Bowser con la flor como si fuera una espada...\n";
                            cout << "No es muy efectivo, pero lo descolocás por un momento.\n";
                            cout << "Bowser se enoja y te empuja con fuerza.\n";
                            saludBowser -= 20;
                            salud -= 10;
                        } else {
                            system("clear");
                            cout << "Opción inválida. Bowser te ataca mientras dudás.\n";
                            salud -= 30;
                            cout << "Tu salud: " << salud << endl;
                            cout << "Salud de Bowser: " << saludBowser << endl;
                        }
                    // Fin de juego
                    if (saludBowser <= 0 && salud > 0) {
                    cout << "\n¡Derrotaste a Bowser! ¡La princesa Durazno está a salvo!\n";
                    cout << "¡GANASTE EL JUEGO!\n";
                    jugando = false;
                    } else if (salud <= 0 && saludBowser > 0 ) {
                    cout << "\nBowser te ha derrotado...\n";
                    cout << "FIN DEL JUEGO\n";
                    jugando = false;
                    } else {
                    cout << "\nBowser ha quedado herido, pero logró escapar por ahora...\n";
                    cout << "¡Continuarás esta aventura en una próxima misión!\n";
                    cout << "Presione ENTER para continuar..." << endl;
                    cin.ignore().get();
                    }
                system("clear");
            }

            case 2: {
                system("clear");
                cout << "\nInstrucciones:\n";
                cout << "Usa las opciones numéricas para tomar decisiones en la aventura.\n";
                cout << "El objetivo es rescatar a la Princesa Durazno y derrotar a Bowser.\n\n";

                cout << "Presione ENTER para volver al menú principal...";
                cin.ignore().get();
                break;
            }

            case 3: {
                system("clear");
                cout << "\n¡Gracias por jugar a la Aventura en el Reino Hongo! ¡Hasta luego, " << nombre << "!\n\n";
                jugando = false;
                break;
            }

            default:
                cout << "Opción no válida, intenta nuevamente.\n\n";
                cin.clear() ;
                cin.ignore();
                break;
        }

    } while (jugando);

    return 0;
}
