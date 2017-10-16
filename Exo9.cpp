#include <iostream>
#include <ctime>
#include <cstdlib>
#include <array>

using namespace std;

int main()
{
  int bInf, bSup;
  srand(time(NULL));
  const int nMax = 10000;
  array <double, nMax> T;
  int n;
  cout << "Donnez une borne inferieure : " << endl;
  cin >> bInf;
  cout << "Donnez une borne superieure : " << endl;
  cin >> bSup;
  cout << "Combien de valeurs voulez-vous ? : " << endl;
  cin >> n;

  
  for(int i(0);i<n;i++)
  {
    T[i] = rand() % (bSup-bInf)+1;
    T[i]+= bInf;
    cout << "Valeur " << i+1 << " : " << T[i] << endl;
  }
  return 0;
}
