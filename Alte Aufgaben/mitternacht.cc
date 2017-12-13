#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;

int  main()
{
// Initialisierung der benötigten Variablen
double a, b, c, x, y;

// Anfrage an den Nutzer Werte anzugeben und Einlesung dieser Wert

cout << "Bitte geben sie Variable a ein" << endl;
cin >> a;

cout << "Bitte geben sie Variable b ein" << endl;
cin >> b;

cout << "Bitte geben sie Variabrl c ein" << endl;
cin >> c;

//Aufteilung der Rechenoperationen
double u = 4.0*a*c;
double k = pow(b, 2.0);
double z;

//If Condition, welche verhindern soll, dass die Wurzel 
//eines negativen Werts gezogen wird

if (k >= u)

{
z = (k-u);
}

else 
{
cout << "Ihre Angabe ist nicht definiert" << endl;
return 0;
}

x = ( -b + sqrt(z))/(2*a);
y = ( -b - sqrt(z))/(2*a);

cout << "x1 =" << x << endl;
cout << "x2 =" << y << endl ;
return 0;
}
