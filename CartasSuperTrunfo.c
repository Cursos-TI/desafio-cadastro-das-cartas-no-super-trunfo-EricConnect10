#include<stdio.h>
int main(){
    printf("Desafio trunfo de cartas!\n");
    char Estado = 'A';
    char Código[20] = "A01";
    char Nome[20] = "Minas gerais";
    int População = 213.22691;
    float Área = 586.528;
    float Pib = 272.3;
    int Pontos = 21;
    
    printf("Estado: %s Estado\n");
    scanf("%s", &Estado);

    printf("Código da carta: \n");
    scanf("%d", &Código);

    printf("nome da cidade: \n");
    scanf("%s", &Nome);

    printf("População: \n");
    scanf("%f", &População);

    printf("Área: %.2f km²\n");
    scanf("%f", &Área);

    printf("Pib: %.2f reais\n");
    scanf("%f", &Pib);

    printf("Número de Pontos turisticos: \n");
    scanf("%d", &Pontos);
  
    return 0;

}
