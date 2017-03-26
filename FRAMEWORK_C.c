// Aluno: 
//Matricula:

#include <stdio.h>
#include <stdlib.h>
#include <string.h> //usar para funcoes String. 

/* 
Sintese:
Objetivo:
Entrada:
Saida:
*/

//Prototipos das funções
int leInt(char msg[]);
int leValidaInt(char msg[], int min, int max);
float leFloat(char msg[]);
void leString(char str[],int tamMax);
void strlower(char str[]);
void strupper(char str[]);
int verificaRepetido(int valores[], int posicao);

int main() {  

//Declarações

//Instruções

	return 0;
}

//Objetivo: Ler um número do tipo int
//Parâmetros: referência ao vetor msg.
//Retorno: número tipo int lido.
int leInt(char msg[]){
	int ret;
	int num;
	do{
		printf("%s", msg);
		fflush(stdin);
		ret = scanf("%d",&num);
		if (ret == 0)
			printf("Favor digitar numeros.\n");
	}while (ret == 0 );

	return num;
}

//Objetivo: Validar um número do tipo int com Valor minimo e valor maximo.
//Parâmetros: referência ao vetor mensagem, número minímo, número máximo.
//Retorno: número tipo int validado.
int leValidaInt(char msg[], int min, int max){
	int num;

	do{
		num = leInt(msg);
		if (num < min || num > max)
			printf("Favor digitar um valor entre %d e %d.\n", min, max);
	}while(num < min || num > max);

	return num;
}

//Objetivo: Ler um número do tipo float
//Parâmetros: referência ao vetor mensagem.
//Retorno: número tipo float lido.
float leFloat(char msg[]){
	float num;
	int ret;

	do{
		printf("%s", msg);
		fflush(stdin);
		ret = scanf("%f",&num);
		if (ret == 0)
			printf("Favor digitar numeros.\n");
	}while (ret == 0 );

	return num;
}

//Objetivo: Ler e Validar String.
//Parâmetros: Referencia ao Vetor String.
//Retorno: Void
void leString(char str[],int tamMax)
{
	printf("Informe String: ");
	fflush(stdin);
	fgets(str,tamMax,stdin);
	fflush(stdin);
	if(str[strlen(str)-1] == '\n')
	  str[strlen(str)-1] = '\0';
}

//Objetivo: Transforma String em minuscula..
//Parâmetros: Referencia ao Vetor String.
//Retorno: Void
void strlower(char str[])
{
	int cont;
	for(cont=0;cont<strlen(str);cont++)
	str[cont] = tolower(str[cont]);
}

//Objetivo: Transforma String em Maiuscula.
//Parâmetros: Referencia ao Vetor String.
//Retorno: Void
void strupper(char str[])
{
	int cont;
	for(cont=0;cont<strlen(str);cont++)
	str[cont] = toupper(str[cont]);
}

//Objetivo: Verificar se existe numero repetido em um vetor.
//Parametro: Referencia ao vetor e a posicao que deve ser verificado 
//Retorno: 0 para se nao existe e 1 para se existe numero repetido
int verificaRepetido(int valores[], int posicao)
{
	int cont,flag=0;
	for(cont=0;cont<posicao;cont++)
	{
		if(valores[posicao]==valores[cont])
		{
			printf("Valor Inserido ja existe no sistema ...\n");
			flag=1;
			break;
		}
	}
	return flag;
}
