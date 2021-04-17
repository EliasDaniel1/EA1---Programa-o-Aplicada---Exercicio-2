#include <iostream>
#include <string>

using namespace std;

int main() {
  string palavra;

  cout << "Digite uma palavra:" << endl;
  cin >> palavra;

  for(int i = 0; i < palavra.size(); i++)
  {
    cout << palavra[i] << endl;
  }
}