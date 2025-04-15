#include <stdio.h>

int main(){

    char estado1, estado2,cidade2[60], cidade1[60]; //Variáveis para armazenar o estado e a cidade
    char codigo1[3],codigo2[3]; //Variável para armazenar o codigo da carta
    int populacao1, populacao2, pontosturisticos2, pontosturisticos; //Variáveis para amazenar a população e pontos turísticos
    int opcao, opcao2; //variavel para amazernar o resultado do switch 
    float area1,area2,pib2, pib1; //Variáveis para amazenar a área da cidade e o PIB da cidade
    float densidade1, densidade2; //variáveis para amazenar a densidade populacional
    float pibper1, pibper2; //variáveis para amazenar o pib per capital
    float superpoder1, superpoder2; //variáveis para amazenar o super poder
    //variáveis para amazenar quem venceu
    int populacaovencedora, areavencedora, pibvencedora,pontoturisticosvencedora,densidadevencedora,pibpervencedora,superpodervencedora;
    //solicitar o estado
    printf("Digite o estado entre (A-H).\n");
    scanf(" %s", &estado1);//amazenar o estado
    int resultado1, resultado2;
    
    //solicitar o  núnemro da carta
    printf("Digite entre 01, a 04 o codigo da carta super trunfo.\n");
    scanf(" %s", codigo1); //armazenar o número
    
    //Solicitar o nome da cidade 
    printf("nome da cidade.\n"); 
    getchar(); //limpar o buff 
    scanf("%60[^\n]",cidade1); //amazernar o nome da cidade

    //Solicitar o número de habintantes
    printf("informe o numero de habitantes desta cidade.\n");
    scanf(" %d", &populacao1); //Amazenar o numero de habitantes

    //Solicitar A área da cidade
    printf("A área desta cidade em quilometros quadrados.\n");
    scanf(" %f", &area1); //Armazenar a área

    //Solicitar o PIB da cidade
    printf("O PIB desta cidade.\n");
    scanf(" %f", &pib1); //Armazenar o Pib

    //solicitar os pontos turisticos
    printf ("informe a quantidade de pontos turisticos.\n");
    scanf(" %d", &pontosturisticos); //armazernar os pontos turisticos

     printf("\nAgora informe os dados da segunda carta super trunfo.\n\n"); //mostrar para o usuário que trocamos de carta
    
    //solicitar o estado
    printf("Digite o estado entre (A-H).\n");
    scanf(" %c", &estado2);//amazenar o estado
        
    //solicitar o  núnemro da carta
    printf("Digite entre 01, a 04 o codigo da carta super trunfo.\n");
    scanf(" %s", codigo2); //armazenar o número
        
    //Solicitar o nome da cidade 
    printf("nome da cidade.\n");
    getchar(); //limpar o buff
    scanf("%60[^\n]",cidade2); //amazernar o nome da cidade
    
    //Solicitar o número de habintantes
    printf("informe o numero de habitantes desta cidade.\n");
    scanf("%d", &populacao2); //Amazenar o numero de habitantes
    
    //Solicitar A área da cidade
    printf("A área desta cidade em quilometros quadrados.\n");
    scanf("%f", &area2); //Armazenar a área

     //Solicitar o PIB da cidade
    printf("O PIB desta cidade em bilhões.\n");
    scanf("%f", &pib2); //Armazenar o Pib

    //solicitar os pontos turisticos
    printf ("informe a quantidade de pontos turisticos.\n");
    scanf("%d", &pontosturisticos2); //armazernar os pontos turisticos

    densidade1 = (float) populacao1/area1;
    densidade2 = (float) populacao2/area2;

    pibper1 = (float) pib1/populacao1;
    pibper2 = (float) pib2/populacao2;
    

    superpoder1 = (float) (populacao1 + area1 + pib1 + pontosturisticos + pibper1 + (1 / densidade1)); //calcular o super poder
    superpoder2 = (float) (populacao2 + area2 + pib2 + pontosturisticos2 + pibper2 + (1 / densidade2)); //calcular o super poder

    populacaovencedora = populacao1 > populacao2;
    areavencedora = area1 >area2;
    pibvencedora = pib1>pib2;
    pontoturisticosvencedora =pontosturisticos>pontosturisticos2;
    densidadevencedora = densidade1<densidade2;
    superpodervencedora =superpoder1>superpoder2;
    pibpervencedora = pibper1>pibper2;
    //Mostrar os dados da primeira carta ao usuário
    printf("\nCarta 1\nEstado:%c\nCodigo:%s\nNome da cidade:%s\nPopulaçao:%d\nÁrea:%.2fkm²\nPIB:%.2f bilhões de reais\nPontos turisticos:%d\ndensidade populacional:%.2f hab/km²\nPIB per Capita%.2f reais\n\n",estado1, codigo1, cidade1, populacao1, area1, pib1, pontosturisticos,densidade1,pibper1);
    
    //Mostrar os dados da segunda carta ao usuário
    printf("Carta 2\nEstado:%c\nCodigo:%s\nNome da cidade:%s\nPopulaçao:%d\nÁrea:%.2fkm²\nPIB:%.2f bilhões de reais\nPontos turisticos:%d\ndensidade populacional:%.2f hab/km²\n PIB per Capita:%.2f reais\n\n",estado2, codigo2, cidade2, populacao2, area2, pib2, pontosturisticos2,densidade2,pibper2);
    printf("Selecione um atributo para comparar\n");
    printf("Digite 1 para pais Digite 2 para população\nDigite 3 para área\nDigite 4 para pib\nDigite 5 número de pontos turísticos\nDigite 6 para Densidade demográfica.");
    scanf("%d",&opcao);
    printf("\npais%d\n, %d",estado1,estado2);
    switch (opcao)
    {
    case 1:
    printf("");
    break;
    case 2:
    printf("atributo escolhido população\n");
    printf("Carta1 %d, Carta2 %d",populacao1, populacao2);
    resultado1 = populacao1 >populacao2 ? 1:0; 
   
    break;
    
    case 3:
    printf("Atributo escolhido area\n");
    printf("Carta1 %.2f, Carta2 %.2f\n", area1 ,area2);
    resultado1 = area1 >area2 ? 1:0; 
        break;
    case 4:
    printf("Atributo escolhido pib\n");
    printf("Carta1 %.2f, Carta2 %.2f\n", pib1 ,pib2);
    resultado1 = pib1 >pib2 ? 1:0; 
    break;
    case 5:
    printf("Atributo escolhido pontos turisticos");
    printf("Carta1 %d, Carta2 %d",pontosturisticos, pontosturisticos2);
    resultado1 = pontosturisticos >pontosturisticos2 ? 1:0; 
    break;
    case 6:
    printf("Atributo escolhido Densidade demografica");
    printf("Carta1 %d, Carta2 %d",densidade1, densidade2);
    resultado1 = densidade1<densidade2 ? 1:0; 
    break;
    default:
    printf("Opção errada");
        break;
    }
    printf ("agora digite o segundo atributo parar comparar");
    printf("Digite 1 para pais Digite 2 para população\nDigite 3 para área\nDigite 4 para pib\nDigite 5 número de pontos turísticos\nDigite 6 para Densidade demográfica.");
    scanf("%d",&opcao);
    switch (opcao2)
    {
    case 1:
    printf("");
    break;
    case 2:
    printf("atributo escolhido população\n");
    printf("Carta1 %d, Carta2 %d",populacao1, populacao2);
    resultado2 = populacao1 >populacao2 ? 1:0; 
   
    break;
    
    case 3:
    printf("Atributo escolhido area\n");
    printf("Carta1 %.2f, Carta2 %.2f\n", area1 ,area2);
    resultado2 = area1 >area2 ? 1:0; 
        break;
    case 4:
    printf("Atributo escolhido pib\n");
    printf("Carta1 %.2f, Carta2 %.2f\n", pib1 ,pib2);
    resultado2 = pib1 >pib2 ? 1:0; 
    break;
    case 5:
    printf("Atributo escolhido pontos turisticos");
    printf("Carta1 %d, Carta2 %d",pontosturisticos, pontosturisticos2);
    resultado2 = pontosturisticos >pontosturisticos2 ? 1:0; 
    break;
    case 6:
    printf("Atributo escolhido Densidade demografica");
    printf("Carta1 %d, Carta2 %d",densidade1, densidade2);
    resultado2 = densidade1<densidade2 ? 1:0; 
    break;
    default:
    printf("opção esta errada");
    break;
    if (resultado1 && resultado2)
    {
        printf ("parabens voce venceu");
    } else if (resultado1!=resultado2)
    {
        ("voce empatou");

    }else{
        printf("voce perdeu");
    
    
    }

   
    return 0;
    }