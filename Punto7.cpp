# include <iostream>

# include <cmath>

using namespace std;

int Ejercicio7(){
    int fibo1, fibo2, fibo3, i, n;
      int suma, termino, sumapar;
      fibo1 = 0;
      fibo2 = 0;
      suma = 0;
      sumapar = 0;
      cout << "Ingrese el valor de n: ";
      cin >> n;
      cin.get();
      for (i=1; i<=n; i++)
      {
          cout << "ITERACION " << i << endl;
          if(i==1)
              fibo2=1;
          termino=fibo2;
          suma=suma+fibo2;
          fibo3=fibo1+fibo2;
          fibo1=fibo2;
          fibo2=fibo3;
          cout << "Valor de fibo3: " << fibo3 << endl;
          cout << "Valor del termino: " << termino << endl;
          if(fibo3%2 == 0 && fibo3 <= n)
              sumapar=sumapar+fibo3;
          cout << endl;
      }
      cout << "El resultado de fibo1 : " << fibo1 << endl;
      cout << "El resultado de fibo2 : " << fibo2 << endl;
      cout << "El resulatdo de la suma de los terminos es : " << suma << endl;
      cout << "El resultado de la suma de pares es : " << sumapar << endl;
      system ("pause");
      return EXIT_SUCCESS;
}
