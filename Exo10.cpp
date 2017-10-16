
#include <iostream>
#include <string>

using namespace std;

string palindromeCheck (string word) {
  int wordLength = word.length();
  
  for (int i=0; i<wordLength/2; i++)
  {
    if (word[i] != word[wordLength-i-1]) {
      return " non ";
    }
  }
  return " ";
}

int main () {
  string word;
  cout << "Entrez un mot" << endl;
  // cin >> word;
  getline(cin, word);
  cout << word << " est" << palindromeCheck(word) << "un palindrome" << endl;
  
  return 0;
}