# include <iostream>

# include <cmath>

using namespace std;

int Ejercicio8(){

    int a, b, c, i, multiplosa, multiplosb, suma;
        cout << "Ingresa el valor de a: ";
        cin >> a;
        cin.get();
        cout << "Ingresa el valor de b: ";
        cin >> b;
        cin.get();
        cout << "Ingresa el valor de c: ";
        cin >> c;
        cin.get();
        for (i=1; i<=(c/a); i++)
        {
            cout << "ITERACION " << i << endl;
            multiplosa=a*i;
            cout << "Valor de multiplos de a: " << multiplosa << endl;
            cout << endl;
        }
        for (i=1; i<=(c/b); i++)
        {
            cout << "ITERACION " << i << endl;
            multiplosb=b*i;
            cout << "Valor de multiplos de b: " << multiplosb << endl;
            cout << endl;
        }
        for (i=1; i<(c/a); i++)
        {
            if(multiplosa < c )
                suma=suma+multiplosa;
            cout << endl;
        }
        cout << "Valor de suma multiplos de a: " << suma << endl;
        system ("pause");
        return EXIT_SUCCESS;
}
