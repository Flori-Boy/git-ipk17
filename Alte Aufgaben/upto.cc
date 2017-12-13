#include <iostream>

using namespace std;

void  printPrimes (int upto)
{
bool isPrime;
  for (int i = upto; i >= 1; i--)
  {
    for (int j = i-1; j >= 1; j--)
     {
      if (i % j == 0 && j != i && j != 1)
      { isPrime = false;
       }
      else if (i % j != 0 && j != i && j != 1)
      { cout << i << endl;
        break;

      }
}

   }
  }


int main()
{
int upto;
bool isPrime;
cout << "Bitte geben sie eine natürliche Zahl ein" << endl;
cin >> upto;
printPrimes(upto);

return 0;

}
