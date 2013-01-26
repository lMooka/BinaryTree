typedef struct Node
{
	int dado;
	struct Node *fDir;
	struct node *fEsq;
} tNode;

tNode* initTree();
void PercursoPre(tNode *raiz);
void percursoPos(tNode *raiz)
void inseredado(tNode **raiz, int dado);