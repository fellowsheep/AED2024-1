#include "ArvoreBin.h"

ArvoreBin::ArvoreBin()
{
	raiz = NULL;
}


ArvoreBin::~ArvoreBin()
{
}

void ArvoreBin::inserir(int valor)
{
	
	raiz = inserir(valor, raiz);
}

void ArvoreBin::preOrdem()
{
	preOrdem(raiz);
}

void ArvoreBin::central()
{
	central(raiz);
}

void ArvoreBin::posOrdem()
{
	posOrdem(raiz);
}

Nodo * ArvoreBin::buscar(int valor)
{
	return buscar(valor, raiz);
}

Nodo * ArvoreBin::alocarNodo(int valor)
{
	Nodo *novo = new Nodo;
	novo->info = valor;
	novo->esq = NULL;
	novo->dir = NULL;
	return novo;
}

Nodo* ArvoreBin::inserir(int valor, Nodo *raiz)
{
	// Implementação aqui
	return NULL; //provisorio
}

void ArvoreBin::preOrdem(Nodo * raiz)
{
	// Implementação aqui
}

void ArvoreBin::central(Nodo * raiz)
{
	// Implementação aqui
}

void ArvoreBin::posOrdem(Nodo * raiz)
{
	// Implementação aqui
}

Nodo * ArvoreBin::buscar(int valor, Nodo * raiz)
{
	// Implementação aqui
	return NULL; //provisorio
}

Nodo * ArvoreBin::buscarMin(Nodo * raiz)
{
	// Implementação aqui
	return NULL; //provisorio
}

void ArvoreBin::escreverPreOrdemDot(Nodo * raiz, ofstream &arqSaida)
{
	if (raiz != NULL)
	{
		if (raiz->esq)
			arqSaida << raiz->info << " -> " << raiz->esq->info << ";" << endl;
		if (raiz->dir)
			arqSaida << raiz->info << " -> " << raiz->dir->info << ";" << endl;
		escreverPreOrdemDot(raiz->esq, arqSaida);
		escreverPreOrdemDot(raiz->dir, arqSaida);
	}

}


void ArvoreBin::gerarArqDot(string filename)
{
	ofstream arqSaida(filename,ios::out);
	if (arqSaida.is_open()) {
        cout << "Arquivo aberto com sucesso!\n";
        
        // Escreve no arquivo
        
		arqSaida << "digraph ArvoreBinaria {" << endl;
		arqSaida << "node [shape=circle, style=filled, color=black, fillcolor=\"#9370DB\"];" << endl;
		arqSaida << "edge [color=black];" << endl;
		escreverPreOrdemDot(raiz,arqSaida);

		arqSaida << "}" << endl;

        
        // Fecha o arquivo
        arqSaida.close();
		 cout << "Arquivo salvo com sucesso!\n";
    } else {
        cout << "Erro ao abrir o arquivo.\n";
    }
}

void ArvoreBin::remover(int valor)
{
	// Implementação aqui
}

