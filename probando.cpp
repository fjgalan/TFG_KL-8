#include <iostream>

using namespace std;

int main()
{
    int x, y, z;
    char c;
    cout << "CALCULADORA: " << endl;
    cin >> x >> y;
    cin >> c;
    switch(c)
    {
        case 's':
        cout << "SUMA: " << x  << " + " << y << " = " << x+y << endl;
        break;
        case 'r':
        cout << "RESTA: " << x << " - " << y << " " << x-y << endl;   
        break;
    }
}
