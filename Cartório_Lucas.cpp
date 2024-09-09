#include <stdio.h>  //biblioteca de comunicação com o usuário
#include <stdlib.h> //biblioteca de alocação de espaço na memória 
#include <locale.h> //biblioteca de alocações de texto por região 
#include <string.h> //biblioteca que gerencia as strings 


int registro ()  //cadastra os novos usuários no sistema 
{
	// inicio da criação da string/variáveis 
	char Arquivo [50];
	char CPF [50];
	char Nome [50];
	char Sobrenome [50];
	char Cargo [50];
	
	printf ("Digite o CPF a ser cadastrado:   "); //coletando o CPF dos novos usuários 
	scanf (" %s", CPF); //usado pra referince a string 
	
	strcpy (Arquivo, CPF); //resposanveç por copiar os valores das string 
	
	FILE *file; //cria o arquivo 
	file = fopen (Arquivo, "w"); //cria o arquivo, o 
	fprintf (file,CPF); //salva o valor da variavel 
	fclose (file); //fecha o arquivo 
	
	file = fopen (Arquivo, "a"); //faz atualização no arquivo com as novas informçôes 
	fprintf (file, ","); //Coloca a , entre as informaçôes 
	fclose (file);
	
	printf ("Digite o nome a ser cadastrado: ");
	scanf ("%s", Nome);
	
	file = fopen (Arquivo, "a");
	fprintf (file, Nome);
	fclose (file);
	
	file = fopen (Arquivo, "a");
	fprintf (file, ",");
	fclose (file);
	
	printf ("Digite o sobrenome a ser cadastrado:  ");
	scanf ("%s", Sobrenome);
	
	
	file = fopen (Arquivo, "a");
	fprintf (file, Sobrenome);
	fclose (file);
	
	file = fopen (Arquivo, "a");
	fprintf (file, ",");
	fclose (file);
	
	printf ("Digite o cargo a ser cadastrado: ");
	scanf ("%s",Cargo);
	
	file = fopen (Arquivo, "a"),
	fprintf (file, Cargo);
	fclose ( file );
	
	system ("pause");
	
	
printf ("Você escolheu o regisro de nomes \n\n\n");
system ("pause");
}

int consulta ()
{
	setlocale(LC_ALL, "Portuguese"); //Definindo o idioma para portugues 
	
	char CPF [40];
	char conteudo [200];
	
	printf ("Digite o CPF a ser consultado: ");
	scanf ("%s", CPF);
	
	FILE *file;
	file = fopen (CPF, "r");
	
	if (file == NULL)
	{
		printf ("Não foi possivel abrir o arquivo, não localizado ! \n\n");
		
	}
	
	while (fgets (conteudo, 200, file) != NULL)
    {
    	printf ("\n Essas são as informações do usuário: ");
    	printf ("%s", conteudo );
    	printf ("\n\n");
    	
	}
	
	system ("pause");
	
printf ("Você escolheu consultar os nomes \n\n\n");
system ("pause");
}

int deletar ()
{
	
	char CPF [50];
	

	printf ("Digite o CPF a ser deletado: ");
	scanf ("%s", CPF);
	
	remove (CPF);
	
	FILE * file;
	file = fopen (CPF, "r");
	
	if(file== NULL)

    	{
		printf ("O usuário não se encontra no sistema !  \n\n");
		system ("pause");
	    		
    	}
	
	
	
printf ("Você escolheu deletar nomes \n\n\n");
system ("pause");
}
 




int main()
{
	int opcao =0; //Definindo as variáveis 
	int x=1;
	
	for(x=1; x=1;)
{
		system("cls");
	
	setlocale (LC_ALL, "portuguese"); //Definindo o idioma 
	
		printf (" Cartório da EBAC \n\n\n");
		printf ("Escolha a opção desejada do menu: \n\n");
		printf ("\t1 -Registrar novo nome \n");
		printf ("\t2 -Consultar nome \n");
		printf ("\t3 -Apagar nome \n\n\n\n");
		printf ("Opção:"); //fim do menu 
	
		scanf ("%d", &opcao ); //Armazendando as informações que o usuário escolheu  
		
		system ("cls");
	
	
	switch (opcao)   //inicio da escolha do case 
	{
	
		case 1:
		registro ();
		break;		
		
		case 2:
		consulta ();
		break;
		
		case 3:
		deletar ();
		break;
	    
	    default:
	    	printf ("Está opção não está disponivel \n\n\n");
		 system ("pause");
		 break;
	}
}
	
	
		printf("Esse programa foi criador por Lucas Ferrari.");

}

 

