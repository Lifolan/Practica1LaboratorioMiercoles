# include <iostream>

# include <cmath>

using namespace std;

int Ejercicio6(){

int i, n;
float ex, factorial, x;
ex = 0;
factorial = 0;
cout << "Ingresa el valor de x: ";
cin >> x;
cin.get();
cout << "Ingresa el valor de n: ";
cin >> n;
cin.get();
for (i=1; i<=n; i++)
{
    cout << "PROCESO " << i << endl;
    if(i==1)
    {
        ex=1;
        factorial=1;
    }
    factorial=factorial*i;
    ex=ex+pow(x,i)/factorial;
    cout << endl;
}
cout << "Valor de e^x: " << ex << endl;
cout << "Valor del factorial para n(n!) es: " << factorial << endl;
system ("pause");
return EXIT_SUCCESS;
}

