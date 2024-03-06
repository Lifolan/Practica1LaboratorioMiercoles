# include <iostream>

# include <cmath>

# include <conio.h>


using namespace std;

int Ejercicio9(){
    int numero_de_4_digitos, suma;
        cout << "Ingresa el valor de numero de 4 digitos: ";
        cin >> numero_de_4_digitos;
        cin.get();
        suma=pow(((numero_de_4_digitos%10000-numero_de_4_digitos%1000)/1000),((numero_de_4_digitos%10000-numero_de_4_digitos%1000)/1000))+pow(((numero_de_4_digitos%1000-numero_de_4_digitos%100)/100),((numero_de_4_digitos%1000-numero_de_4_digitos%100)/100))+pow(((numero_de_4_digitos%100-numero_de_4_digitos%10)/10),((numero_de_4_digitos%100-numero_de_4_digitos%10)/10))+pow((numero_de_4_digitos%10),(numero_de_4_digitos%10));;
        cout << "Valor de suma: " << suma << endl;
        cout << endl;
        system ("pause");
        return EXIT_SUCCESS;
}
