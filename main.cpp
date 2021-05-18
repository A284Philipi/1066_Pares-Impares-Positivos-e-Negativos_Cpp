#include <iostream>

using namespace std;

int main()
{
    int a, cont = 0, pares = 0, impares = 0, negativos = 0, positivos = 0;
    while (cont < 5){
        cin >> a;
        if (a%2 == 0){
            pares++;
        }else{
        impares++;
        }
        if (a > 0){
            positivos++;
        }
        if (a < 0){
            negativos++;
        }
        cont++;
    }
    cout << pares << " valor(es) par(es)" <<endl;
    cout << impares << " valor(es) impar(es)" <<endl;
    cout << positivos << " valor(es) positivo(s)" <<endl;
    cout << negativos << " valor(es) negativo(s)" <<endl;
    return 0;
}
