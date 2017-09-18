#include <iostream>

using namespace std;

int main(){
  int nbr;
    cout << "Choisir un nombre : " << endl;
      cin >> nbr;
    
  for(int i=0; i<=10; i++) {
    cout << nbr << "*" << i << " = " << nbr*i << endl;
    
  }
  
  return 0;
}