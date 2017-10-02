#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cstdio>

using namespace std;

int main () {
  int de, j1, j2, score1(0), score2(0), max(5);
  srand(time(NULL));

  while(score1 != max && score2 != max){
    cout << "J1 : " << "Appuyer sur Space pour jetter un de...";
    getchar();
    de = rand() % 6;
    cout << "Votre jet est de " << de + 1 << "." << endl << endl;
    j1 = de + 1;
    cout << "J2 : " << "Appuyer sur Space pour jetter un de..."; 
    getchar();
    de = rand() % 6;
    cout << "Votre jet est de " << de + 1 << "." << endl << endl;
    j2 = de + 1;
    
    if (j1>j2){
      score1++;
      cout << "J1 Win" << endl;
    }
    else if (j1==j2){
      cout << "Egalite" << endl;
    }
    else {
      score2++;
      cout << "J2 Win" << endl;
    }
    cout << "Score : " << score1 << " - " << score2 << endl;
    system("PAUSE");
    system("CLS");
  }
  
  switch(score1){
  case 5:
    cout << "J1 Win ! avec un score de " << score1 << " VS " << score2 << endl;
    break;
    
  default:
    cout << "J25 Win ! avec un score de " << score2 << " VS " << score1 << endl;
  }
  return 0;
} 