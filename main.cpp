#include <iostream>

using namespace std;

string user;

int fin, opcion, p;

void inicio();
void terminar();
void jugarnuevamente();
void Nivel1();

int main (){
    cout << "Ingresa tu nombre de jugador " << endl;
    getline(cin, user);
    inicio();
    return 0;
};

void inicio(){

    cout << "Erase una vez en un Reino remoto un caballero llamado " << user << ", que andaba comiendo pan despues de un largo dia de trabajo.\nCuando un dragon ataco el Reino y empezo a quemar todo a su paso. " << user << " empezo a correr porque queria proteger a su pan, pero el dragon lo alcanzo y le robo el pan." << endl;

    cout << user << "Que haras ahora?" << endl;
    cout << "1. Le reventare su madre al dragon..." << endl;
    cout << "2. Comprare otro pan..." << endl;
    cin >> p;
            switch (p){
            case 1:
                
                Nivel1();
                break;
    
            case 2:
                terminar();
                break;
    
            default:
                cout << "Opcion invalida" << endl;
                break;
            }
}

void terminar(){
    cout << user << " no se complico la vida, y se compro otro pan. El dragon regreso y destruyo el Reino. Fin." << endl;
    jugarnuevamente();
}

void jugarnuevamente(){
    cout << "Deseas volver a jugar? :\n1. Si\n2. No" << endl;
        cin >> fin;
        cin.ignore();
        
        switch (fin){
            case 1:
                inicio();
                break;
            
            case 2:
                cout << "¡Gracias por jugar!";
                break;
            
            default:
                cout << "Opcion invalida" << endl;
                break;
        }
}

void Nivel1(){

    cout << user << " ha decidido romperle la madre al Dragon. \n1. Deberia ponerme mi armadura? \n2. me voy asi?" << endl;
    cin >> opcion;
    cin.ignore();

    switch(opcion){
        case 1:
            cout <<  " " << endl;
            break;
        case 2:
        break;
        default:
        break;
    }

}
