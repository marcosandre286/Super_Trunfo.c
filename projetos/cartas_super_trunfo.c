#include <stdio.h>

int carta1();
    int main(){
    char nome[6] = "Brasil";
    char Estado[]  = "Ceará";
    char codigo[10] = "A12, A13, A14, A15";
    char cidade[20] = "Fortaleza";
    float população = 27000;
    double km²_area = 100000000000;
    double PIB = 300000000000;
    int Numero_pontos_turisticos = 50;

    printf("digite o nome do país:");
    scanf("%s\n", nome);
    printf("O nome do país é: %s\n", nome);

    printf("Digite o estado:");
    scanf("%s\n", Estado);
    printf("O estado é: %s\n", Estado);
    
    printf("Digite o código da cidade:");
    scanf("%c\n", codigo);
    printf("O código da cidade é: %c\n", codigo);
   
    printf("Digite a cidade:");
    scanf("%s\n", cidade);
    printf("A cidade é: %s\n", cidade);

    printf("Digite a população:");
    scanf("%d\n", população);
    printf("A população é: %d\n", população);
    
    printf("Digite a área em km²:");
    scanf("%f\n", km²_area);
    printf("A área em km² é: %f\n", km²_area);

    printf("Digite o PIB:");
    scanf("%d\n", PIB);
    printf("O PIB é: %d\n", PIB);
    
    printf("Número de pontos turísticos:");
    scanf("%d\n", Numero_pontos_turisticos);
    printf("O número de pontos turísticos é: %d\n", Numero_pontos_turisticos);


     return 0;    

}   