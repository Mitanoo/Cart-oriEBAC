#include <stdio.h> //Biblioteca de Comunica��o com usuario
#include <stdlib.h> //biblioteca de aloca��o de espa�o em Mem�ria
#include <locale.h> //Biblioteca de aloca��o de texto por regi�o
#include <string.h> 

int registro() //Fun��o para Cadadstrar os Usu�rios
{
	//Iniciar a Cria��o de Vari�veis	
	int opcao=0;
	char arquivo [40];
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	char idioma[40];
	char estado[40];
	char idade[100];
	//Fim da Cria��o de Variaveis
	
	

	printf("Voc� Escolheu o Registro de Nomes!\nDigite o CPF Que Deseja Cadastrar: ");	//Coletar Informa��o dos Usu�rios que ser�o Cadastrados
	scanf("%s", cpf); //Da Inicio a String
	
	strcpy(arquivo,cpf); //Respons�vel Por Copiar os Valores dos Strings
	
    FILE *file; //Cria o Arquivo
    file = fopen(arquivo, "w"); //Abre o Arquivo. o "W" Significa "Write" = "Escrever.
    fprintf(file,cpf); //salva o valor da vari�vel
    fclose(file); //fecha o arquio
    
     file = fopen(arquivo, "a"); //Abre o Arquivo. o "A" Significa "Atualizar"
     fprintf(file, "\nNome: ");
     fclose(file);
    
    printf("Digite o Nome Que Deseja Cadastrar: ");
    scanf("%s", nome);
    
    file = fopen(arquivo, "a");
    fprintf(file,nome);
    fclose(file);
    
    file = fopen(arquivo, "a");
    fprintf(file, "\nSobrenome: ");
	fclose(file);
	
	printf("Digite o Sobrenome que Deseja Cadastrar: ");
    scanf("%s", sobrenome);
    
    file = fopen(arquivo, "a");
    fprintf(file,sobrenome);
    fclose(file);
    
    file = fopen(arquivo, "a");
    fprintf(file, "\nCargo: ");
    fclose(file);
    
    printf("Digite o Cargo Que Deseja Cadastrar: ");
    scanf("%s", cargo);
    
    file = fopen(arquivo, "a");
    fprintf(file, cargo);
    fclose(file);
    
    file = fopen(arquivo, "a");
    fprintf(file, "\nIdioma: ");
    fclose(file);
    
    printf("Digite o Idioma Que Deseja Cadastrar ");
    scanf("%s", idioma);
    
    file = fopen(arquivo, "a");
    fprintf(file, idioma);
    fclose(file);
    
    file = fopen(arquivo, "a");
    fprintf(file, "\nEstado(Sigla): ");
    fclose(file);
    
    printf("Digite a Cidade que Deseja Cadastrar: ");
    scanf("%s", estado);
    
    file - fopen(arquivo, "a");
    fprintf(file, estado);
    fclose(file);
    
    file = fopen(arquivo, "a");
    fprintf(file, "\nIdade: ");
    fclose(file);
    
    printf("Digite a Idade que Deseja Cadastrar: ");
    scanf("%s", idade);
    
    file - fopen(arquivo, "a");
    fprintf(file, idade);
    fclose(file);
    
    system("pause"); //Pausa o Sistema Para Facilitar a Leitura
    	
}
int consulta() //Fun��o que Consulta os Dados pr�viamente Cadastrados
{
	setlocale(LC_ALL, "Portuguese"); //Definindo a L�nguagem
	
	//Cria��o de Variaveis
	char cpf[40];
	char conteudo[200];
	//Fim da Cria��o
	

	printf("Voc� Escolheu Consultar um Usu�rio!\nDigite o CPF Que Deseja Consultar: ");	//Coleta os Dados do Usu�rio Prestes a Ser Consultado
	scanf("%s", cpf); //Da Inicio a Sstring
	
	//Nesse Caso, Vailda se o Arquivo Existe. o "R" Significa "Read" = "ler"
	FILE *file; 
	file = fopen(cpf, "r");
	//Fim da Valida��o
	
	if(file == NULL) //Se o Arquivo N�o Existir, o printf � executado. Se Existir, Esse "If" n�o � executado
	{
		printf("Esse CPF N�o Foi Localizado e Portanto, N�o Ser� Poss�vel Consulta-lo\n");
	}
	
		printf("\n Essas S�o as Informa��es do Usu�rio: ");
		printf("\n\n");
		printf("\nCPF: ");
		
		while(fgets(conteudo, 200, file) != NULL) //Procura o Arquivo e o Valida como "Null" ou Existente.
	{
		printf("%s", conteudo);
		printf("\n\n");
	}
	fclose(file);
	system("pause");//Pausa o Sistema Para Facilitar a Leitura
}

