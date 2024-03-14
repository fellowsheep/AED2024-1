#pragma once

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

struct Nodo
{
	int info;
	Nodo *esq, *dir, *pai;
};


class ArvoreBin
{
public:
	ArvoreBin();
	~ArvoreBin();

	void inserir(int valor);
	void preOrdem();
	void central();
	void posOrdem();
	void remover(int valor);

	Nodo* buscar(int valor);
	Nodo* getRaiz() { return raiz; }
	Nodo* alocarNodo(int valor);

	void gerarArqDot(string filename = "arvoreBinGerado.dot");
	void escreverPreOrdemDot(Nodo * raiz, ofstream &arqSaida);

protected:
	Nodo *raiz;

	Nodo* inserir(int valor, Nodo *raiz);
	void preOrdem(Nodo *raiz);
	void central(Nodo *raiz);
	void posOrdem(Nodo *raiz);
	Nodo *buscar(int valor, Nodo *raiz);
	Nodo *buscarMin(Nodo *raiz);
};

