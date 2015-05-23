#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#ifdef WIN32
	#define so 0
#else
	#define so 1
#endif

void limpaTela();
void desenhaTela(int porcentagem);

int main(int argc, char const *argv[])
{
	
	int inicial = time(NULL),corrente = 0, correnteAnterior = 0;
	int porcentagem= 0, i;
	while(corrente < inicial + 10){
		corrente = time(NULL);
		if(corrente != correnteAnterior){ //entra 20 vezes
			correnteAnterior = corrente;
			limpaTela();
			desenhaTela(porcentagem);
			porcentagem += 10;
		}
	}

	return 0;
}
/*Função responsavel por limpar a tela de acordo com o SO*/
void limpaTela(){
	if(so==0)
		system("cls");
	else
		system("clear");
}
void desenhaTela(int porcentagem){
	int i = 0;
	printf("Loading:[");
	for(i=0; i < porcentagem ; i++){
		printf("=");
	}
	printf("]%i\%\n",porcentagem);
}
