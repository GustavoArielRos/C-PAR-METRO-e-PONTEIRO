// LISTA 5

//1-
//a) Fa�a a fun��o le_valida_tipo que leia e valide o tipo do 
//   produto (1-fruta, 2-legume, 3-verdura). 
//   A fun��o dever� retornar o tipo validado.
//
//b) Fa�a uma fun��o, utilizando a fun��o acima, que receba a 
//   quantidade de produtos comercializados por uma loja como par�metro. 
//   A fun��o dever� ler para cada produto o c�digo e o 
//   tipo (1-fruta, 2-legume, 3-verdura), descobrir a quantidade de produtos 
//   que s�o do tipo 1, a quantidade de produtos que s�o do tipo 2 e a quantidade 
//   de produtos que s�o do tipo 3. Para isto a fun��o ir� guardar as quantidades 
//   nas vari�veis cujos endere�os s�o fornecidos na chamada da fun��o.


#include<stdio.h>
int le_valida_tipo()
{
	int tipo;
	do
	{
		printf("Digite tipo(1,2 ou 3): ");
		scanf("%d",&tipo);
		
	}while(tipo < 1 || tipo > 3)
	
	return tipo;
}

void contabiliza(int qtd, int *qtd1, int *qtd2, int *qtd3 )
{
	int cont, cod,tipo;
	*qt1 = *qt2 = *qt3 = 0;
	for(cont = 0; cont < qtd ; cont++)
	{
		printf("Digite codigo:");
		scanf("%d", &cod);
		tipo = le_valida_tipo();
		switch(tipo)
		{
			case 1:(*qt1)++;
			       break;
			       
			case 2:(*qt2)++;
			       break;
			       
			case 3:(*qt3)++;
			       break;
		}
	}
}

//2

//Fa�a um programa, utilizando a fun��o abaixo, para processar os 40 alunos de 
//uma turma. Para cada aluno o programa dever� ler a matr�cula e as duas notas, 
//calcular a m�dia e exibir a matr�cula, a m�dia e a situa��o do 
//aluno (�aprovado�: m�dia >= 5,0 ou �reprovado�: m�dia < 5,0). Ao final o programa 
//dever� exibir a quantidade de alunos aprovados e a quantidade de alunos reprovados 
//da turma. Fa�a uma fun��o que receba a m�dia de um aluno, exiba a sua situa��o e 
//contabilize este aluno nos aprovados ou nos reprovados. A fun��o ir� contabilizar 
//os aprovados e os reprovados nas vari�veis cujos endere�os s�o fornecidos na chamada 
//da fun��o.

#include<stdio.h>

void situacao(float media, int *qtdapr, int *qtdrepr)
{
	if(md>=5)
	{
		printf("\tAprovado");
		(*qtdapr)++;
		
	}
	else
	{
		printf("\tReprovado");
		(*qtdrepr)++;
		
	}
}

int main()
{
	int matr, apr, rep;
	float nota1, nota2, media;
	apr = rep = 0;
	
	for(cont = 0; cont < 40; cont++)
	{
		printf("Digite as duas notas e a matricula:");
		scanf("%d%f%f",&matr, &nota1, &nota2);
		media = (nota1 + nota2)/2;
		printf("\nMatricula:%d\tMedia:%f", matr, media);
		situacao(media, &apr, &rep);
	}
	
	printf("\nAprovados: %d\nReprovados:%d",apr,rep);
	
	return 0;
}

//3-
//
//Fa�a um programa, utilizando a fun��o abaixo, que exiba o maior sal�rio de cada 
//departamento de uma empresa e quantos funcion�rios ganham o maior sal�rio do 
//departamento. Para cada departamento, o programa dever� ler o c�digo do departamento 
//e a quantidade de funcion�rios, e para cada funcion�rio, a matr�cula e o sal�rio. 
//T�rmino da leitura dos departamentos: c�digo do departamento = 0.

// a) Fa�a a fun��o um_departamento para processar os funcion�rios de um departamento. 
//    Esta fun��o dever� receber como par�metro a quantidade de funcion�rios do 
//    departamento, ler os dados de cada funcion�rio, descobrir o maior sal�rio do 
//    departamento e quantos funcion�rios ganham este maior sal�rio, armazenando-os 
//    nas vari�veis cujos endere�os s�o fornecidos na chamada da fun��o.

#include<stdio.h>

void um_departamento(int qtd, float *maior, int *qtdmaior)
{
	int cont, matr;
	float sal;
	*maior = 0;
	for(cont = 0; cont<qtd;cont++);
	{
		printf("Digite matricula e salario:");
		scanf("%d%f", &matr, &sal);
		if(sal > *maior)
		{
			*maior = sal;
			*qtmaior = 1;
			
		}
		else
		  if(sal== *maior)
		      (*qtmaior)++;
	}
}

int main()
{
	int codigo, qtd, qtigual;
	float maiorsal;
	
	printf("Digite codigo 0 para encerrar:\n ");
	scanf("%d",&codigo);
	while(codigo != 0)
	{
		printf("Digite quantidade: ")
		scanf("%d", &qtd);
		um_departamento(qtd, &maiorsal, &qtdigual);
		printf("\nCodigo%d", codigo);
		printf("\tMaior salario: %.2f", maiorsal);
		printf("\tQuantidade maior: %d", qtdigual);
		printf("Digite codigo 0 para encerrar");
		scanf("%d", &codigo);
	}
}

//4-

//Uma loja que comercializa pe�as de autom�vel possui as seguintes informa��es de 
//cada pe�a: c�digo e classifica��o da pe�a. As pe�as s�o classificadas de acordo 
//com a tabela abaixo que n�o dever� ser lida:

//Fa�a um programa, utilizando as fun��es abaixo, para processar as 100 pe�as 
//comercializadas. Para cada pe�a, o programa dever� ler os dados e exibir o seu 
//c�digo, a quantidade m�nima e a quantidade m�xima em estoque. Fa�a a seguinte fun��o:

//a) le_valida_classificacao(): 

//     para ler, validar e retornar a classificacao validada. A classificacao e um numero 
//     inteiro de 1 a 4.

//b) classe():

//     recebe como parametro a classificacao da peca e guarda as quantidades minima e 
//     maxima em estoque nas variaveis cujos enderecos sao fornecidos na chamada da funcao.

int le_valida_classificao()
{
	int class;
	do
	{
		printf("Digite classificacao(1 a 4): ");
		scanf("%d",&clas);
	}while(clas < 1 || clas > 4);
	return clas;
}

void classe(int clas, int *min, int *max)
{
	switch(clas)
	{
		case 1: *min = 100;
		        *max = 120;
		        
		case 2: *min = 150;
		        *max = 180;
		        
		case 3: *min = 200;
		        *max = 250;
		        
		case 4: *min = 250;
		        *max = 300;
	}
}

int main()
{
	int cont, cod, classif, qtdmin, qtdmax;
	
	for(cont = 0; cont < 100; cont++)
	{
		printf("Digite codigo: ");
		scanf("%d", &cod);
		classif = le_valida_classificacao();
		classe(classif, &qtdmin, &qtdmax);
		printf("\nCodigo: %d", cod);
		printf("\tQuantidade minima: %d", qtdmin);
		printf("\tQuantidade maxima: %d",qtdmax);
	}
	
	return 0;
}

