#include <iostream>

using namespace std;

int main()
{
    double x, y, z;
    char c;
    cout << "CALCULADORA: " << endl;
    cout << "Introduzca los números: " << endl;
    cin >> x >> y;
    do
    {
        cout << "Elija una opción: ";
        cin >> c;
        switch(c)
        {
            case 's':
            cout << "SUMA: " << x  << " + " << y << " = " << x+y << endl;
            break;
            case 'r':
            cout << "RESTA: " << x << " - " << y << " = " << x-y << endl;   
            break;
            case 'm':
            cout << "MULTIPLICACIÓN: " << x << " * " << y << " = " << x*y << endl;
            break;
            case 'd':
            cout << "DIVISIÓN: " << x << " / " << y << " = " << x/y << endl;
            break;
        }
    } while (c == 's' || c == 'r' || c == 'm' || c == 'd');
    cout << "Gracias por usar la calculadora. " << endl;
}
