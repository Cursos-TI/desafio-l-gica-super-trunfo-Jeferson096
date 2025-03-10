#include<stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

int main(){
// CARTA 1
char estado1[5],carta1[5],cidade1[50];
int populacao1, turisticos1;
float area1,pib1,densidade1,pibcapita1,superpoder1; 
// CARTA 2
char estado2[5],carta2[5],cidade2[50];
int populacao2, turisticos2;
float area2,pib2,densidade2,pibcapita2,superpoder2;


// Entrada de dados da carta 1
printf("\n ******Carta 1 ****** \n");
printf("\nDigite a Sigla do estado: \n");scanf(" %s", &estado1);
printf("Digite a letra do estado seguida de um numero de 01 a 04 (ex: A01, B03). \n");scanf("%s", &carta1);
printf("O nome da cidade: \n");scanf("%s", &cidade1);
printf("O número de população da cidade: \n");scanf("%d", &populacao1);
printf("A área da cidade em km²: \n");scanf("%f", &area1);
printf("O PIB da cidade: \n");scanf("%f", &pib1);
printf("Quantidade de pontos turísticos da cidade: \n");scanf("%d", &turisticos1);

// Entrada de dados da carta 2
printf("\n ******Carta 2 ****** \n");
printf("Digite a Sigla do estado: \n");scanf(" %s", &estado2);
printf("Digite a letra do estado seguida de um numero de 01 a 04 (ex: A01, B03). \n");scanf("%s", &carta2);
printf("O nome da cidade: \n");scanf("%s", &cidade2);
printf("O número de população da cidade: \n");scanf("%d", &populacao2);
printf("A área da cidade em km²: \n");scanf("%f", &area2);
printf("O PIB da cidade: \n");scanf("%f", &pib2);
printf("Quantidade de pontos turísticos da cidade: \n");scanf("%d", &turisticos2);

// Calculo da densidade e pibcapita

 densidade1 = populacao1 / area1;
 densidade2 = populacao2 / area2;

 pibcapita1 = pib1 / populacao1;
 pibcapita2 = pib2 / populacao2;


//Comparação de atributos
printf("Comparação de atributos: \n");
int escolha1,escolha2;

//Ponto de retorno (do)
do{
printf("\n ******Carta 1 ****** \n");
printf("Escolha o primeiro atributo que deseja comparar: \n");
printf("1 - População \n");
printf("2 - Área \n");
printf("3 - PIB \n");
printf("4 - Pontos Turísticos \n");
printf("5 - PIB per capita \n");
printf("6 - Densidade \n");
scanf("%d", &escolha1);

printf("\nEscolha o segundo atributo que deseja comparar: \n");
printf("1 - População \n");
printf("2 - Área \n");
printf("3 - PIB \n");
printf("4 - Pontos Turísticos \n");
printf("5 - PIB per capita \n");
printf("6 - Densidade \n");
scanf("%d", &escolha2);

//Verificação de escolha de atributo
if (escolha1 == escolha2){
    printf("Você escolheu o mesmo atributo para a comparação! \n");
}
}while(escolha1 == escolha2);// retorna no "do"

//Pontuação das cartas
int resultado1, resultado2;

switch(escolha1){
    case 1: resultado1 = populacao1 > populacao2 ? 1 : 0; break;
    case 2: resultado1 = area1 > area2 ? 1 : 0; break;
    case 3: resultado1 = pib1 > pib2 ? 1 : 0; break;
    case 4: resultado1 = turisticos1 > turisticos2 ? 1 : 0; break;
    case 5: resultado1 = pibcapita1 > pibcapita2 ? 1 : 0; break;
    case 6: resultado1 = densidade1 < densidade2 ? 1 : 0; break;
    default: printf("Opção inválida! \n"); break;
}

switch(escolha2){
    case 1: resultado2 = populacao2 > populacao1 ? 1 : 0; break;
    case 2: resultado2 = area2 > area1 ? 1 : 0; break;
    case 3: resultado2 = pib2 > pib1 ? 1 : 0; break;
    case 4: resultado2 = turisticos2 > turisticos1 ? 1 : 0; break;
    case 5: resultado2 = pibcapita2 > pibcapita1 ? 1 : 0; break;
    case 6: resultado2 = densidade2 < densidade1 ? 1 : 0; break;
    default: printf("Opção inválida! \n"); break;
}

printf("\n****** Resultado Final ******\n");
printf("As cidades foram: %s e %s\n", cidade1, cidade2);
printf("Os dois atributos escolhidos foram: %d e %d\n", escolha1, escolha2);
printf("Pontos da Carta 1: %d\n", resultado1);
printf("Pontos da Carta 2: %d\n", resultado2);

//Soma das cartas
int soma1, soma2;

soma1 = resultado1 + resultado2;
soma2 = resultado2 + resultado1;    

//Resultado final
if (soma1 > soma2){
    printf("Carta 1 venceu!\n");
} else if (soma1 < soma2) {
    printf("Carta 2 venceu!\n");
} else {
    printf("Empate!\n");
}

return 0;

}







































