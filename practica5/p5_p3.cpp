// LEXICO
//     num1, num2 : entero;
//     c, r: real;
// ALGORITMO
//     Leer(num1, num2);
//     r <- num1;
//     c <- 0;
//     MIENTRAS (r>=0 Y num2>0) HACER
//         r <- r - num2;
//         c++;
//     FIN_MIENTRAS
//     Escribir(r, c);
#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    float c, r;

    cout << "dividiendo y divisor: " << endl;
    cin >> num1 >> num2;

    r = num1;
    c = 0;

    while (r >= 0 && num2 > 0)
    {
        r = r - num2;
        c++;
    }

    cout << "El cociente es: " << c << "Y el resto es: " << r;

    return 0;
}