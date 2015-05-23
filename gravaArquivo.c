#include <stdio.h>

int verificaArquivo(char *nomeArquivo);
void criaArquivo(char *nomeArquivo);
void gravaArquivo(char *conteudo, char *nomeArquivo);

int main(int argc, char const *argv[])
{
	char *nomeArquivo = "arquivo.txt";
	gravaArquivo("\n conteudo",nomeArquivo);

	return 0;
}
int verificaArquivo(char *nomeArquivo){
	FILE *arq;
	arq = fopen(nomeArquivo,"r");
	if(!arq){
		return 0;
	}
	fclose(arq);
	return 1;
}
void criaArquivo(char *nomeArquivo){
	if(!verificaArquivo(nomeArquivo)){
		FILE *arq;
		arq = fopen(nomeArquivo,"w");
		fclose(arq);
	}
}
void gravaArquivo(char *conteudo, char *nomeArquivo){
	if(!verificaArquivo(nomeArquivo)){
		criaArquivo(nomeArquivo);
	}
	FILE *arq;
	arq = fopen(nomeArquivo,"a");
	fprintf(arq,"%s",conteudo);
	fclose(arq);
	return;
}
