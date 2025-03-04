#include <iostream>

using namespace std;

main() 
{
    // V
    float grausF, grausC;

    // E
    cout << "Qual a temperatura em celsius: ";
    cin >> grausC;

    // P
    grausF = (grausC * 1.8) + 32;

    // S
    cout << "A temperatura em farenheit eh " << grausF << "F";
}