int deletar() //Fun��o de Deletar os Usu�rios Pr�viamente Cadastrados
{
	char cpf[40]; //Cria��o da �nica Variavel Dessa Fun��o
	
	printf("Digite o CPF que Deseja Deletar: ");//Coleta o Dado o Usu�rio Prestes a Ser Deletado
	scanf("%s", cpf); //Da In�cio a String
	 
	
	//Valida a Exist�ncia do CPF
	FILE *file; 
	file = fopen(cpf, "r");
	//Fim da Valida��o
	
	if (file == NULL) //se o Arquivo N�o Existir, o Printf � executado
	{
		 printf("Esse CPF N�o Foi Encontrado.\n");
		 system("pause");
		 fclose(file);
	}
	else //Se N�o
	{
		fclose(file);
		remove(cpf); //Deleta o Arquivo
		printf("CPF Deletado Com Sucesso!\n");
		system("pause");
	}
	
	
}

int main()
{


	int opcao=0; //Definindo a Vari�vel "Op��o"
	int laco=1; //a Variavel La�o Cria uma Repeti��o/Loop se o Usu�rio Inserir uma Op��o Inv�lida ou Terminar uma fun��o
	setlocale(LC_ALL, "Portuguese"""); 
	 for(laco=1;laco=1;)
	 {
	 
	  system("cls");
	
	
	  printf("\n\t\t\t\t\t\t Cart�rio da EBAC \t\n\n"); //Come�o do Menu
	  printf("\t\t\t\t\t Escolha a Op��o Desejada do Menu:\n\n\n");
	  printf("\t\t\t\t\t\t 1 -Registrar Nomes- \n");
	  printf("\t\t\t\t\t\t 2 -Consultar Nomes- \n");
	  printf("\t\t\t\t\t\t 3 -Deletar Nomes- \n"); 
	  printf("\t\t\t\t\t\t 4 -Sair Do Programa-.\n"); //Fim do Menu
	  printf("\nOp��o: ");

	  scanf("%d",&opcao); //Armazenando a escolha do Usuario
	  system("cls"); //Respons�vel Por Limpar a Tela
	
      switch(opcao) //Inicio da Sele��o do Menu
      {
   	   case 1:
   	   registro(); //Se o Usu�rio Digitar "1", a Tela e a Fun��o de Registro Ser�o  Executadas
   	   break;
   	
   	   case 2:
   	   consulta(); //Se o Usu�rio Digitar "2", a Tela e a Fun��o de Consulta Ser�o Executadas
   	   break;
   	
   	   case 3:
   	   deletar(); //Se o Usu�rio Digitar "3", a Tela e a Fun��o de Consulta Ser�o Executadas
   	   break;
   	   
   	   case 4:
   	   printf("Obrigado Por Utilizar o Sistema! \n");
	   return 0; //Se o Usu�rio Digitar "3", a Tela e a Fun��o de Consulta Ser�o Executadas
   	   break;

   	   default:
   	   	printf("Essa Op��o N�o Existe. Pressione Qualquer Tecla Para Voltar ao Menu e Tente Novamente.\n"); //Se o usu�rio Digitar Qualquer Outro Caractere, Essa Tela Ser� Executada
   	   system("pause");
   	   break;
      } //Fim da Sele��o
     }
}
