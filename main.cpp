#include <iostream>

using namespace std;

string user;

int fin = 0, opcion, p;

int main (){

    
    cout << "Ingresa tu nombre de jugador " << endl;
    getline(cin, user);

    cout << "Erase una vez en un Reino remoto un caballero llamado " << user << ", que andaba comiendo pan despues de un largo dia de trabajo.\nCuando un dragon ataco el Reino y empezo a quemar todo a su paso. " << user << " empezo a correr porque queria proteger a su pan, pero el dragon lo alcanzo y le robo el pan." << endl;

    cout << user << "Que haras ahora?" << endl;
    cout << "1. Le reventare su madre al dragon..." << endl;
    cout << "2. Comprare otro pan..." << endl;

    cin >> p;
    do {

        switch (p){
        case 1:
            
            Nivel1();
            break;

        case 2:
            cout << user << " no se complico la vida, y se compro otro pan. El dragon regreso y destruyo el Reino. Fin." << endl;
            break;

        default:
            cout << "Opcion invalida" << endl;
            break;

        }

        cout << "Deseas volver a jugar? :\n 1. Si\n 2. No\n" << endl;
        cin >> fin;
        cin.ignore();
    
    } while (fin == 1);
    
    return 0;
    
} 

void Nivel1 (){

    cout << user << " ha decidido romperle la madre al Dragon. \n 1. Deberia ponerme mi armadura? \n2. me voy asi?\n" << endl;
    cin >> opcion;
    cin.ignore();

    switch(opcion){
        case 1:
            cout <<  " << endl;
            break;
        case 2:
        break;
        default:
        break;
    }

}


