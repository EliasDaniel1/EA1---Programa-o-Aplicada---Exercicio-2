#include <iostream>
#include <string>
#include <cstring>

#define numeros 8
#define posicoes 4

using namespace std;

char teclado[numeros][posicoes] = {
	{'a', 'b', 'c', '\0'},
	{'d', 'e', 'f', '\0'},
	{'g', 'h', 'i', '\0'},
	{'j', 'k', 'l', '\0'},
	{'m', 'n', 'o', '\0'},
	{'p', 'q', 'r', 's'},
	{'t', 'u', 'v', '\0'},
	{'w', 'x', 'y', 'z'}
};



int main() {
 char palavra_P[50];
 string palavra;

 cout << "Digite a palavra desejada:" << endl;
 cin >> palavra;

if(palavra.length() <= 50)
{
  cout << "Você devera precionar as seguintes teclas e respectivamente o número de vezes para formar a palavra desejada:" << endl;
  
}


  
  
  
}