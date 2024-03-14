import java.io.*;
import java.util.*;

class Nodo {
    int info;
    Nodo esq, dir, pai;
}

public class ArvoreBin {
    private Nodo raiz;

    public ArvoreBin() {
        raiz = null;
    }
	
    public Nodo alocarNodo(int valor) {
        Nodo novoNodo = new Nodo();
        novoNodo.info = valor;
        novoNodo.esq = novoNodo.dir = novoNodo.pai = null;
        return novoNodo;
    }	

    public void inserir(int valor) {
        raiz = inserir(valor, raiz);
    }

    private Nodo inserir(int valor, Nodo raiz) {
        // Implementação aqui
    }

    public void preOrdem() {
        preOrdem(raiz);
    }

    private void preOrdem(Nodo raiz) {
        // Implementação aqui
    }

    public void central() {
        central(raiz);
    }

    private void central(Nodo raiz) {
        // Implementação aqui
    }

    public void posOrdem() {
        posOrdem(raiz);
    }

    private void posOrdem(Nodo raiz) {
        // Implementação aqui
    }

    public void remover(int valor) {
        // Implementação aqui
    }

    public Nodo buscar(int valor) {
        return buscar(valor, raiz);
    }

    private Nodo buscar(int valor, Nodo raiz) {
        // Implementação aqui
    }

    private Nodo buscarMin(Nodo raiz) {
        // Implementação aqui
    }

    public void gerarArqDot(String filename) {
        // Implementação aqui
    }

    private void escreverPreOrdemDot(Nodo raiz, BufferedWriter out) throws IOException {
        // Implementação aqui
    }

    public static void main(String[] args) {
        ArvoreBin arvore = new ArvoreBin();
        arvore.inserir(10);
        arvore.inserir(5);
        arvore.inserir(20);
        arvore.inserir(3);
        arvore.inserir(7);

        System.out.println("Caminhamento pré-ordem:");
        arvore.preOrdem();

        System.out.println("\nCaminhamento em ordem:");
        arvore.central();

        System.out.println("\nCaminhamento pós-ordem:");
        arvore.posOrdem();
		
		//Salvar no arquivo dot pra visualização 
		arvore.gerarArqDot("arvoreBin.dot");

    }
}
