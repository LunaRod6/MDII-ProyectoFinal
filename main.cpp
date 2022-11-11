#include <iostream>

using namespace std;

string user;

int fin = 0, opcion, p;

float prob ;

float Calc();
void Nivel3a();
void Nivel3b();
void Nivel2a();
void Nivel2b();
void Nivel1();


int main (){

    
    cout << "Ingresa tu nombre de jugador " << endl;
    getline(cin, user);

    do{
    cout << "\nErase una vez en un Reino remoto un caballero llamado " << user << ", que andaba comiendo pan despues de un largo dia de trabajo.\nCuando un dragon ataco el Reino y empezo a quemar todo a su paso. " << user << " empezo a correr porque queria proteger a su pan, pero el dragon lo alcanzo y\nle robo el pan.\n" << endl;

    cout << user << " Que haras ahora?\n" << endl;
    prob = (1/2)*100;
    cout << "Probabilidades de ganar: " << prob << '%' << endl;
    cout << "1. Le reventare su madre al dragon..." << endl;
    cout << "2. Comprare otro pan..." << endl;

    cin >> p;
    

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

float Calc (){
    cout << "\nCalculadora de " << user << endl;
    int a, b, c;
    cout << "Ingrese numero de casos favorables: ";
    cin >> a;
    cin.ignore();
    cout << "Ingrese numero de casos posibles: ";
    cin >> b;
    cin.ignore();
    c = (a/b)*100;
    return c;

}

//Nivel 3a para el jugador
void Nivel3a (){

    cout << '\n';
    int intentos = 3;
    cout << user << " ha decidido irse por el bosque.\n\nEntre los arboles del bosque se econtro a unos duendes (secuaces del dragon) eran 13.\n5 amarillos, 1 Rojo, 3 Azules y 4 Violeta." << endl ;
    
    do {
        cout << "\nUn duende Azul ataco a "<< user <<". \n\nQue color de duende tiene mas probabilidad de ser derrotado ahora?\n1. Uno Amarillo \n2. Uno Rojo \n3. Uno Azul \n4. Uno Violeta" << endl;

        prob = Calc();
        cout << "Probabilidad calculada: " << prob << '%' << endl;
    
        cout << "Digita el numero de acuerdo a tu seleccion: ";
        cin >> opcion;
        
        if (opcion == 1){
                cout << "\nEs correcto, el siguiente duende en ser derrotado fue un Amarillo " << endl;
                intentos = 0;
        } else {

            cout << "Respuesta incorrecta " ; intentos--; cout << "Te quedan: " << intentos << "intentos." << endl;
            if (intentos == 0){
                opcion = 37;
            }
        }

    }while (intentos != 0);

    if (opcion == 37){
        opcion = 3;
    } else {
    
    cout << "Despues de que " << user << " derrotara a todos los duendes, al bosque llego el Dragon.\n" << user << "decidido a su venganza tiene la opcion de pelear con el Dragon por su pan. \nEl dragon empieza a escupir fuego por su boca, " << user << " decide esconderse entre los arboles, para cuando se de la oportunidad atacar a la cabeza al dragon.\n pero gracias a que posee armadura en su cuerpo el fuego no le afecta.\n" << user << " Tiene 3 opciones de ataque:\n1. Atacar las Alas \n2.Atacar la cola \n3.Atacar la Cabeza" << endl;

    
    prob = (2/3)*100;
    cout << "Probabilidades de ganar: " << prob << '%'<< endl;
    cout << "Que parte atacaras?: ";
    cin >> opcion;
    }

    switch(opcion){
        case 1:
            cout << "Al atacar las Alas el Dragon ya no pudo volar. " << user << " hiciste un buen trabajo, el Dragon ya nunca robara pan a nadie." << endl;
            break;
        case 2:
            cout << "Al atacar la cola el Dragon perdio equilibrio y lo mandaste a ver a San Pedro. " << user << " hiciste un buen trabajo, el Dragon ya nunca robara pan a nadie." << endl;
            break;
        case 3:
            cout << "Vuelve a estudiar MDII, por tu culpa los duendes se comieron a " << user << ". El dragon regreso y destruyo el Reino. Fin." << endl;
            break;
        default:
            cout << "Opcion invalida" << endl;
            break;
    }

}

//Nivel 3b para el jugador
void Nivel3b (){

    cout << '\n';
    int intentos = 3;
    cout << user << " ha decidido irse por el bosque.\n Entre los arboles del bosque se econtro a unos duendes (secuaces del dragon) eran 13. \n 5 amarillos, 1 Rojo, 3 Azules y 4 Violeta." << endl ;
    
    do {
        cout << " Un duende Azul ataco a "<< user <<". \nQue color de duende tiene mas probabilidad de ser derrotado ahora?\n1. Uno Amarillo \n2. Uno Rojo \n3. Uno Azul \n4. Uno Violeta" << endl;

        prob = Calc();
        cout << "Probabilidad calculada: " << prob << '%' << endl;
    
        cout << "Digita el numero de acuerdo a tu seleccion: ";
        cin >> opcion;
        
        if (opcion == 1){
                cout << "\nEs correcto, el siguiente duende en ser derrotado fue un Amarillo " << endl;
                intentos = 0;
        } else {

            cout << "Respuesta incorrecta " ; intentos--; cout << "Te quedan: " << intentos << "intentos." << endl;
            if (intentos == 0){
                opcion = 37;
            }
        }

    }while (intentos != 0);

    if (opcion == 37){
        opcion = 3;
    } else {
    
    cout << "Despues de que " << user << " derrotara a todos los duendes, al bosque llego el Dragon.\n" << user << "decidido a su venganza tiene la opcion de pelear con el Dragon por su pan. \nEl dragon empieza a escupir fuego por su boca, " << user << " decide esconderse entre los arboles, para cuando se de la oportunidad atacar a la cabeza al dragon.\n Existen 7 arboles, 2 de los cuales son resistentes al fuego.\n Cual es la probabilidad de escoger el arbol correcto al segundo intento, si fallo al primero? " << endl;

    cout << "Probabilidad calculada: " << prob << '%' << endl;
    
    prob = (1/3)*100;
    cout << "Probabilidades de ganar: " << prob << '%'<< endl;
    cout << "Digita el porcentaje de probabilidad calculada: ";
    float respuesta ;
    cin >> respuesta;
    
    if (respuesta == 33.33){
        opcion = 1;
    } else {
        opcion = 2;
    }
    }

    switch(opcion){
        case 1:
            
            break;
        case 2:
            cout << "Vuelve a estudiar MDII, por tu culpa los duendes se comieron a " << user << ". El dragon regreso y destruyo el Reino. Fin." << endl;
            break;
        case 3:
            cout << "Vuelve a estudiar MDII, por tu culpa los duendes se comieron a " << user << ". El dragon regreso y destruyo el Reino. Fin." << endl;
            break;
        default:
            cout << "Opcion invalida" << endl;
            break;
    }

}

//Nivel 2a para el jugador
void Nivel2a (){

    cout << '\n';
    cout << user << " ha decidido ponerse la armadura completa.\n\nUna rama que cayo de los arboles destrozados por el dragon cayo sobre su cabeza, pero el casco lo protegio. \nExisten dos caminos para llegar a la cueva del dragon:\n\n1. El camino largo que es sobre el bosque \n2. El camino corto que es sobre el pantano." << endl;
    prob = (1/2)*100;
    cout << "Probabilidades de ganar: " << prob << '%'<< endl;
    cout << "Digita el numero de acuerdo a tu seleccion: ";
    cin >> opcion;
    cin.ignore();

    switch(opcion){
        case 1:
            Nivel3a();
            break;
        case 2:
            cout << "Al no poseer casco los bichos del pantano le picaron la cabeza a " << user << " y le dio Zica. El dragon regreso y destruyo el Reino. Fin." << endl;
            break;
        default:
            cout << "Opcion invalida" << endl;
            break;
    }

}

//Nivel 2b para el jugador
void Nivel2b (){

    cout << '\n';
    cout << user << " ha decidido ponerse solo el casco.\n Una rama que cayo de los arboles destrozados por el dragon cayo sobre su cabeza, pero el casco lo protegio.\n Existen dos caminos para llegar a la cueva del dragon:\n1. El camino largo que es sobre el bosque \n2. El camino corto que es sobre el pantano." << endl;
    prob = (1/2)*100;
    cout << "Probabilidades de ganar: " << prob << '%'<< endl;
    cout << "Digita el numero de acuerdo a tu seleccion: ";
    cin >> opcion;
    cin.ignore();

    switch(opcion){
        case 1:
            Nivel3b();
            break;
        case 2:
            cout << "Al no poseer armadura en el cuerpo, los bichos del pantano infectaron a " << user << " y le dio Zica. El dragon regreso y destruyo el Reino. Fin." << endl;
            break;
        default:
            cout << "Opcion invalida" << endl;
            break;
    }

}

//Nivel 1 para el jugador
void Nivel1 (){

    cout << '\n';
    cout << user << " ha decidido romperle la madre al Dragon.\n1. Deberia ponerme mi armadura completa? \n2. Con solo el casco es suficiente\n3. Me voy solo asi?\n" << endl;
    prob = (2/3)*100;
    cout << "Probabilidades de ganar: " << prob << '%'<< endl;
    cout << "Digita el numero de acuerdo a tu seleccion: ";
    cin >> opcion;
    cin.ignore();

    switch(opcion){
        case 1:
            Nivel2a();
            break;
        case 2:
            Nivel2b();
            break;
        case 3:
            cout << "\nAl no poseer ningun tipo de proteccion, " << user << " no resistio el golpe de una rama que le cayo en la cabeza. El dragon regreso y destruyo el Reino. Fin." << endl;
            break;
        default:
            cout << "Opcion invalida" << endl;
            break;
    }

}


