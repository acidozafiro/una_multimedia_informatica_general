// Deira Luca
// Moseinco Valentín
// Santin Lucero

#include <iostream>
#include <string>
using namespace std;

int main() {
    bool jugando = true; // Estado del juego
    int opcion; // Para el menú principal
    int decision; // Para las decisiones dentro del juego
    float salud = 100.0; // Vida de Mario
    string nombre; // Nombre del jugador
cout << R"(
MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWNK0OkxxddddddxxkO0XWWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWKkdlc:,,''''''''''''',,;clox0XWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWKkoc;'',;;;;;;;;;;;;;;;;;;;;;,,',:ldONMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWKdc;',;;;;;;;,',,;:ccllcc:;,'',;;;;;;,',:okNMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMXxc,',;;;;;;;,';colcONWWWWWWXx:coc;',;;;;;;;,';o0WMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWKo;',;;;;;;;;,':xKNx,';l0WMMWOl;',xNXx:',;;;;;;;;',ckNMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMW0o,',;;;;;;;;;',xNMNo,;cc;;lddl;;cc;,oNMNx,';;;;;;;;;,':kNMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMMMMMMMMMMMMMMMKo,';;;;;;;;;;;';OWMXl,:c,';::,,;:;',::,lXMWO,';;;;;;;;;;,':OWMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMMMMMMMMMMMMMNx;',;;;;;;;;;;;,'dWMXl,:c,;xo,;cc;,lx:,c:,cKMWo.;;;;;;;;;;;;,,lKWMMMMMMMMMMMMMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMMMMMMMMMMMW0c',;;;;;;;;;;;;;,'kMXc,:c;,kWW0l;;cOWMk,;c:,cKWd',;;;;;;;;;;;;;',xNMMMMMMMMMMMMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMMMMMMMMMMNx,';;;;;;;;;;;;;;;,'oKc'cc:,oNMMMWXXNMMMWd,:cc':Oc';;;;;;;;;;;;;;;,'cKMMMMMMMMMMMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMMMMMMMMMXl',;;;;;;;;;;;;;;;;;,'cl:;;'cXMMMMMMMMMMMMXc';,:o:',;;;;;;;;;;;;;;;;;';kWMMMMMMMMMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMMMMMMMW0:';;;;;;;;;;;;;;;;;;;;,':dxdo0WNNNNWWWWWWMMMKolxd:',;;;;;;;;;;;;;;;;;;;,'dNMMMMMMMMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMMMMMMWO;';;;;;;;;;;;;;;;;;;;,,''..;llcc::::cccccllllloo;..',,;;;;;;;;;;;;;;;;;;;,'oXMMMMMMMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMMMMMWk,';;;;;;;;;;;;;;,,''''''''',,,,;;;;;;;;;;;;,,,,,'''''''''''',,;;;;;;;;;;;;;,'lXMMMMMMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMMMMMO;';;;;;;;;;;;,'''''',,;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;,,''''''',;;;;;;;;;;,'oNMMMMMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMMMM0:';;;;;;;;;,'..'',;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;,''''',;;;;;;;;,'dWMMMMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMMMNl.;;;;;;;;'..',;;;;;;;;;;;;;,,,'''',,,,,,,,,,;,,,,,''',,,;;;;;;;;;;;;,'..';;;;;;;',OMMMMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMMMx',;;;;;,'..,;;;;;;;;;,''.....,lodxxxkkOOOOOOOOOOkkkxdc.  .....',;;;;;;;;,'.',;;;;;.cXMMMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMMXc.;;;;;,..,;;;;;;,'...        .,dKXXXXXXXXXXXXXXXXXXOc.          ..',,;;;;;,..';;;;,,kMMMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMM0,';;;;'.';;;;;,';:'              ;OXXXXXXXXXXXXXXXXx'             .oo:,,;;;;;'.';;;,'dWMMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMMk,';;;,..;;;;,,:dOO,   .;loool:'.  ;0XXXXXXXXXXXXXXk'   .;ldkxdl;. .oXKkl,,;;;;..;;;;.lWMMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMMO,';;;,..;;,'ckKXXd. ,d0XXXXXXXKxc..oXXXXXXXXXXXXXXl .;o0XXXXXXXKk:.cKXXXOc',;,..;;;;.oWMMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMMK;';;;;'....,OXXXXx;oKXXXXXX000KXXOlxXXXXXXXXXXXXXKl;xKK000KXXXXXXKxxKXXXXx....',;;;,'xMMMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMMWo.,;;;;'...;OXXXXKKXXXXKkdxxxxxod0XXXXXXXXXXXXXXXXK0xodxxxxdx0XXXXXXXXXXXx'...';;;;';0MMMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMMM0;';;;'..,.;OXXXXXXXXXOdd0NNkoc;';d0XXXXXXXXXXXXXXk:',:ldKWXxldKXXXXXXXXXx'.,..';;,.oWMMMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMMMWd.';,..',.,OXXXXXXXXklOWW0c,:c:::,lKXXXXXXXXXXXXk;;c:cc;;xNMXooKXXXXXXXXx'.,'..,;':KMMMMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMNOdolcc'.'''.,kXXXXXXXOlkWM0;;c,';;'',xXXXXXXXXXXX0:'',:,.::,dWMKodXXXXXXXXx'.,'...,'lkKWMMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMNdlOKXXXx'.''.,OXXXXXXXdlXMNl,:' .do. .cKXXXXXXXXXXx'  :k: .;;;OMMxl0XXXXXXXx'.''..ckOOxoxXMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMkcOX00KX0:.',.,OXXXXXXXooNMX:,:.       ;0K0OOOOOO0Kd.       ':,xMMklOXXXXXXXx'.''.;0X0kO0ooXMMMMMMMMMMMMMM
MMMMMMMMMMMMMWdlkoddddkc.',.,OXXXXXXXooNMNc,:.      .;dxdxxxxxxddl'.      ,:,kMMkl0XXXXXXXx'.,'.,oddxdoxlxWMMMMMMMMMMMMM
MMMMMMMMMMMMMNoclxXXKkl'.',.;OXXXXXXXkl0MWx,:,  .,lxOKXXXXXXXXXXXK0ko:.  .:,cXMNooKXXXXXXXk,.,'.,xKXXXdlllXMMMMMMMMMMMMM
MMMMMMMMMMMMMNo;lOXXXKd'.,'.cKXO0XXXXKooXMNd,,':xKXXXXXXXXXXXXXXXXXXXX0l'',c0MWklOXXXXKO0X0:.''.;xOXXXxlclKMMMMMMMMMMMMM
MMMMMMMMMMMMMWx;ckXXkoc..,.,kKo..cOKXX0doxO0l,dKXXXXXXXXXXXXXXXXXXXXXXXXO:;k0kddOXXXKx:.,xXx,.'.;xodKXdlcoNMMMMMMMMMMMMM
MMMMMMMMMMMMMMO:;dX0lxO;.''dKl.   .;oOKXKOxd;oKXXXXXXXXXXXXXXXXXXXXXXXXXX0c:dk0XX0kl,.   .dKo...lXOcx0ollkMMMMMMMMMMMMMM
MMMMMMMMMMMMMMNocOXOlxXo..cKd.       .':cldo:xXXXXXXXXXXXXXXXXXXXXXXXXXXXXx:odlc;'.       'k0:.,kXOlxKOldNMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMKldXXkldOl;kK:               .xXXXXXXXXXXXXXXXXXXXXXXXXXXXXx.               lXd,d0xldKKooXMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMM0lxXX0xd:c0K:                lKXXXXXXXXXXXXXXXXXXXXXXXXXXKl               .oXOccddOXKdoKMMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMMM0ldKXXXooKXk'               .xXXXXXXXXXXXXXXXXXXXXXXXXXXx.               :0X0loXXX0ddXMMMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMMMMKooOXXolKXXOc.              .oKXXXXXXXXXXXXXXXXXXXXXXKd.              'o0XX0ldXXOoxNMMMMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMMMMMNkodkocOXXXXOo:,.            ,d0XXXXXXXXXXXXXXXXXXKx:.          .',cd0XXXXOcoOxd0WMMMMMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMMMMMMMN0xo;dXXXXXXXK0o.            .;ldk0KKXXXXXKK0kdc,.           'xKXXXXXXXXd:dOKWMMMMMMMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMMMMMMMMMMWxcOXXXXXXXXKx,               ..'',,,,,''..             .;kXXXXXXXXXkcOMMMMMMMMMMMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMMMMMMMMMMMNxlOXXXXXXXXX0xl:;,;::,                       .;c;;,;:lkKXXXXXXXXXkckWMMMMMMMMMMMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMMMMMMMMMMMMNklkXXXXXXXXXXXXXXX0xdl;'.      ....      .';ldkKXXXXXXXXXXXXXXKxlOWMMMMMMMMMMMMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMMMMMMMMMMMMMW0ooOXXXXXXXXXXXXXKkxxxoc;,,,;cdxdo:;,,;:lddxxOKXXXXXXXXXXXXXOooKMMMMMMMMMMMMMMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMMMMMMMMMMMMMMMNOdxOXXXXXXXXXXXXXXXXK0OkkxxxxxxxxkkOO0KXXXXXXXXXXXXXXXXKxod0WMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMW0kkO0XXXXXXXXXXXXXXXKOxxxxkkkkkxxxx0XXXXXXXXXXXXXXKkddxKWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMN0OkkOKXXXXXXXXXXXXKOkkxxxxxxxkO0KXXXXXXXXXXX0xddx0NMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMN0kxxkOKXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXKkdddkKWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWXOkxxxOKXXXXXXXXXXXXXXXXXXXXXXKOxxxxOXWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWKOkkkkkkO0KXXXXXXXXKK0OkkkOO0XWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWNKOkxxxxxxxxxxxxkOO0KNWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWNNNNNNWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
)" << endl; 
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
                system("clear");
                cout << "\n¡Comenzó la aventura, " << nombre << "...\n";

                do{
                // Nivel 1: Enfrentarse a un Goomba
                cout << "Estás en el Reino Hongo..\n";
                cout << "Un Goomba se acerca, ¿qué hacés?\n\n";
                cout << "1. Saltar sobre el Goomba\n";
                cout << "2. Huir hacia una tubería\n\n";
                cout << "Elige una opción: ";
                cin >> decision;

                if (decision == 1) {
                    salud -= 10.0; // Perdés algo de vida por no tener suficiente velocidad.
                    cout << "Saltas sobre el Goomba, pero no lo lograste bien. Perdés 10 de vida.\n";
                } else if (decision == 2) {
                    cout << "Huís rápidamente hacia la tubería y llegas a un nuevo nivel.\n";
                } else {
                    system("clear");
                    cout << "Opción no válida...\nElije nuevamente\n\n";
                    cin.clear();
                    cin.ignore();
                }
              } while (decision != 1 && decision != 2);

                
                // Verifica si la vida llega a 0
                if (salud <= 0) {
                    cout << "¡Perdiste! Vida agotada.\n";
                    jugando = false; // Terminar el juego
                };

                do{
                //Nivel 2. Enfrentamiento con Koopa Troopa
                cout << "¡Has llegado a un nuevo nivel!\n\n";
                cout << "A lo lejos puedes ver un Koopa Troopa de color verde.\n";
                cout << "No parece muy amigable, pero si logras superarlo "; 
                cout << "hay otra tubería esperándote...\n\n";

                cout << "Presione ENTER para continuar...";
                cin.ignore().get();

                system("clear");
                cout << "¡Cuidado " << nombre << "!\n";
                cout << "¡Un Koopa Troopa verde se acerca rápidamente hacia ti!\n";
                cout << "¿Que quieres hacer?\n\n";
                cout << "1. Saltar para intentar esquivar al Koopa Troopa.\n";
                cout << "2. Enfrentar la embestida.\n\n";
                cout << "Elige una opción: ";
                cin >> decision;

                if (decision == 1){
                    system("clear");
                    cout << "Saltas y el Koopa Troopa pasa por debajo tuyo.\n";
                    cout << "Ha continuado su camino a toda velocidad y al llegar al precipicio se ha caído.\n\n";
                    cout << "Que suerte, has podido evitar su ataque.\n";
                } else if(decision == 2){
                    system("clear");
                    cout << "¡El Koopa Tropa golpea y fuerte!\n";
                    cout << "Pierdes 10 de vida.\n\n";
                    cout << "Afortunadamente luego de golpearte ha seguido su ";
                    cout << "camino y se ha caido por el precipicio.\n";
                    salud -= 10.0;
                    cout << "Tu nivel de vida ahora es de " << salud << ".";
                } else {
                    system("clear");
                    cout << "Opción no válida...\nElija nuevamente\n\n";
                    cin.clear();
                    cin.ignore();
                }
            }while(decision != 1 && decision != 2);

                    // Nivel 3: Decisión sobre el camino a seguir
                    cout << "Tu vida actual es: " << salud << "\n";
                    cout << "Ahora te enfrentarás a un dilema...\n";
                    cout << "Hay dos caminos: el camino del castillo de Bowser o el bosque misterioso.\n";
                    cout << "1. Ir al castillo de Bowser\n";
                    cout << "2. Ir al bosque misterioso\n";
                    cout << "Elige una opción: ";
                    cin >> decision;

                    if (decision == 1) {
                        cout << "Te enfrentas a Bowser en su castillo...\n";
                        cout << "Ingresarás al castillo de Bowser en...";
                            for (int x = 3; x >= 1; x--) {
                                cout << endl << x << endl;
                                }

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
