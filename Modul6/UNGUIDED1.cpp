//Yasvin Syahgana
//2311102065
//GUIDED 1
#include <iostream>
#include <stack>
#include <string>

using namespace std;

string kalimat(const string &sentence_065) {
  stack<char> stack;
  string perbaiki_065;

  for (char i : sentence_065) {
    stack.push(i);
  }
  while (!stack.empty()) {
    perbaiki_065 += stack.top();
    stack.pop();
  }
  return perbaiki_065;
}
bool isPolindrom(const string &sentence_065) {
  string reversedSentence_065 = kalimat(sentence_065);
  if (sentence_065 == reversedSentence_065) {
    return true;
  } else {
    return false;
  }
}
int main() {
  cout <<"Unguided 1\n";
  cout << "Yasvin Syahgana\n";
  string sentence_065;
  cout << "Masukkan kalimat : ";
  getline(cin, sentence_065);

  if (isPolindrom(sentence_065)) {
    cout << "Kalimat tersebut adalah Polindrom\n";
  } else {
    cout << "Kalimat tersebut bukan Polindrom\n";
  }
  return 0;
}