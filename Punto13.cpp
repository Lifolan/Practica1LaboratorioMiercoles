# include <iostream>

# include <cmath>

# include <conio.h>


using namespace std;

int Ejercicio13(){
    int i, n, divisor, posicion_menor, menor=0, elemento, c=0, suma=0 ;
        cout << "Ingrese la cantidad de numeros primos: ";
        cin  >> n;
        c += n;
        cout << endl;
        for (i=2; n>0; i++)
        {
            for (divisor=2; divisor<i && i%divisor!=0; divisor++);
            if (divisor==i)

            {
                if (i!=2)
                    cout << ", ";
                cout << i;
                n--;
            }
            if (i==1 || elemento>menor)
            {
                menor = elemento;
                posicion_menor = menor;
            }
        }
        cout << " La suma de numeros primos menores a "<<c<<" es:  " << i-c-3 << " que es la suma los primeros numeros de la serie antes de "<< c <<"";
        cout << endl << endl << endl;
        system ("pause");
        return EXIT_SUCCESS;
}
