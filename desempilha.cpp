//Leonardo Soares Nunes RA:17166525 Disciplina :Estrutura de Dados I Curso : Analise Desenvolvimento de Sistemas

#include <stdio.h>
#include <stdlib.h>
#define tamanho 8

struct tipo_pilha{
	int dados[tamanho];
	int ini;
	int topo;
};

tipo_pilha pilha;

void empilha(int elemento){
	if(pilha.topo == tamanho){
	printf("Pilha cheia.\n");
		
	}
	else
	{
	pilha.dados[pilha.topo] = elemento;
	pilha.topo++;
	}
}

int desempilha(){
	int elemento;
	if(pilha.topo == pilha.ini){
	printf("Pilha vazia.\n");
	
	}
	else
	{
	pilha.topo--;
	elemento = pilha.dados[pilha.topo];
	return elemento;
	}
}

int main(){
	pilha.topo = 0;
	pilha.ini = 0;
	int aux;
	
	printf(" 1");
	empilha(1);
	printf(" 7");
	empilha(7);
	printf(" 1");
	empilha(1);
	printf(" 6");
	empilha(6);
	printf(" 6");
	empilha(6);
	printf(" 5");
	empilha(5);
	printf(" 2");
	empilha(2);
	printf(" 5\n\n");
	empilha(5);	
	
	printf(" %d", desempilha());
	printf(" %d", desempilha());
	printf(" %d", desempilha());
	printf(" %d", desempilha());
	printf(" %d", desempilha());
	printf(" %d",  desempilha());
	printf(" %d", desempilha());
	printf(" %d", desempilha());
	
}



