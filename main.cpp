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

    system("cls");
    
    cout << "Ingresa tu nombre de jugador " << endl;
    getline(cin, user);

    do{
    cout << "\nErase una vez en un lejano reino, un caballero llamado " << user << "se deleitaba el paladar comiendo pan despues de un largo dia de trabajo.\nCuando un derrepente un dragon aparecio y empezo a destruir todo a su paso. " << user << " empezo a correr porque queria proteger a su pan, pero el dragon lo alcanzo y, dispuesto  a cometer crimenes de guerra, \nle robo el pan.\n" << endl;

    cout << user << " que haras ahora?\n" << endl;
    prob = 1.0/2.0*100.0;
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

        cout << "\nDeseas volver a jugar? :\n 1. Si\n 2. No\n" << endl;
        cin >> fin;
        cin.ignore();
        
    
    } while (fin == 1);
    
    return 0;
    
} 

float Calc (){
    cout << "\nCalculadora de " << user << endl;
    float a, b, c;
    cout << "Ingrese numero de casos favorables: ";
    cin >> a;
    cin.ignore();
    cout << "Ingrese numero de casos posibles: ";
    cin >> b;
    cin.ignore();
    c = (a/b)*100.0;
    return c;

}

//Nivel 3a para el jugador
void Nivel3a (){

    system("cls");
    cout << '\n' << endl;
    int intentos = 3;
    cout << user << " ha decidido irse por el bosque.\n\nEntre los arboles del bosque se econtro a unos duendes (secuaces del dragon) eran 13.\n5 con espadas, 1 con un hacha, 3 sin nada y 4 con garrotes." << endl ;
    
    do {
        cout << "\nUn duende ataco a "<< user <<". \n\n por que tipo de duende es mas probable ser atacado?\n1. Uno con espada \n2. Uno con hacha\n3. Uno sin nada \n4. Uno con gaarrote" << endl;

        prob = Calc();
        cout << "Probabilidad calculada: " << prob << '%' << endl;
    
        cout << "Digita el numero de acuerdo a tu seleccion: ";
        cin >> opcion;
        
        if (opcion == 1){
                cout << "\nEs correcto, el primer duende que ataco fue uno con espada " << endl;
                intentos = 0;
        } else {

            cout << "\nRespuesta incorrecta " ; intentos--; cout << "Te quedan: " << intentos << "intentos." << endl;
            if (intentos == 0){
                opcion = 37;
            }
        }

    }while (intentos != 0);

    if (opcion == 37){
        opcion = 4;
    } else {
    
    cout << "\nDespues de que " << user << " derrotara a todos los duendes, al bosque llego el Dragon.\n" << user << " respetando su venganza tiene la opcion de pelear con el Dragon por su pan. \n\nEl dragon empieza a escupir fuego por su boca, " << user << " decide esconderse entre los arboles, para cuando se de la oportunidad atacar a la cabeza al dragon.\npero gracias a que posee armadura en su cuerpo el fuego no le afecta.\n" << user << " Tiene 3 opciones de ataque:\n\n1.Atacar las Alas \n2.Atacar la cola \n3.Atacar la Cabeza" << endl;

    
    prob = (2.0/3.0)*100.0;
    cout << "Probabilidades de ganar: " << prob << '%'<< endl;
    cout << "Que parte atacaras?: ";
    cin >> opcion;
    }

    switch(opcion){
        case 1:
            cout << "\nAl atacar las Alas el Dragon ya no pudo volar. " << user << " hiciste un buen trabajo, el Dragon ya nunca robara pan a nadie." << endl;
            break;
        case 2:
            cout << "\nAl atacar la cola el Dragon perdio el equilibrio y lo mandaste a ver a San Pedro. " << user << " hiciste un buen trabajo, el Dragon ya nunca robara pan a nadie." << endl;
            break;
        case 3:
            cout << "\nAl atacar la cabeza el dragon se comio a " << user << ". El dragon regreso y destruyo el Reino. Fin. (No debiste atacar la cabeza)." << endl;
            break;
        case 4:
            cout << "\nVuelve a estudiar MDII, el dragon se comio a " << user << "y destruyo el Reino. Fin." << endl;
            break;
        default:
            cout << "\nOpcion invalida" << endl;
            break;
    }

}

