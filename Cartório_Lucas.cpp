#include <stdio.h>  //biblioteca de comunica��o com o usu�rio
#include <stdlib.h> //biblioteca de aloca��o de espa�o na mem�ria 
#include <locale.h> //biblioteca de aloca��es de texto por regi�o 
#include <string.h> //biblioteca que gerencia as strings 


int registro ()  //cadastra os novos usu�rios no sistema 
{
	// inicio da cria��o da string/vari�veis 
	char Arquivo [50];
	char CPF [50];
	char Nome [50];
	char Sobrenome [50];
	char Cargo [50];
	
	printf ("Digite o CPF a ser cadastrado:   "); //coletando o CPF dos novos usu�rios 
	scanf (" %s", CPF); //usado pra referince a string 
	
	strcpy (Arquivo, CPF); //resposanve� por copiar os valores das string 
	
	FILE *file; //cria o arquivo 
	file = fopen (Arquivo, "w"); //cria o arquivo, o 
	fprintf (file,CPF); //salva o valor da variavel 
	fclose (file); //fecha o arquivo 
	
	file = fopen (Arquivo, "a"); //faz atualiza��o no arquivo com as novas inform��es 
	fprintf (file, ","); //Coloca a , entre as informa��es 
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
	
	
printf ("Voc� escolheu o regisro de nomes \n\n\n");
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
		printf ("N�o foi possivel abrir o arquivo, n�o localizado ! \n\n");
		
	}
	
	while (fgets (conteudo, 200, file) != NULL)
    {
    	printf ("\n Essas s�o as informa��es do usu�rio: ");
    	printf ("%s", conteudo );
    	printf ("\n\n");
    	
	}
	
	system ("pause");
	
printf ("Voc� escolheu consultar os nomes \n\n\n");
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
		printf ("O usu�rio n�o se encontra no sistema !  \n\n");
		system ("pause");
	    		
    	}
	
	
	
printf ("Voc� escolheu deletar nomes \n\n\n");
system ("pause");
}
 




int main()
{
	int opcao =0; //Definindo as vari�veis 
	int x=1;
	
	for(x=1; x=1;)
{
		system("cls");
	
	setlocale (LC_ALL, "portuguese"); //Definindo o idioma 
	
		printf (" Cart�rio da EBAC \n\n\n");
		printf ("Escolha a op��o desejada do menu: \n\n");
		printf ("\t1 -Registrar novo nome \n");
		printf ("\t2 -Consultar nome \n");
		printf ("\t3 -Apagar nome \n\n\n\n");
		printf ("Op��o:"); //fim do menu 
	
		scanf ("%d", &opcao ); //Armazendando as informa��es que o usu�rio escolheu  
		
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
	    	printf ("Est� op��o n�o est� disponivel \n\n\n");
		 system ("pause");
		 break;
	}
}
	
	
		printf("Esse programa foi criador por Lucas Ferrari.");

}

 

