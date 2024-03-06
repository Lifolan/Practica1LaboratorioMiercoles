# include <iostream>

# include <cmath>

# include <conio.h>


using namespace std;

int Ejercicio10(){
    int i, n, divisor, posicion_mayor, mayor=0, elemento, c=0 ;
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

            if (i==1 || elemento>mayor)
            {
                mayor = elemento;
                posicion_mayor = i;
            }
        }
        cout << " El primo numero "<<c<<" es:  " << i-1 << " que corresponde al ultimo numero de la serie";
        cout << endl << endl << endl;
        system ("pause");
        return EXIT_SUCCESS;
}




