#include <iostream>
using namespace std;

int main (){
  
  int c, d, u;
  for (int i(100); i<1000;i++){
    c = i/100;
    d = (i%100)/10;
    u = (i%10);
      if (c!=d && c!=u && d!=u && (c+d+u)==9){
        cout << "le nombre " << i << " est valide" << endl;
      }
  }
  return 0;
}