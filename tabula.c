/**
*@author: Victor nSantos
*@date: 05/2015
*@Descrypt: Recebe um valor e faz tabulação
*/
#include <stdio.h>

/**
* @param: v (int) = valor para tabulação
*/
void tabula(int v){
	
	int i = 0, y =0, qt = (v+1)*(v+1);
	char value[v][qt+(v+1)];

	while(y <= v){
		sprintf(value[y],"|%i|",y*v);
		for(i=0;i < v; i++){
			int valor = v*(i+y)+v;
			sprintf(value[y],"%s%i|",value[y],valor);
		}
		y++;
	}

	for(i=0;i<=v;i++){
		printf("%s\n",value[i]);
	}
}
/*Para testar*/
int main(int argc, char const *argv[])
{
	//fixo como 2
	tabula(2);
	return 0;
}
