#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    //Atributos da carta
    char Estado[8];
    char Código[4];
    char Nome_da_Cidade[50];
    int População;
    float Área;
    float PIB;
    int Número_de_Pontos_Turísticos;
  
    
    // Cadastro das Cartas:
    scanf("%s", &Estado);
   scanf("%s", &Código);
   scanf("%s", &Nome_da_Cidade);
   scanf("%d", &População);
   scanf("%f", &Área);
   scanf("%f", &PIB);
   scanf("%d", &Número_de_Pontos_Turísticos);

    
    // Exibição dos Dados das Cartas:
    printf("Carta 1 \n");
    printf("Estado: %s \n", Estado);
    printf("Código: %s \n", Estado, Código);
    printf("Nome_da_Cidade: %s \n", Nome_da_Cidade);
    printf("População: %d", População);
    printf("Área: %f \n", Área);
    printf("PIB: %f \n", PIB);
    printf("Número_de_Pontos_Turísticos: %d \n", Número_de_Pontos_Turísticos); 

    return 0;
}
