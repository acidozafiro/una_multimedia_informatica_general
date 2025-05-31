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
    float salud = 5; // Vida de Mario
    string nombre; // Nombre del jugador
cout << R"(
 ███▄ ▄███▓ ▄▄▄       ██▀███   ██▓▄▄▄█████▓ ▒█████      ▄▄▄▄    ██▓ ▄████  ▒█████  ▄▄▄█████▓▓█████   ██████ 
▓██▒▀█▀ ██▒▒████▄    ▓██ ▒ ██▒▓██▒▓  ██▒ ▓▒▒██▒  ██▒   ▓█████▄ ▓██▒██▒ ▀█▒▒██▒  ██▒▓  ██▒ ▓▒▓█   ▀ ▒██    ▒ 
▓██    ▓██░▒██  ▀█▄  ▓██ ░▄█ ▒▒██▒▒ ▓██░ ▒░▒██░  ██▒   ▒██▒ ▄██▒██▒██░▄▄▄░▒██░  ██▒▒ ▓██░ ▒░▒███   ░ ▓██▄   
▒██    ▒██ ░██▄▄▄▄██ ▒██▀▀█▄  ░██░░ ▓██▓ ░ ▒██   ██░   ▒██░█▀  ░██░▓█  ██▓▒██   ██░░ ▓██▓ ░ ▒▓█  ▄   ▒   ██▒
▒██▒   ░██▒ ▓█   ▓██▒░██▓ ▒██▒░██░  ▒██▒ ░ ░ ████▓▒░   ░▓█  ▀█▓░██░▒▓███▀▒░ ████▓▒░  ▒██▒ ░ ░▒████▒▒██████▒▒
░ ▒░   ░  ░ ▒▒   ▓▒█░░ ▒▓ ░▒▓░░▓    ▒ ░░   ░ ▒░▒░▒░    ░▒▓███▀▒░▓  ░▒   ▒ ░ ▒░▒░▒░   ▒ ░░   ░░ ▒░ ░▒ ▒▓▒ ▒ ░
░  ░      ░  ▒   ▒▒ ░  ░▒ ░ ▒░ ▒ ░    ░      ░ ▒ ▒░    ▒░▒   ░  ▒ ░ ░   ░   ░ ▒ ▒░     ░     ░ ░  ░░ ░▒  ░ ░
░      ░     ░   ▒     ░░   ░  ▒ ░  ░      ░ ░ ░ ▒      ░    ░  ▒ ░ ░   ░ ░ ░ ░ ▒    ░         ░   ░  ░  ░  
       ░         ░  ░   ░      ░               ░ ░      ░       ░       ░     ░ ░              ░  ░      ░  
                                                             ░                                              
 ██▀███  ▓█████   ██████ ▄████▄   ▄▄▄     ▄▄▄█████▓ ▄▄▄      ███▄    █ ▓█████▄  ▒█████                      
▓██ ▒ ██▒▓█   ▀ ▒██    ▒▒██▀ ▀█  ▒████▄   ▓  ██▒ ▓▒▒████▄    ██ ▀█   █ ▒██▀ ██▌▒██▒  ██▒                    
▓██ ░▄█ ▒▒███   ░ ▓██▄  ▒▓█    ▄ ▒██  ▀█▄ ▒ ▓██░ ▒░▒██  ▀█▄ ▓██  ▀█ ██▒░██   █▌▒██░  ██▒                    
▒██▀▀█▄  ▒▓█  ▄   ▒   ██▒▓▓▄ ▄██▒░██▄▄▄▄██░ ▓██▓ ░ ░██▄▄▄▄██▓██▒  ▐▌██▒░▓█▄   ▌▒██   ██░                    
░██▓ ▒██▒░▒████▒▒██████▒▒ ▓███▀ ░ ▓█   ▓██▒ ▒██▒ ░  ▓█   ▓██▒██░   ▓██░░▒████▓ ░ ████▓▒░                    
░ ▒▓ ░▒▓░░░ ▒░ ░▒ ▒▓▒ ▒ ░ ░▒ ▒  ░ ▒▒   ▓▒█░ ▒ ░░    ▒▒   ▓▒█░ ▒░   ▒ ▒  ▒▒▓  ▒ ░ ▒░▒░▒░                     
  ░▒ ░ ▒░ ░ ░  ░░ ░▒  ░ ░ ░  ▒     ▒   ▒▒ ░   ░      ▒   ▒▒ ░ ░░   ░ ▒░ ░ ▒  ▒   ░ ▒ ▒░                     
  ░░   ░    ░   ░  ░  ░ ░          ░   ▒    ░        ░   ▒     ░   ░ ░  ░ ░  ░ ░ ░ ░ ▒                      
   ░        ░  ░      ░ ░ ░            ░  ░              ░  ░        ░    ░        ░ ░                      
                        ░                                               ░                                   
 ▄▄▄         ▓█████▄  █    ██  ██▀███  ▄▄▄     ▒███████▒ ███▄    █  ██▓▄▄▄█████▓ ▒█████                     
