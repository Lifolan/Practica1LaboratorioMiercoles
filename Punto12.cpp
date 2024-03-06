# include <iostream>

# include <cmath>

# include <conio.h>


using namespace std;

int Ejercicio12(){
    int i, n, divisor, posicion_mayor, mayor=0, c=0, mcd=0 ;
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
        }
        if (n<0)
            n = -n;
        if (i<0)
            i = -i;
        for (divisor=2; divisor<=n && divisor<=i; divisor++)
            while (n%divisor==0 && i%divisor==0)
            {
                mcd *= divisor;
                n /= divisor;
                i /= divisor;
            }
        cout << " Maximo comun divisor: " << mcd+1 << endl << endl;
        cout << " El mayor factor primo de "<<c<<" es:  " << mcd+1 << " su mayor divisor primo";
        cout << endl << endl << endl;
        system ("pause");
        return EXIT_SUCCESS;
}
