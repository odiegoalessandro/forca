#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char **agrv) {
  char letter[1], secretWord[30], word[30], option[1];
  int i = 0, secretWordLength = 0, hits = 0;
  int chances = 6;
  bool correct = false;

  system("clear");
  cout << "Escolha a palavra secreta: ";
  cin >> secretWord;

  while (secretWord[i] != '\0') {
    i++;
    secretWordLength++;
  }

  for (i = 0; i < 30; i++) {
    word[i] = '-';
  }

  while (chances > 0 && secretWordLength > hits) {
    system("clear");
    cout << "Numero de chances: " << chances << endl << endl;
    cout << "Palavra: ";

    for (i = 0; i < secretWordLength; i++) {
      cout << word[i];
    }

    cout << endl << endl << "Digite a letra que você deseja tentar: ";
    cin >> letter[0];

    for (i = 0; i < secretWordLength; i++) {
      if (secretWord[i] == letter[0]) {
        word[i] = letter[0];
        correct = true;
        hits++;
      }
    }

    if (!correct) {
      chances--;
    }

    correct = false;
  }

  if (hits == secretWordLength) {
    cout << endl << "Você ganhou" << endl;

  } else {
    cout << endl << "Você perdeu" << endl;

  }
  
  return 0;
}