#include <stdio.h> //Biblioteca de Comunicação com usuario
#include <stdlib.h> //biblioteca de alocação de espaço em Memória
#include <locale.h> //Biblioteca de alocação de texto por região
#include <string.h> 

int registro() //Função para Cadadstrar os Usuários
{
	//Iniciar a Criação de Variáveis	
	int opcao=0;
	char arquivo [40];
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	char idioma[40];
	char estado[40];
	char idade[100];
	//Fim da Criação de Variaveis
	
	

	printf("Você Escolheu o Registro de Nomes!\nDigite o CPF Que Deseja Cadastrar: ");	//Coletar Informação dos Usuários que serão Cadastrados
	scanf("%s", cpf); //Da Inicio a String
	
	strcpy(arquivo,cpf); //Responsável Por Copiar os Valores dos Strings
	
    FILE *file; //Cria o Arquivo
    file = fopen(arquivo, "w"); //Abre o Arquivo. o "W" Significa "Write" = "Escrever.
    fprintf(file,cpf); //salva o valor da variável
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
int consulta() //Função que Consulta os Dados préviamente Cadastrados
{
	setlocale(LC_ALL, "Portuguese"); //Definindo a Línguagem
	
	//Criação de Variaveis
	char cpf[40];
	char conteudo[200];
	//Fim da Criação
	

	printf("Você Escolheu Consultar um Usuário!\nDigite o CPF Que Deseja Consultar: ");	//Coleta os Dados do Usuário Prestes a Ser Consultado
	scanf("%s", cpf); //Da Inicio a Sstring
	
	//Nesse Caso, Vailda se o Arquivo Existe. o "R" Significa "Read" = "ler"
	FILE *file; 
	file = fopen(cpf, "r");
	//Fim da Validação
	
	if(file == NULL) //Se o Arquivo Não Existir, o printf é executado. Se Existir, Esse "If" não é executado
	{
		printf("Esse CPF Não Foi Localizado e Portanto, Não Será Possível Consulta-lo\n");
	}
	
		printf("\n Essas São as Informações do Usuário: ");
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

int deletar() //Função de Deletar os Usuários Préviamente Cadastrados
{
	char cpf[40]; //Criação da Única Variavel Dessa Função
	
	printf("Digite o CPF que Deseja Deletar: ");//Coleta o Dado o Usuário Prestes a Ser Deletado
	scanf("%s", cpf); //Da Início a String
	 
	
	//Valida a Existência do CPF
	FILE *file; 
	file = fopen(cpf, "r");
	//Fim da Validação
	
	if (file == NULL) //se o Arquivo Não Existir, o Printf é executado
	{
		 printf("Esse CPF Não Foi Encontrado.\n");
		 system("pause");
		 fclose(file);
	}
	else //Se Não
	{
		fclose(file);
		remove(cpf); //Deleta o Arquivo
		printf("CPF Deletado Com Sucesso!\n");
		system("pause");
	}
	
	
}

int main()
{


	int opcao=0; //Definindo a Variável "Opção"
	int laco=1; //a Variavel Laço Cria uma Repetição/Loop se o Usuário Inserir uma Opção Inválida ou Terminar uma função
	setlocale(LC_ALL, "Portuguese"""); 
	 for(laco=1;laco=1;)
	 {
	 
	  system("cls");
	
	
	  printf("\n\t\t\t\t\t\t Cartório da EBAC \t\n\n"); //Começo do Menu
	  printf("\t\t\t\t\t Escolha a Opção Desejada do Menu:\n\n\n");
	  printf("\t\t\t\t\t\t 1 -Registrar Nomes- \n");
	  printf("\t\t\t\t\t\t 2 -Consultar Nomes- \n");
	  printf("\t\t\t\t\t\t 3 -Deletar Nomes- \n"); 
	  printf("\t\t\t\t\t\t 4 -Sair Do Programa-.\n"); //Fim do Menu
	  printf("\nOpção: ");

	  scanf("%d",&opcao); //Armazenando a escolha do Usuario
	  system("cls"); //Responsável Por Limpar a Tela
	
      switch(opcao) //Inicio da Seleção do Menu
      {
   	   case 1:
   	   registro(); //Se o Usuário Digitar "1", a Tela e a Função de Registro Serão  Executadas
   	   break;
   	
   	   case 2:
   	   consulta(); //Se o Usuário Digitar "2", a Tela e a Função de Consulta Serão Executadas
   	   break;
   	
   	   case 3:
   	   deletar(); //Se o Usuário Digitar "3", a Tela e a Função de Consulta Serão Executadas
   	   break;
   	   
   	   case 4:
   	   printf("Obrigado Por Utilizar o Sistema! \n");
	   return 0; //Se o Usuário Digitar "3", a Tela e a Função de Consulta Serão Executadas
   	   break;

   	   default:
   	   	printf("Essa Opção Não Existe. Pressione Qualquer Tecla Para Voltar ao Menu e Tente Novamente.\n"); //Se o usuário Digitar Qualquer Outro Caractere, Essa Tela Será Executada
   	   system("pause");
   	   break;
      } //Fim da Seleção
     }
}
