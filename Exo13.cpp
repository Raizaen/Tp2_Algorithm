
#include <iostream>
#include <cstdlib>
#include <string>
#include <array>

int main()
{
  std::string sol;
  char guess;
  int cpt(0);
  std::cout << "Entrez votre mot mystere : " << std::endl;
  std::cin >> sol;
  //std::array<std::string,100> V;
  
  std::string V = sol;
  for(unsigned int i=0;i<V.length();i++){
    V[i]='_';
  }

  /*for(unsigned int i(0);i<sol.length();i++)
  {
    V[i]= "_";
  }*/
  system("CLS");
  std::cout << "Mot Mystere : ";
  for(unsigned int i(0);i<sol.length();i++)
  {
    std::cout << V[i] << " ";
  }
  while(sol!=V){
    if(cpt!=0) {
      std::cout << "Apres " << cpt << " essai(s), voici le mot mystere: ";
      for(unsigned int i(0);i<sol.length();i++)
      {
        std::cout << V[i] << " ";
      }
    }
    std::cout << std::endl;
    std::cout << "Entrez une lettre : ";
    std::cin >> guess;
    cpt++;
    for(unsigned int i(0);i<sol.length();i++)
    {
      if(guess==sol[i])
        V[i] = guess;
    }
  }
  std::cout << "Bravo ! Le Mot Mystere Etait : " << sol << std::endl;
  return 0;
}