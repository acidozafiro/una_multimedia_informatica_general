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
    int decision; // Para las decisiones dentro del juego
    string nombre; // Nombre del jugador

    // Título
    system("clear");
    cout << R"(
   __  __    ___     ___     ___    _____    ___              ___     ___     ___     ___    _____    ___     ___   
  |  \/  |  /   \   | _ \   |_ _|  |_   _|  / _ \     o O O  | _ )   |_ _|   / __|   / _ \  |_   _|  | __|   / __|  
  | |\/| |  | - |   |   /    | |     | |   | (_) |   o       | _ \    | |   | (_ |  | (_) |   | |    | _|    \__ \  
  |_|__|_|  |_|_|   |_|_\   |___|   _|_|_   \___/   TS__[O]  |___/   |___|   \___|   \___/   _|_|_   |___|   |___/  
  _|"""""|_|"""""|_|"""""|_|"""""|_|"""""|_|"""""| {======|_|"""""|_|"""""|_|"""""|_|"""""|_|"""""|_|"""""|_|"""""| 
  "`-0-0-'"`-0-0-'"`-0-0-'"`-0-0-'"`-0-0-'"`-0-0-'./o--000'"`-0-0-'"`-0-0-'"`-0-0-'"`-0-0-'"`-0-0-'"`-0-0-'"`-0-0-' 
   ___     ___     ___     ___     ___    _____    ___    _  _     ___     ___                                    
  | _ \   | __|   / __|   / __|   /   \  |_   _|  /   \  | \| |   |   \   / _ \                                   
  |   /   | _|    \__ \  | (__    | - |    | |    | - |  | .` |   | |) | | (_) |                                  
  |_|_\   |___|   |___/   \___|   |_|_|   _|_|_   |_|_|  |_|\_|   |___/   \___/                                   
_|"""""|_|"""""|_|"""""|_|"""""|_|"""""|_|"""""|_|"""""|_|"""""|_|"""""|_|"""""|                                  
"`-0-0-'"`-0-0-'"`-0-0-'"`-0-0-'"`-0-0-'"`-0-0-'"`-0-0-'"`-0-0-'"`-0-0-'"`-0-0-'                                  
   ___              ___    _   _    ___     ___     ____   _  _     ___    _____    ___                           
  /   \     o O O  |   \  | | | |  | _ \   /   \   |_  /  | \| |   |_ _|  |_   _|  / _ \                          
  | - |    o       | |) | | |_| |  |   /   | - |    / /   | .` |    | |     | |   | (_) |                         
  |_|_|   TS__[O]  |___/   \___/   |_|_\   |_|_|   /___|  |_|\_|   |___|   _|_|_   \___/                          
_|"""""| {======|_|"""""|_|"""""|_|"""""|_|"""""|_|"""""|_|"""""|_|"""""|_|"""""|_|"""""|                         
"`-0-0-'./o--000'"`-0-0-'"`-0-0-'"`-0-0-'"`-0-0-'"`-0-0-'"`-0-0-'"`-0-0-'"`-0-0-'"`-0-0-' 
    )" << endl ;
    cout << "¡Bienvenidx a la Aventura en el Reino Hongo!\n";
    cout << "Introducí tu nombre: ";
    getline(cin, nombre);

    // Menú principal
    do {
     float salud = 100; // Vida de Mario
     float saludBowser = 100; // Vida de Bowser
        system("clear");
        cout << "\nMENÚ PRINCIPAL:\n\n";
        cout << "1. Iniciar Aventura\n";
        cout << "2. Instrucciones\n";
        cout << "3. Salir\n\n";
        cout << "Eligí una opción: ";
        cin >> decision;

        switch (decision) {
            case 1: {
                // Iniciar la aventura
                system("clear");
                cout << "\n¡Comenzó la aventura, " << nombre << "...\n";

                do{
                    // Nivel 1: Enfrentarse a un Goomba
                    cout << "Estás en el Reino Hongo..\n";
                    cout << "Un Goomba se acerca, ¿Qué hacés?\n\n";
                    cout << "1. Saltar sobre el Goomba\n";
                    cout << "2. Huir hacia una tubería\n\n";
                    cout << "Eligí una opción: ";
                    cin >> decision;

                    if (decision == 1) {
                        salud -= 10;
                        system("clear");
                        cout << "\nSaltás sobre el Goomba, pero no lo lograste bien. Perdés 10 de vida.\n";
                        cout << "Tu nivel de vida ahora es de " << salud << ".\n";
                        cout << "Huís, triste y desesperadx por el miedo, hacia la tubería.\n\n";
                        cout << "Presioná ENTER para continuar...";
                        cin.ignore().get();
                    } else if (decision == 2) {
                        system("clear");
                        cout << "\nHuís rápidamente hacia la tubería.\n\n";
                        cout << "Tu nivel de vida es de " << salud << ".\n";
                        cout << "Presioná ENTER para continuar...";
                        cin.ignore().get();
                    } else {
                        system("clear");
                        cout << "Opción no válida...\nElegí nuevamente\n\n";
                        cin.clear() ;
                        cin.ignore();}
                    }while (decision != 1 && decision !=2);

                system("clear");

                    // Nivel 2: Enfrentarse a un Koopa Troopa
                    cout << "¡Llegaste a un nuevo nivel!\n\n";
                    cout << "A lo lejos podés ver un Koopa Troopa de color verde.\n";
                    cout << "No parece muy amigable, pero si lográs superarlo ";
                    cout << "hay otra tubería esperándote...\n\n";
                    cout << "Presioná ENTER para continuar...";
                    cin.ignore().get();

                  do{
                      system("clear");
                      cout << R"(
                                            .-.
                     +                    ,;'666`:.
     .:'6          _..._            _           66`:.
   .:'6          ,' (-) `.         | |           66`:.
   `:.6        .'\  .-.  / `.      |_|            666.:'
    ::66`;.   /(O) \:  :/(O)\       O           666::
   .:'666::  /       db      \             `:.666666`:.
 .:'6666.:' (.-   )     _ (  -.)             ::666666`:.
 ::66666.:    `-;_   (W)   ,-'              `:.6666666::
 `:.666:'        `'------'                 `::6666666.:'
  `:.66.:_..-"-.._ ||  ||                    `:.6666.:'
_..-`:.:'          ||vv||'''''"-----.._ _ _    `:.6.:'
                   ||UU||                  `'''---.:::'_
                ,'//!!!!\\`.                     `:.  `'
                 `\....../            }/
                   UUUUUU               (o))))~~))<
                                        ^ " " " `
                    )" << endl ; 
                    cout << "¡Cuidado " << nombre << "!\n";
                    cout << "¡El Koopa Troopa verde se acerca rápidamente hacia ti!\n";
                    cout << "¿Que querés hacer?\n\n";
                    cout << "1. Saltar para intentar esquivar al Koopa Troopa.\n";
                    cout << "2. Enfrentar la embestida.\n\n";
                    cout << "Elegí una opción: ";
                    cin >> decision;

                    if (decision == 1) {
                        system("clear");
                        cout << "Saltás y el Koopa Troopa pasa por debajo tuyo.\n";
                        cout << "Ha continuado su camino a toda velocidad y al llegar al precipicio se ha caído.\n\n";
                        cout << "Que suerte, has podido evitar su ataque.\n";
                        cout << "Tu nivel de vida es de " << salud << ".\n";
                        cout << "Presioná ENTER para continuar...";
                        cin.ignore().get();
                    } else if (decision == 2) {
                        system("clear");
                        cout << "¡El Koopa Tropa golpea y fuerte!\n";
                        cout << "Perdés 10 de vida.\n\n";
                        cout << "Afortunadamente, luego de golpearte ha seguido su ";
                        cout << "camino y se ha caido por el precipicio.\n";
                        salud -= 10;
                        cout << "Tu nivel de vida ahora es de " << salud << ".\n";
                        cout << "Presioná ENTER para continuar...";
                        cin.ignore().get();
                    } else {
                        system("clear");
                        cout << "Opción no válida...\nElegí nuevamente\n\n";
                        cin.clear() ;
                        cin.ignore();}
                    }while (decision != 1 && decision != 2);

                    // Nivel 3: Enfrentar a Bowser
                    system("clear");
                    cout << R"(
                                                                                                     sssss
                                                   |°-_                                           ssssssssss
 sssssss                                           |                                                sssss
sssssssssss                                        X
sssss                                     |°-_    /.\       |°-_
                                          |      =====      |
                                          X      [ .:]      X
                                         / \     [ O ]     / \                            ssss
                                         | |     [ Q ]     | |                           sssssssss
                                        =====   [:...:]   =====                             sss
                                        [.: ]__[-------]__[ :.]
                                     [ :]ii  ii iii ii ii iiii[.  ]
                                  [ :]iiii iiii iiii iiii iiii iii[.  ]                                     
      sss                      [ :]iii iiiii iiiiiiiiiiiiiii ii iii ii[.  ]                               
    ssssss                     II[[    []    []     [II]    []   []    ]]II             
       ss                      IIIIIII[ :]--III III III III II--[. ]IIIIIII
                               IIIIIII[ :]--III III mmm III II--[. ]IIIIIII
                               IIIIIII[ :]--III III mmm III II--[. ]IIIIIII
                               IIIIIII[ :]--III III mmm III II--[. ]IIIIIII               
                             ~~//[ :]. :  ...   :    ...    : :   . [.  ]\\~~
                                  __   __¨°| .    .  ||| .      :|¨°__  --
___  ---    ____              -- __ O°  ...______"""______....   O° -----  --           ___  ---    ____
    ____----       --__  - -  -     ___  ---    ____     ____----       --__  -  ___  ---    ____     ____----      
_  ---    ____               °°´´ --__    --    --__     -___        __-   _°°´´         ___  ---    ____
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
                    )" << endl ;
                    cout << "Llegaste a un castillo aterrador\n";
                    cout << "Aquí dentro, Bowser tiene secuestrada a tu amada, la princesa Duraznito...\n";
                    cout << "Vas a tener que pelear con él para salvarla.\n";
                    cout << "Tu nivel de vida hasta ahora es de " << salud << ".\n";
                    cout << "La batalla comenzará en...\n";
                    for (int x = 3; x >= 1; x--) {
                     cout << endl << x << endl;
                    }
                    cout << "Presioná ENTER para continuar...";
                    cin.ignore().get();

            do{
                    system("clear");
                    cout << R"(
                _/(               .       .               )\_
              .~   ~-.             )     (            .-~   ~.
           .-~        ~-._        ((\___/))       _.-~        ~-.
        .-~               ~~--.__:( @) (@ )__,--~~               ~-.
       /                        ./ ) \ / (\.                        \
      .                         | (_o_^_o_) |                         .
      -~~--.        _.---._    /~   U`'U   ~\    _.---._        .--~~-
            ~-. .--~       ~~-|              |-~~       ~--. .-~
               ~              |  :        :  |_             ~
                              `\,'  :  :  `./' ~~--._
                             .(<___.'  `,___>),--.___~~-.
                             ~ (((( ~--~ ))))      _.~  _) 
                                ~~~      ~~~/`.--~ _.--~
                                            \,~~~~~
                    )" << endl ;
                    cout << "¡Bowser viene a atacarte!\n";
                    cout << "Elegí una de las siguientes opciones para enfrentarlo\n";
                    cout << "1. Saltar sobre Bowser\n";
                    cout << "2. Esquivarlo y correr alrededor para confundirlo\n";
                    cout << "Elegí una opción: ";
                    cin >> decision;
                    
                    if (decision == 1) {
                        system("clear");
                        cout << "Saltaste sobre Bowser y lograste lastimarlo un poco\n";
                        saludBowser -= 40;
                        cout << "El nivel de vida de Bowser ahora es de " << saludBowser << ".\n";
                        cout << "Igualmente, logró contraatacar y te hizo algo de daño.\n\n";
                        salud -= 20;
                        cout << "Tu nivel de vida ahora es de " << salud << ".\n\n";
                        cout << "Presioná ENTER para continuar...";
                        cin.ignore().get();
                        } 
                        else if (decision == 2) {
                        system("clear");
                        cout << "Corrés alrededor de Bowser para confundirlo...\n";
                        cout << "Lográs esquivar su ataque, pero te tropezás un poco.\n";
                        salud -= 10;
                        cout << "Tu nivel de vida ahora es de " << salud << ".\n\n";
                        cout << "Presioná ENTER para continuar...";
                        cin.ignore().get();    
                        } else {
                        system("clear");
                        cin.clear();
                        cin.ignore();    
                        cout << "Opción inválida. Se considera que no hiciste nada.\n";
                        cout << "Bowser te golpea.\n";
                        salud -= 30;
                        cout << "Tu salud: " << salud << endl;
                        cout << "Salud de Bowser: " << saludBowser << endl;
                        cout << "¡Cuidado con lo que escribís!\n";    
                        cout << "\nPresioná ENTER para continuar...";
                        cin.ignore().get();
                    }
            }while (decision != 1 && decision != 2);

                do{
                    cout << "\n¡Continúa la batalla!\n";
                    cout << "¡Encontraste una flor de fuego en el castillo!\n\n";
                    cout << "¿Cuál es tu próximo ataque? Elegí una de las opciones\n";
                    cout << "1. Convertirte en Fire Mario y lanzar una bola de fuego\n";
                    cout << "2. Pegarle a Bowser con la flor\n\n";
                    cout << "Elegí una opción: ";
                    cin >> decision;
                    
                    if (decision == 1) {
                        system("clear");
                        cout << "¡¡Te transformaste en FIRE MARIO!!\n";
                        cout << "Preparate para lanzar una bola de fuego en...\n";
                        for (int i = 3; i <= 1; i--) {
                            cout << endl << i << endl;
                        }
                        cout << "\n";
                        srand(time(0));
                        int exito = rand() % 100;
                        if (exito < 30) {
                             cout << "¡Fallaste el tiro! Bowser esquiva con agilidad.\n";
                            cout << "Te ataca con su aliento de fuego.\n";
                            salud -= 25;
                            cout << "Tu nivel de vida ahora es de " << salud << ".\n";
                              cin.ignore().get();
                            } else {
                                cout << "¡La bola de fuego impacta a Bowser!\n";
                                cout << "¡Bowser ruge de furia!\n";
                                saludBowser -= 70;
                                cout << "El nivel de vida de Bowser ahora es de " << saludBowser << ".\n";
                            }
                        } else if (decision == 2) {
                            system("clear");
                            cout << "Le pegás a Bowser con la flor como si fuera una espada...\n";
                            cout << "No es muy efectivo, pero lo descolocás por un momento.\n";
                            cout << "Bowser se enoja y te empuja con fuerza.\n";
                            saludBowser -= 30;
                            cout << "El nivel de vida de Bowser ahora es de " << saludBowser << ".\n";
                            salud -= 10;
                            cout << "Tu nivel de vida ahora es de " << salud << ".\n";
                        } else {
                            system("clear");
                            cin.clear();
                            cin.ignore();
                            cout << "Opción inválida. Bowser te ataca mientras dudás.\n";
                            salud -= 30;
                            cout << "Tu salud: " << salud << endl;
                            cout << "Salud de Bowser: " << saludBowser << endl;
                            cout << "\nPresioná ENTER para continuar...";
                            cin.ignore().get();
                        }
                }while (decision != 1 && decision != 2);

                do{
                        cout << "\n¡Tenés una segunda oportunidad!\n";
                        cout << "¿Cuál es tu próximo ataque? Elegí una de las opciones\n";
                        cout << "1. Convertirte en Fire Mario y lanzar una bola de fuego\n";
                        cout << "2. Pegarle a Bowser con la flor\n";
                        cout << "Elegí una opción: ";
                        cin >> decision;
                        if (decision == 1) {
                        system("clear");
                        cout << "¡¡Te transformaste en FIRE MARIO!!\n";
                        cout << "Preparate para lanzar una bola de fuego en...\n";
                        for (int i = 3; i <= 1; i--) {
                            cout << endl << i << endl;
                        }
                        cout << "\n";
                        srand(time(0));
                        int exito = rand() % 100;
                        if (exito < 30) {
                             cout << "¡Fallaste el tiro! Bowser esquiva con agilidad.\n";
                            cout << "Te ataca con su aliento de fuego.\n";
                            salud -= 25;
                            cout << "Tu nivel de vida ahora es de " << salud << ".\n";
                            cin.ignore().get();
                            } else {
                                cout << "¡La bola de fuego impacta a Bowser!\n";
                                cout << "¡Bowser ruge de furia!\n";
                                saludBowser -= 70;
                                cout << "El nivel de vida de Bowser ahora es de " << saludBowser << ".\n";
                            cin.clear();
                            cin.ignore();
                            }
                        } else if (decision == 2) {
                            system("clear");
                            cout << "Le pegás a Bowser con la flor como si fuera una espada...\n";
                            cout << "No es muy efectivo, pero lo descolocás por un momento.\n";
                            cout << "Bowser se enoja y te empuja con fuerza.\n";
                            saludBowser -= 30;
                            cout << "El nivel de vida de Bowser ahora es de " << saludBowser << ".\n";
                            salud -= 10;
                            cout << "Tu nivel de vida ahora es de " << salud << ".\n";
                            cin.ignore().get();
                        } else {
                            system("clear");
                            cin.clear();
                            cin.ignore();
                            cout << "Opción inválida. Bowser te ataca mientras dudás.\n";
                            salud -= 30;
                            cout << "Tu salud: " << salud << endl;
                            cout << "Salud de Bowser: " << saludBowser << endl;
                            cout << "\nPresioná ENTER para continuar...";
                            cin.ignore().get();
                        }
                } while (decision != 1 && decision != 2);
                
                    cout << "\nRESULTADO DE LA BATALLA\n";
                    cout << "Tu salud: " << salud << "\n";
                    cout << "Salud de Bowser: " << saludBowser << "\n";
                    // Fin de juego
                    if (saludBowser <= 0 && salud > 0) {
                    system("clear");
                    cout << R"(
                 __
                /   `.
               / \   `\\  \         ¡GRACIAS MARITO, 
              /___\    /\             ME SALVASTE!
            (((( ))))                DAME UN BESO <3
           (((' . ')))
           /((( U )))\                              .
          /    \ /    \                        ,___/_\___, 
         /      ^      \                        \ /o o\ /      
        / /     ^     \ \                      ./_\_u_/_\.
       .  ."'\  ^  /'" . .                         \./
              )www(                            **********
             /     \                           {[[[[]]]]}
           /'       `\                        {{[[[[]]]]}}
          /           \                      {{{[[[[]]]]}}}
         (((((((()))))))                    {{{{[[[[]]]]}}}}
        ......_____......                  {{{{{[[[[]]]]}}}}} 
                        )"
                    << endl ;
                    cout << "\n¡Derrotaste a Bowser!, " << nombre << "! ¡La princesa Durazno está a salvo!\n";
                    cout << "¡GANASTE EL JUEGO!\n";
                    cout << "Presione ENTER para continuar..." << endl;
                    cin.ignore().get();
                        break;
                    } else if (salud <= 0 && saludBowser > 0 ) {
                    cout << "\nBowser te ha derrotado...\n";
                    cout << "FIN DEL JUEGO\n";
                    cout << "Presione ENTER para continuar..." << endl;    
                    cin.ignore().get();
                        break;
                    } else {
                    cout << "\nBowser ha quedado herido, pero logró escapar por ahora...\n";
                    cout << "¡Continuarás esta aventura en una próxima misión!\n";
                    cout << "Presione ENTER para continuar..." << endl;
                    cin.ignore().get();
                    break;
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
                cin.clear();
                cin.ignore();
                cout << "Opción no válida, " << nombre << " intentá nuevamente.\n\n";
                cout << "Presione ENTER para volver al menú principal";
                cin.ignore().get();
                break;
        }

    } while (jugando);

    return 0;
}

