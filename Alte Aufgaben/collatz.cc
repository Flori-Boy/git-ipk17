#include <iostream>


using namespace std;
int ergebnis;
void  collatz (int zahl)
{
while (zahl != 0 && zahl != 1 && zahl != -5 && zahl != -17)
  {
  if (zahl % 2 == 0)
    {
    zahl = zahl/2;
    }
  else
    {
    zahl = zahl*3 +1;
    }
    cout << zahl << endl;
    }
ergebnis = zahl;
}

int main()
{
   int zahl;
   cout << "Bitte geben sie bitte eine ganze Zahl ein" << endl;
   cin >> zahl;

   collatz(zahl);
   cout << "Das Ergebnis ist" << ergebnis << endl;
   return 0;
}
