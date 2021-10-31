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
    int dvd, dvs;
    float c, r;

    cout << "Dividiendo y divisor: " << endl;
    cin >> dvd >> dvs;

    r = dvd;
    c = 0;

    while (r >= dvs)
    {
        r = r - dvs;
        c++;
    }

    cout << "El cociente es: " << c << " Y el resto es: " << r;

    return 0;
}
