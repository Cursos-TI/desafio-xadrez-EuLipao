#include <stdio.h>
// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    int peca, movimento,quantidade,i = 1;
    int opcao/*peça*/,opcao2/*jogar novamente*/,opcao3/*lado*/;
do{
    printf("*********************\n");
    printf("*Movimentação Xadrez*\n");
    printf("*********************\n");

    printf("Escolha qual peça quer mexer?\n");
    printf("1. Torre\n");
    printf("2. Bispo\n");
    printf("3. Rainha\n");
    scanf("%d",&opcao);
    //opcao da peça
    switch(opcao)
    {   
        //torre
        case 1:
        printf("Torre\n");
        printf("para qual lado quer ir?\n");
        printf("1. Direita\n");
        printf("2.Esquerda\n");
        printf("3.Cima\n");
        printf("4.Baixo\n");
        scanf("%d",&opcao3);
        printf("Digite, Quantas casa deseja andar?\n");
        scanf("%d", &quantidade);
        //lado que a torre vai
        switch (opcao3)
        {
        // vai para direita
        case 1:

        for(int i = 1; i <= quantidade; i++){
            printf("%d Direita\n", i);
        }           
            break;
        // vai para esquerda
        case 2:

        for(int i = 1; i <= quantidade; i++){
            printf("%d Esquerda\n", i);
        }          
            break;
        // vai para cima
        case 3:

            for(int i = 1; i <= quantidade; i++){
            printf("%d Cima\n", i);
        }           
            break;
        // vai para baixa
        case 4:
        for(i = 1; i <= quantidade; i++){
            printf("%d Baixa\n", i);
        }    
            break;

        default:
        printf("Opção invalida!\n");
            break;

        }
        break;

        //bispo
        case 2:
        printf("bispo\n");
        printf("para qual lado quer ir?\n");
        printf("1. Direita Cima\n");
        printf("2. Direita Baixo\n");
        printf("3.Esquerda Cima\n");
        printf("4. Esquerda Baixo\n");
        scanf("%d",&opcao3);
        
        case 1:
        //Direta cima
        for(int i = 1; i <= quantidade; i++){
            printf("%d Direita Cima\n", i);
        }           
            break;
        // Direita baixa
        case 2:

        for(int i = 1; i <= quantidade; i++){
            printf("%d Direita Baixa\n", i);
        }          
            break;
        // Esquerda cima
        case 3:

            for(int i = 1; i <= quantidade; i++){
            printf("%d Esquerda Cima\n", i);
        }           
            break;
        // Esquerda baixa
        case 4:
        for(i = 1; i <= quantidade; i++){
            printf("%d Esquerda Baixa\n", i);
        }    
            break;

        default:
        printf("Opção invalida!\n");
            break;
        //lado que a Bispo vai

        break;

        //rainha
        case 3:
        printf("rainha\n");
        printf("para qual lado quer ir?\n");
        printf("1. Direita\n");
        printf("2. Direita Cima\n");
        printf("2. Direita Baixo\n");
        printf("2.Esquerda\n");
        printf("3.Esquerda Cima\n");
        printf("4. Esquerda Baixo\n");
        printf("3.Cima\n");       
        printf("4.Baixo\n");        
        
        scanf("%d",&opcao3);
        
        //lado que a Rainha vai


        break;

        default:
        printf("Opção invalida!\n");
        break;

    
    }

    // jogar novamente ou sair
    printf("Esolha uma opção:\n");
    printf("1. Jogar novamente\n");
    printf("2. Sair do jogo\n");
    scanf("%d",&opcao2);
}while(opcao2 == 1);
    printf("Jogo Finalizado\n");

    
    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.





    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