▒████▄       ▒██▀ ██▌ ██  ▓██▒▓██ ▒ ██▒████▄   ▒ ▒ ▒ ▄▀░ ██ ▀█   █ ▓██▒▓  ██▒ ▓▒▒██▒  ██▒                   
▒██  ▀█▄     ░██   █▌▓██  ▒██░▓██ ░▄█ ▒██  ▀█▄ ░ ▒ ▄▀▒░ ▓██  ▀█ ██▒▒██▒▒ ▓██░ ▒░▒██░  ██▒                   
░██▄▄▄▄██    ░▓█▄   ▌▓▓█  ░██░▒██▀▀█▄ ░██▄▄▄▄██  ▄▀▒   ░▓██▒  ▐▌██▒░██░░ ▓██▓ ░ ▒██   ██░                   
 ▓█   ▓██▒   ░▒████▓ ▒▒█████▓ ░██▓ ▒██▒▓█   ▓██▒███████▒▒██░   ▓██░░██░  ▒██▒ ░ ░ ████▓▒░                   
 ▒▒   ▓▒█░    ▒▒▓  ▒ ░▒▓▒ ▒ ▒ ░ ▒▓ ░▒▓░▒▒   ▓▒█░▒▒ ▓░▒░▒░ ▒░   ▒ ▒ ░▓    ▒ ░░   ░ ▒░▒░▒░                    
  ▒   ▒▒ ░    ░ ▒  ▒ ░░▒░ ░ ░   ░▒ ░ ▒░ ▒   ▒▒ ░░▒ ▒ ░ ▒░ ░░   ░ ▒░ ▒ ░    ░      ░ ▒ ▒░                    
  ░   ▒       ░ ░  ░  ░░░ ░ ░   ░░   ░  ░   ▒  ░ ░ ░ ░ ░   ░   ░ ░  ▒ ░  ░      ░ ░ ░ ▒                     
      ░  ░      ░       ░        ░          ░  ░ ░ ░             ░  ░               ░ ░                     
              ░                                ░                                             
)" << endl; 
    // Título
    cout << "¡Bienvenido a la Aventura en el Reino Hongo!\n";
    cout << "Introduce tu nombre: ";
    getline(cin, nombre);

    // Menú principal
    do{
        system("clear");
        cout << "\nMENÚ PRINCIPAL:\n\n";
        cout << "1. Iniciar Aventura\n";
        cout << "2. Instrucciones\n";
        cout << "3. Salir\n\n";
        cout << "Elige una opción: ";
        cin >> opcion;

    while (jugando) {  

        switch(opcion) {
            case 1: {
                // Iniciar la aventura
                system("clear");
                cout << "\n¡Comenzó la aventura, " << nombre << "...\n";

                do{
                // Nivel 1: Enfrentarse a un Goomba
                cout << "Estás en el Reino Hongo..\n";
                cout << "Un Goomba se acerca, ¿Qué haces?\n\n";
                cout << "1. Saltar sobre el Goomba\n";
                cout << "2. Huir hacia una tubería\n\n";
                cout << "Elige una opción: ";
                cin >> decision;

                if (decision == 1) {
                    salud -- ; // Perdés algo de vida por no tener suficiente velocidad.
                    system("clear");
                    cout << "\nSaltas sobre el Goomba, pero no lo lograste bien. Pierdes 10 de vida.\n";
                    cout << "Huyes, triste y desesperado por el miedo, hacia la tubería.\n\n";
                } else if (decision == 2) {
                    system("clear");
                    cout << "\nHuyes rápidamente hacia la tubería.\n\n";
                } else {
                    system("clear");
                    cout << "Opción no válida...\nElija nuevamente\n\n";
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
                //system("clear");
                cout << "¡Has llegado a un nuevo nivel!\n\n";
                cout << "A lo lejos puedes ver un Koopa Troopa de color verde.\n";
                cout << "No parece muy amigable, pero si logras superarlo "; 
                cout << "hay otra tubería esperándote...\n\n";

                cout << "Presione ENTER para continuar...";
                cin.ignore().get();

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
                  )" << endl;
                cout << "¡Cuidado " << nombre << "!\n";
                cout << "¡El Koopa Troopa verde se acerca rápidamente hacia ti!\n";
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
                    salud -- ;
                    cout << "Tu nivel de vida ahora es de " << salud << ".";
                } else {
                    system("clear");
                    cout << "Opción no válida...\nElija nuevamente\n\n";
                    cin.clear();
                    cin.ignore();
                }
            }while(decision != 1 && decision != 2);


                    // Nivel 3: Decisión sobre el camino a seguir
                    system("clear");

                    cout << "Tu vida actual es: " << salud << "\n";
                    cout << "Ahora te enfrentarás a un dilema...\n";
                    cout << "Hay dos caminos: el camino del castillo de Bowser o el bosque misterioso.\n";
                    cout << "1. Ir al castillo de Bowser\n";
                    cout << "2. Ir al bosque misterioso\n";
                    cout << "Elige una opción: ";
                    cin >> decision;

                    if (decision == 1) {
                        cout << R"(
                                                                                                                     sssssssss
                                                                       |°-_                                         sssssssssssss
                     sssssss                                           |                                                sssss
                 ssssssssssssss                                        X
                    sssss                                     |°-_    /.\       |°-_
                                                              |      =====      |
                                                              X      [ .:]      X
                                                             / \     [ O ]     / \                        ssssssss
                                                             | |     [ Q ]     | |                           sssssssss
                ssss                                        =====   [:...:]   =====                             sss
              sssssssss                                     [.: ]__[-------]__[ :.]
                sssssss                                  [ :]ii  ii iii ii ii iiii[.  ]
                                                      [ :]iiii iiii iiii iiii iiii iii[.  ]                                     
                                                   [ :]iii iiiii iiiiiiiiiiiiiii ii iii ii[.  ]                               
                                                   II[[    []    []     [II]    []   []    ]]II             
                                                   IIIIIII[ :]--III III III III II--[. ]IIIIIII
                                                   IIIIIII[ :]--III III mmm III II--[. ]IIIIIII
                                                   IIIIIII[ :]--III III mmm III II--[. ]IIIIIII
                                                   IIIIIII[ :]--III III mmm III II--[. ]IIIIIII               
                                                 ~~//[ :]. :  ...   :    ...    : :   . [.  ]\\~~
                                                     __   __¨°| .    .  ||| .      :|¨°__  --
                    ___  ---    ____              -- __ O°  ...______"""______....   O° -----  --           ___  ---    ____
   ___  ---    ____     ____----       --__  - -  -     ___  ---    ____     ____----       --__  -  ___  ---    ____     ____----       --__  -
                  ___  ---    ____               °°´´ --__    --    --__     -___        __-   _°°´´         ___  ---    ____
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
                            )" << endl;
                        cout << "Te enfrentas a Bowser en su castillo...\n";
                        cout << "Ingresarás al castillo de Bowser en...";
                            for (int x = 3; x >= 1; x--) {
                                cout << endl << x << endl;
                                }
                        // Al llegar acá como no hay mas decisiones puse esta pausa y el jugando = false que
                        // hace que vuelva al menu principal, pero despues lo sacamos cuando agreguemos cosas.
                        cout << "Presione ENTER para continuar...";
                        cin.ignore().get();
                        jugando = false;        

                        // Aquí podrías crear una batalla con Bowser, o que el jugador encuentre un poder extra.
                    } else if (decision == 2) {
                        cout << R"(
                                                                   .         ;                                               .         ;
                                          .         °  
             .              .              ;%     ;;   
                ,           ,                :;%  %;   
                :         ;                   :;%;'     .,                   ;°     ;;    ,           ,   
       ,.         %;     %;            ;        °;'    ,;
,        ;       ;%;  %%;        ,     %;    ;%;    ,°'
          °;         %°%;      ,  ;       °%;  ;°.   ,°;' 
           ;°;      %;        ;%;        ° ;°;  ,°;'
  .         `%    ;%;     #;'         `;%%;.%;'                                                   ;%     ;;    ,           ,   
                `:;#.    ;%%. °°;        %; ;@%;%'
                `:%;.  :;°°#;          #;@%;'
                 `@%:.  :;%.         ;°°%;'   
                    `@%.  `;#%.      ;°°%;                    ;%     ;;    ,           ,   
        .              #`@%%. `@%%    ;#%;        
                        ;@%. :@%%  %@@%;       
                  .      %@##%%%""%%:;                                                         .                         ,
    .                      #@%%%%%:;;                    ;    ,           ,    
                            #@%%%::;                                          ___
                            #@%%%(o);  . '                                   / o \_____       
                            #@%%%;:(.,'                                      \___/""""- 
            ,           `.. #@%%%::;                                          . . .                     ,  
                           `#@%%%%::;                                       **********
                            #@%%%(o)::;                                     {[[[[]]]]}
     .                     .#@%%%%%%%::;                                   {{[[[[]]]]}}
                           ;#@%%%%%%%%:;.                                 {{{[[[[]]]]}}}
                          ;#@%%%%%%%%%%;;.                               {{{{[[[[]]]]}}}}
                      ...;#@%%%%%%%%%%%%;,..  .         ;   .           {{{{{[[[[]]]]}}}}}             ;%     ;;    ,           ,                :;%  %;  
                            )" << endl;                        
                        cout << "El bosque misterioso es peligroso... Te encuentras con una llave.\n";
                        cout << "No hay mucho para hacer aquí... Sigues hacia el castillo.\n";
                        cout << "Presione ENTER para continuar...";
                        cin.ignore().get();
                        cout << "Parece que Bowser está dormido...\n";
                        cout << "¿Qué es ese llanto que se escucha desde el otro lado de la habitación?...¿Será?\n";
                        cout << "¿¿¿DURAZNITO???\n";
                        cout << "¡Está encerrada! ¡Rápido! ¡Probá la llave!\n";
                    }
                }

            break;
            case 2: {
                // Instrucciones
                system("clear");
                cout << "\nInstrucciones:\n";
                cout << "Usa las opciones numéricas para tomar decisiones en la aventura.\n";
                cout << "El objetivo es rescatar a la Princesa Durazno y derrotar a Bowser.\n\n";

                cout << "Presione ENTER para volver al menú principal...";
                cin.ignore().get();
                jugando = false;
            }
            break;
            case 3: {
                // Salir del juego
                system("clear");
                cout << "\n¡Gracias por jugar a la Aventura en el Reino Hongo! ¡Hasta luego, " << nombre << "!\n\n";
                jugando = false;
                break;
            }
            default:
                cout << "Opción no válida, intenta nuevamente.\n\n";
                cin.clear();
                cin.ignore();
                break;
        }
    }
    //Vuelve a empezar excepto que se elija la opción 3
    }while(opcion != 3);

    return 0;
}
