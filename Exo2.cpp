#include <iostream>

using namespace std;

int main() {
  int n;
  cout << "Création de Damier" << endl;
    cout << "Enter la Valeur d'un côté de votre damier" << endl;
      cin >> n;
  
  for(int i(0); i<n; i++)
    {
    for(int g(0); g<n; g++)
      {
      if (g & 1)
        cout << " ";
      else
        cout << "#";
    }
    cout << endl;
      if (!(i & 1))
        cout << " ";
  }
  return 0;
}