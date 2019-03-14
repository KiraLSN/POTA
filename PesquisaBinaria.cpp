#include<stdio.h>
#include<stdlib.h>



typedef struct fichaAluno {
char nome[6], turma[6];

int id;

};

struct fichaAluno aluno[5];

int i, j, busca, achou=0, opcao =0;
main(){

do{

printf("Escolha dentre as opções: \n 1- Cadastrar \n 2- Pesquisar \n");
scanf("%i",&opcao);

switch (opcao) {
    case 1 :
    for(i=0; i<5;i++)
	{
		printf("Digite o nome: ");
		scanf("%s",&aluno[i].nome);
		printf("digite turma: ");
		scanf("%s",&aluno[i].turma);
		printf("Digite o matricula: ");
		scanf("%i",&aluno[i].id);


		system("cls || clear");
	 }

	 break;

	 case 2:
	 printf("Informe a Matriucla desejada: \n");
	 scanf("%i", &busca);
	 int esquerda = 0;
 int direita = 5-1;
 int meio;
 while (esquerda <= direita)
 {
    meio = (esquerda+direita)/2;
    if (busca == aluno[meio].id){
    	printf("Resultado Final \n");
    	printf("Aluno: %s \n", aluno[meio].nome);

    	printf("Meio: %i \n", meio);
    	break;

    }
        if (busca < aluno[meio].id){
        //printf("Foi pra Direita \n");	
        direita = meio-1;
        }else{
            esquerda = meio+1;
          //  printf("Foi pra esquerda \n");
        }




 //printf("Aluno: %s \n", aluno[meio].nome);
 //printf("Meio: %i \n", meio);
 //printf("Busca: %i \n", busca);
 //printf("Matricula: %i \n", aluno[meio].id);

 }


 //printf("Aluno: %s \n", aluno[meio].nome);
 //printf("Meio: %s \n", meio);

 j=0;
meio = 0;
busca = 0;
break;
}

}while(opcao!=3);
}