//Nivel 3b para el jugador
void Nivel3b (){

    system("cls");
    cout << '\n' << endl;
    int intentos = 3;
    cout << user << " ha decidido irse por el bosque.\n\nEntre los arboles del bosque se econtro a unos duendes (secuaces del dragon) eran 13.\n5 con espadas, 1 con un hacha, 3 sin nada y 4 con garrotes." << endl ;
    
    do {
        cout << "\nUn duende ataco a "<< user <<". \n\n por que tipo de duende es mas probable ser atacado?\n1. Uno con espada \n2. Uno con hacha\n3. Uno sin nada \n4. Uno con gaarrote" << endl;

        prob = Calc();
        cout << "Probabilidad calculada: " << prob << '%' << endl;
    
        cout << "Digita el numero de acuerdo a tu seleccion: ";
        cin >> opcion;
        
        if (opcion == 1){
                cout << "\nEs correcto, el primer duende que ataco fue uno con espada \n" << endl;
                intentos = 0;
        } else {

            cout << "\nRespuesta incorrecta " ; intentos--; cout << "Te quedan: " << intentos << " intentos." << endl;
            if (intentos == 0){
                opcion = 37;
            }
        }

    }while (intentos != 0);

    if (opcion == 37){
        opcion = 3;
    } else {
    
    cout << "Despues de que " << user << " derrotara a todos los duendes, al bosque llego el Dragon.\n" << user << " respetando su venganza tiene la opcion de pelear con el Dragon por su pan. \nEl dragon empieza a escupir fuego por su boca, " << user << " decide esconderse entre los arboles, para cuando se de la oportunidad atacar a la cabeza al dragon.\n Existen 7 arboles, 2 de los cuales son resistentes al fuego.\n Cual es la probabilidad de escoger el arbol correcto al segundo intento, si fallo al primero? " << endl;

    prob = Calc();
    cout << "Probabilidad calculada: " << prob << '%' << endl;
    
    prob = (1.0/3.0)*100.0;
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
            cout << "\nVuelve a estudiar MDII, por tu culpa los duendes se comieron a " << user << ". El dragon regreso y destruyo el Reino. Fin." << endl;
            break;
        case 3:
            cout << "\nVuelve a estudiar MDII, por tu culpa los duendes se comieron a " << user << ". El dragon regreso y destruyo el Reino. Fin." << endl;
            break;
        default:
            cout << "\nOpcion invalida" << endl;
            break;
    }

}

//Nivel 2a para el jugador
void Nivel2a (){

    system("cls");
    cout << '\n';
    cout << user << " ha decidido ponerse la armadura completa.\n\nUna rama que cayo de los arboles destrozados por el dragon cayo sobre su cabeza, pero el casco lo protegio. \nExisten dos caminos para llegar a la cueva del dragon:\n\n1. El camino largo que es sobre el bosque \n2. El camino corto que es sobre el pantano.\n" << endl;
    prob = (1.0/2.0)*100.0;
    cout << "Probabilidades de ganar: " << prob << '%'<< endl;
    cout << "Digita el numero de acuerdo a tu seleccion: ";
    cin >> opcion;
    cin.ignore();

    switch(opcion){
        case 1:
            Nivel3a();
            break;
        case 2:
            cout << "\nAl poseer una armadura muy pesada, " << user << " se hunde en el pantano lo que provoca su triste final. Fin." << endl;
            break;
        default:
            cout << "\nOpcion invalida" << endl;
            break;
    }

}

//Nivel 2b para el jugador
void Nivel2b (){

    system("cls");
    cout << '\n' << endl;
    cout << user << " ha decidido ponerse solo el casco.\nUna rama que cayo de los arboles destrozados por el dragon cayo sobre su cabeza, pero el casco lo protegio.\nExisten dos caminos para llegar a la cueva del dragon:\n1. El camino largo que es sobre el bosque \n2. El camino corto que es sobre el pantano.\n" << endl;
    prob = (1.0/2.0)*100.0;
    cout << "Probabilidades de ganar: " << prob << '%'<< endl;
    cout << "Digita el numero de acuerdo a tu seleccion: ";
    cin >> opcion;
    cin.ignore();

    switch(opcion){
        case 1:
            Nivel3b();
            break;
        case 2:
            cout << "\nAl no poseer armadura en el cuerpo, los bichos del pantano picaron e infectaron a " << user << " y le dio Zica. El dragon regreso y destruyo el Reino. Fin." << endl;
            break;
        default:
            cout << "\nOpcion invalida" << endl;
            break;
    }

}

//Nivel 1 para el jugador
void Nivel1 (){

    system("cls");
    cout << '\n' << endl;
    cout << user << " he decidido romperle la madre al Dragon.\n1. Deberia ponerme mi armadura completa? \n2. Con solo el casco es suficiente\n3. la armadura me estorba\n" << endl;
    prob = (2.0/3.0)*100.0;
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
            cout << "\nAl no poseer ningun tipo de proteccion, " << user << " una rama golpeo al joven caballero en la cabeza lo que le produjo una contucion cerebral resultando en la completa perdida de sus mosiones cognitivas. El dragon destruyo el Reino y vivio feliz para siempre. Fin." << endl;
            break;
        default:
            cout << "\nOpcion invalida" << endl;
            break;
    }

}

