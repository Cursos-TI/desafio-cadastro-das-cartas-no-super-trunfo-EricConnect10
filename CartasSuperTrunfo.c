#include<stdio.h>
int main(){
    printf("Desafio trunfo de cartas!\n");
    printf("Carta 1 \n");

    char Estado = 'A';
    char Código [20] = 'A01';
    char Nome[20] = "Minas gerais";
    int População = 213.22691;
    float Área = 586.528;
    float Pib = 272.3;
    int Pontos = 21;
    
    printf("Nome do Estado: \n");
    scanf("%c", &Estado);

    printf("Qual é o Código do Estado: \n");
    scanf("%s", &Código);

    printf("Nome da cidade: \n");
    scanf(" %s", &Nome);

    printf("População: \n");
    scanf("%f" , &População);

    printf("Tamanho da Área: \n");
    scanf(" %d" , &Área);
    
    printf("Pib: \n ");
    scanf(" %d" , &Pib);

    printf("Número de pontos turisticos: \n");
    scanf(" %c" , &Pontos);

printf("Carta 2 \n");

char ESTADO = 'B';
char CÓDIGO[20] = "B01";
char NOME[20] = "Goiás";
int POPULAÇÃO = 7350.483;
float ÁREA = 340.086;
float PIB = 336.7;
int PONTOS = 50;

printf("Nome do Estado: \n");
    scanf("%c", &ESTADO);

    printf("Qual é o Código do Estado: \n");
    scanf("%s", &CÓDIGO);

    printf("Nome da cidade: \n");
    scanf(" %s", &NOME);

    printf("População: \n");
    scanf("%f" , &POPULAÇÃO);

    printf("Tamanho da Área: \n");
    scanf(" %d" , &ÁREA);
    
    printf("Pib: \n ");
    scanf(" %d" , &PIB);

    printf("Número de pontos turisticos: \n");
    scanf(" %c" , &PONTOS);

    return 0;
}