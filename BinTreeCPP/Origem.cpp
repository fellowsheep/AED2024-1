#include <cstdio>

#include <iostream>
#include "ArvoreBin.h"

using namespace std;

int main()
{
	ArvoreBin arvore;
	
	arvore.inserir(10);
	//cout << arvore.getRaiz()->info;
	arvore.inserir(5);
	arvore.inserir(20);
	arvore.inserir(3);
	arvore.inserir(7);

	cout << "Caminhamento pre-ordem: ";
	arvore.preOrdem();
	cout << "\n--------------------------\n";

	cout << "Caminhamento central: ";
	arvore.central();
	cout << "\n--------------------------\n";

	cout << "Caminhamento pos-ordem: ";
	arvore.posOrdem();
	cout << "\n--------------------------\n";

	arvore.remover(5);

	arvore.gerarArqDot();


	system("pause");

	return 0;
}