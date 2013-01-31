#include <stdlib.h>
#include <stdio.h>
#include "BinaryTree.h"

tNode* initTree()
{
	return (tNode*) calloc(1, sizeof(tNode));
}

void percursoPre(tNode *raiz)
{
	if(!raiz)
		return;
	
	printf("%d\n", raiz->dado);
	percursoPre(raiz->fEsq);
	percursoPre(raiz->fDir);
}

void percursoPos(tNode *raiz)
{
	if(!raiz)
		return;
	

	percursoPre(raiz->fEsq);
	percursoPre(raiz->fDir);
	printf("%d\n", raiz->dado);
}

void insereDado(tNode **raiz, int dado)
{




}