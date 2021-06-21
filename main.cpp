#include <iostream>
#include "startShip.h"
#include "snake.h"
#include <string>

using namespace std;

string menu [2][2] = {
    {"1", "starShip()"},
    {"2", "snake()"},
};

int main(int argc, char const *argv[])
{
    int num = 0; 

    while(true){
        system("cls");

        cout<<endl;
        cout<<"**************" << endl;
        cout<<"MENU DE JUEGOS"<< endl;
        cout<<"**************" << endl;
        cout<<endl; 
        cout<<"Seleccione un juego"<< endl;
        cout<<endl;
        cout<< "1 - StarShip"<< endl;
        cout<< "2 - Snake"<< endl; 
        cout<<endl;
        cout<<"Ingrese un numero del menu para seleccionar un juego: ";
        cin>>num;

        switch (num)
        {
        case 1:
            system("cls");
            starShip();
            break;

        case 2:
            system("cls");
            snake();
            break;

        default:
        break;
         }

         system("pause");
         cout<<endl;
         if(num == 0){
             break;
         }
        }

    return 0;
}
