#include <stdio.h>

int main() {
    int escolha;
    int pontosRioDeJaneiro = 0, pontosSaoPaulo = 0;
    int populacao1,populacao2, pontosTuristicos1, pontosTuristicos2;
    float area1,area2, pib1, pib2, densidade1, densidade2;


    // Entrada de dados da Cidade 1 - Rio de Janeiro
    printf("Digite a população do Rio de Janeiro:\n");
    scanf("%d", &populacao1);
    printf("Digite a área do Rio de Janeiro:\n");
    scanf("%f", &area1);
    printf("Digite o PIB do Rio de Janeiro:\n");
    scanf("%f", &pib1);
    printf("Digite a densidade demográfica do Rio de Janeiro:\n");
    scanf("%f", &densidade1);
    printf("Digite o número de pontos turísticos do  Rio de Janeiro:\n");
    scanf("%d", &pontosTuristicos1);

    // Entrada de dados da Cidade 2 - Sao Paulo
    printf("Digite a população de São Paulo:\n");
    scanf("%d", &populacao2);
    printf("Digite a área de São Paulo:\n");
    scanf("%f", &area2);
    printf("Digite o PIB de São Paulo:\n");
    scanf("%f", &pib2);
    printf("Digite a densidade demográfica de São Paulo:\n");
    scanf("%f", &densidade2);
    printf("Digite o número de pontos turísticos de São Paulo:\n");
    scanf("%d", &pontosTuristicos2);

    printf("\n Comparando atributos:\n");

    //Menu de Comparação
    printf("Escolha o atríbuto para comparar:\n");
    printf("1-População\n");
    printf("2-Área\n");
    printf("3-PIB\n");
    printf("4-Densidade Demográfica\n");
    printf("5-Pontos Turísticos\n");
    printf("6-Comparar todos os atríbutos e declarar vencedora.\n");
    printf("Digite sua escolha\n");
    scanf("%d", &escolha);


    //Comparação com Switch
    switch (escolha) {
        case 1:
        if (populacao1 > populacao2)
            printf("Rio de Janeiro tem a maior população.\n");
         else if (populacao2 > populacao1)
            printf("São Paulo tem a maior população.\n");
        else 
            printf("As duas Cidades tem a mesma população.\n");
         break;

    case 2:
        if (area1 > area2)
            printf("Rio de Janeiro tem a maior área.\n");
         else if (area2 > area1)
            printf("São paulo tem a maior área.\n");
        else 
            printf("As duas Cidades tem a mesma área.\n");
         break;

    case 3:
        if (pib1 > pib2)
            printf("Rio de Janeiro tem o maior Pib.\n");
         else if (pib2 > pib1)
            printf("São paulo tem o maior Pib.\n");
        else 
            printf("As duas Cidades tem o mesmo Pib.\n");
         break;

    case 4:
        if (densidade1 > densidade2)
            printf("Rio de Janeiro tem a maior densidade.\n");
         else if (densidade2 > densidade1)
            printf("São paulo tem a maior densidade.\n");
        else 
            printf("As duas Cidades tem a mesma densidade.\n");
         break;

    case 5:
        if (pontosTuristicos1 > pontosTuristicos2)
            printf("Rio de Janeiro tem o maior numero de pontos turisticos.\n");
         else if (pontosTuristicos2 > pontosTuristicos1)
            printf("São paulo tem o maior número de pontos turísticos.\n");
        else 
            printf("As duas Cidades tem a mesma quantidade de pontos turísticos.\n");
         break;
         
    case 6: 
    // Comparação completa com contagem de pontos
   
    if (populacao1 > populacao2){
        pontosRioDeJaneiro++;
        printf("Rio de Janeiro venceu em população.\n");
    }else if (populacao2 > populacao1){
        pontosSaoPaulo++;
        printf("São Paulo venceu em população.\n");
    }
    if (area1 > area2){
        pontosRioDeJaneiro++;
        printf("Rio de Janeiro venceu em área.\n");
    }else if (area2 > area1){
        pontosSaoPaulo++;
        printf("São Paulo venceu em área.\n");
    }
    if (pib1 > pib2){
        pontosRioDeJaneiro++;
        printf("Rio de Janeiro venceu em PIB.\n");
    }else if (pib2 > pib1){
        pontosSaoPaulo++;
        printf("São Paulo venceu em PIB.\n");
    }    
    if (densidade1 > densidade2){
        pontosRioDeJaneiro++;
        printf("Rio de Janeiro venceu em densidade.\n");
    }else if (densidade2 > densidade1){
        pontosSaoPaulo++;
        printf ("São Paulo venceu em densiade.\n");
    }    
    if (pontosTuristicos1 > pontosTuristicos2){
        pontosRioDeJaneiro++;
        printf("Rio de Janeiro venceu em pontos turísticos.\n");
     } else if (pontosTuristicos2 > pontosTuristicos1){
        pontosSaoPaulo++;
        printf("São Paulo venceu em pontos turísticos.\n");
     }

     // Resultado final
     printf(" Rio de Janeiro venceu em %d atributos.\n", pontosRioDeJaneiro);
     printf(" São Paulo venceu em %d atributos.\n", pontosSaoPaulo);


    if(pontosRioDeJaneiro > pontosSaoPaulo){
        printf("Rio de Janeiro é a vencedora!\n");
    }else if (pontosSaoPaulo > pontosRioDeJaneiro){
        printf("São Paulo é a vencedora\n");
    } else
        printf(" Cidades empataram!\n");
     break;       
    
     default:
        printf("Opção invalida.\n");
    }    

    return 0;
 
} 
