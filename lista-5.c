// LISTA 5

//1-
//a) Faça a função le_valida_tipo que leia e valide o tipo do 
//   produto (1-fruta, 2-legume, 3-verdura). 
//   A função deverá retornar o tipo validado.
//
//b) Faça uma função, utilizando a função acima, que receba a 
//   quantidade de produtos comercializados por uma loja como parâmetro. 
//   A função deverá ler para cada produto o código e o 
//   tipo (1-fruta, 2-legume, 3-verdura), descobrir a quantidade de produtos 
//   que são do tipo 1, a quantidade de produtos que são do tipo 2 e a quantidade 
//   de produtos que são do tipo 3. Para isto a função irá guardar as quantidades 
//   nas variáveis cujos endereços são fornecidos na chamada da função.


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

//Faça um programa, utilizando a função abaixo, para processar os 40 alunos de 
//uma turma. Para cada aluno o programa deverá ler a matrícula e as duas notas, 
//calcular a média e exibir a matrícula, a média e a situação do 
//aluno (“aprovado”: média >= 5,0 ou “reprovado”: média < 5,0). Ao final o programa 
//deverá exibir a quantidade de alunos aprovados e a quantidade de alunos reprovados 
//da turma. Faça uma função que receba a média de um aluno, exiba a sua situação e 
//contabilize este aluno nos aprovados ou nos reprovados. A função irá contabilizar 
//os aprovados e os reprovados nas variáveis cujos endereços são fornecidos na chamada 
//da função.

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
//Faça um programa, utilizando a função abaixo, que exiba o maior salário de cada 
//departamento de uma empresa e quantos funcionários ganham o maior salário do 
//departamento. Para cada departamento, o programa deverá ler o código do departamento 
//e a quantidade de funcionários, e para cada funcionário, a matrícula e o salário. 
//Término da leitura dos departamentos: código do departamento = 0.

// a) Faça a função um_departamento para processar os funcionários de um departamento. 
//    Esta função deverá receber como parâmetro a quantidade de funcionários do 
//    departamento, ler os dados de cada funcionário, descobrir o maior salário do 
//    departamento e quantos funcionários ganham este maior salário, armazenando-os 
//    nas variáveis cujos endereços são fornecidos na chamada da função.

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

//Uma loja que comercializa peças de automóvel possui as seguintes informações de 
//cada peça: código e classificação da peça. As peças são classificadas de acordo 
//com a tabela abaixo que não deverá ser lida:

//Faça um programa, utilizando as funções abaixo, para processar as 100 peças 
//comercializadas. Para cada peça, o programa deverá ler os dados e exibir o seu 
//código, a quantidade mínima e a quantidade máxima em estoque. Faça a seguinte função:

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

