#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cstdio>

using namespace std;

int main (){
  
  int min=1, max=100, bInf, bSup, cpt=0, inconnu, guess=0;
  
  srand(time(NULL));
  cout << "Entrez un nombre entre" << min << " et " << max << "va être genere. il va falloir le deviner" << endl;
  cout << "Push Enter to Start the Game";
  getchar();
  cout << "Generation du nombre en cours" << endl;
  inconnu = rand() % max;
  inconnu++;
  bInf = min;
  bSup = max;
  
  while (guess != inconnu) {
    cout << "quel est le nombre ?" << endl;
    cin >> guess;
    if (guess < inconnu){
      cout << "Plus" << endl;
      cout << "Push Enter To Continue" << endl;
      getchar();
      
      while (getchar()!= '\n'){
        bInf = guess;
      }
    }
    
    else if (guess > inconnu){
      cout << "Moins" << endl;
      cout << "Push Enter to continue" << endl;
      getchar();
      
      while (getchar()!= '\n'){
        bSup = guess;
      }
    }
    
    cpt++;
    system("CLS")
  }
  cout << "Nice ! vous l'avez fait en " << cpt << " coups" << endl; 
  return 0;
}