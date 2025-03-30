#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    //Atributos das cartas
    char Estado[8];
    char Estado2[8];
 
    char Código[4];
    char Código2[4];
 
    char Nome_da_Cidade[50];
    char Nome_da_Cidade2[50];
 
    int População;
    int População2;
 
    float Área;
    float Área2;
 
    float PIB;
    float PIB2;
 
    int Número_de_Pontos_Turísticos;
    int Número_de_Pontos_Turísticos2;
 
    float Densidade_Populacional;
    float Densidade_Populacional2;
 
    float PIB_per_Capita;
    float PIB_per_Capita2;
 
    
    //Cadastro da carta 1
    printf("Digite o Estado: ");
    scanf("%s", &Estado);
    
 
    printf("Digite o Código: ");
    scanf("%s", &Código);
    
    printf("Digite o Nome_da_Cidade: ");
    scanf("%s", &Nome_da_Cidade);
   
 
    printf("Digite a População: ");
    scanf("%d", &População);
    
 
    printf("Digite a Área: ");
    scanf("%f", &Área);
    
 
    printf("Digite o PIB: ");
    scanf("%f", &PIB);
    
 
    printf("Digite o Número_de_Pontos_Turísticos: ");
    scanf("%d", &Número_de_Pontos_Turísticos);
 
    //Exibição da carta 1
    printf("Carta 1 \n");
    printf("Estado: %s \n", Estado);
    printf("Código: %s \n", Código);
    printf("Nome_da_Cidade: %s \n", Nome_da_Cidade);
    printf("População: %d \n", População);
    printf("Área: %f \n", Área);
    printf("PIB: %f \n", PIB);
    printf("Número_de_Pontos_Turísticos: %d \n", Número_de_Pontos_Turísticos); 
    printf("Densidade_Populacional: %f \n", População / Área);
    printf("PIB_per_Capita: %f \n", PIB / População);
 
    //Cadastro da carta 2
    printf("Digite o Estado2: ");
    scanf("%s", &Estado2);
 
    printf("Digite o Código2: ");
    scanf("%s", &Código2);
 
    printf("Digite o Nome_da_Cidade2: ");
    scanf("%s", &Nome_da_Cidade2);
 
    printf("Digite a População2: ");
    scanf("%d", &População2);
 
    printf("Digite a Área2: ");
    scanf("%f", &Área2);
 
    printf("Digite o PIB2: ");
    scanf("%f", &PIB2);
 
    printf("Digite o Número_de_Pontos_Turísticos2: ");
    scanf("%d", &Número_de_Pontos_Turísticos2);
 
    //Exibição da carta 2
    printf("Carta 2 \n");
    printf("Estado2: %s \n", Estado2);
    printf("Código2: %s \n", Código2);
    printf("Nome_da_Cidade2: %s \n", Nome_da_Cidade2);
    printf("População2: %d \n", População2);
    printf("Área2: %f \n", Área2);
    printf("PIB2: %f \n", PIB2);
    printf("Número_de_Pontos_Turísticos2: %d \n", Número_de_Pontos_Turísticos2);
    printf("Densidade_Populacional2: %f \n", População2 / Área2);
    printf("PIB_per_Capita2: %f \n", PIB2 / População2);
 

    return 0;
}
