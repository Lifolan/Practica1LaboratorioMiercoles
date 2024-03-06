# include <iostream>

# include <cmath>

# include <conio.h>


using namespace std;

int Ejercicio11(){
    int a, b, divisor, i ;
    unsigned long mcm = 1;
    cout << "Ingrese el valor del primer numero, empiece por 1: ";
    cin  >> a;
    cout << "Ingrese el valor del segundo numero: ";
    cin  >> b;
    if (a<0)
        a = -a;
    if (b<0)
        b = -b;
    for (divisor=2; divisor<=a || divisor<=b; divisor++)
        while ((divisor<=a && a%divisor==0) || (divisor<=b && b%divisor==0))
        {
            mcm *= divisor;
            if (divisor<=a && a%divisor==0)
                a /= divisor;
            if (divisor<=b && b%divisor==0)
                b /= divisor;
        }
    for (i=2; b>0; i++)
    {
        for (divisor=2; divisor<i && i%divisor!=0; divisor++);
        if (divisor==i)

        {
            if (i!=2)
                cout << ", ";
            cout << i;
            b--;
        }


    cout << "  Minimo comun multiplo: " << mcm << endl << endl;
    system("pause");
    return EXIT_SUCCESS;
    }

}
