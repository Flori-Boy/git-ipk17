#include <iostream>

using namespace std;

bool  isPrime (int zahl)
{
  if (zahl == 2)

    return true;

  else if (zahl < 0)

    return false;

  else if (zahl == 1)

    return false;
  else 
  {
    for (int i = zahl-1; i >= 2; i--)
  {
      if  (zahl % i == 0)
        {
         return false;
        }
   
}
}
}


int main()
{
  int zahl;
  cout << "Bitte geben sie eine Zahl ein, um zu testen, ob sie eine Primzahl ist" << endl;
  cin >> zahl;

  isPrime(zahl);

    if (isPrime(zahl) == 1)
      {
       cout << "Sie haben eine Primzahl eingegeben" << endl;
      }
    else if (isPrime(zahl) == 0)

        cout << "Sie haben keine Primzahl eingegeben" << endl;

return 0;
}
 
