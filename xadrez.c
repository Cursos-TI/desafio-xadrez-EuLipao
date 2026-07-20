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
    printf("4. Cavalo\n");
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
        printf("3. Esquerda Cima\n");
        printf("4. Esquerda Baixo\n");
        scanf("%d",&opcao3);
        printf("Digite, Quantas casa deseja andar?\n");
        scanf("%d", &quantidade);
    switch (opcao3)
    {
   
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
    }  
        break;

        //rainha
        case 3:
        printf("rainha\n");
        printf("para qual lado quer ir?\n");
        printf("1. Direita\n");
        printf("2. Direita Cima\n");
        printf("3. Direita Baixo\n");
        printf("4.Esquerda\n");
        printf("5.Esquerda Cima\n");
        printf("6. Esquerda Baixo\n");
        printf("7.Cima\n");       
        printf("8.Baixo\n");        
        scanf("%d",&opcao3);
        printf("Digite, Quantas casa deseja andar?\n");
        scanf("%d", &quantidade);
    switch (opcao3)
    {
        
        // vai para direita
        case 1:

        for(int i = 1; i <= quantidade; i++){
            printf("%d Direita\n", i);
        }           
            break;
       
        case 2:
        //Direta cima
        for(int i = 1; i <= quantidade; i++){
            printf("%d Direita Cima\n", i);
        }           
            break;
        // Direita baixa
        case 3:

        for(int i = 1; i <= quantidade; i++){
            printf("%d Direita Baixa\n", i);
        }          
            break;
       // vai para esquerda
        case 4:

        for(int i = 1; i <= quantidade; i++){
            printf("%d Esquerda\n", i);
        }          
            break;
        //esquerda cima
        case 5:
        for(i = 1; i <= quantidade; i++){
            printf("%d Esquerda Cima\n", i);
        }    
            break;

        // Esquerda baixa
        case 6:
        for(i = 1; i <= quantidade; i++){
            printf("%d Esquerda Baixa\n", i);
        }    
            break;
        // vai para cima
        case 7:

            for(int i = 1; i <= quantidade; i++){
            printf("%d Cima\n", i);
        }           
            break;
        // vai para baixa
        case 8:
        for(i = 1; i <= quantidade; i++){
            printf("%d Baixa\n", i);
        }    
            break;

        default:
        printf("Opção invalida!\n");
            break;
        
    }
       break;
       //cavalo
          case 4:
            printf("para qual lado quer ir?\n");
            printf("Cavalo\n");
            printf("1. Cima Direita\n");
            printf("2. Cima Esquerda\n");
            printf("3. Direita Cima\n");
            printf("4. Direita Baixo\n");
            printf("5. Esquerda Cima\n");
            printf("6. Esquerda Baixo\n");
            printf("7. Baixo Direita \n");      
            printf("8. Baixo Esquerda\n");        
            scanf("%d",&opcao3);  
        //lado que a cavalo vai
        switch (opcao3)
        {
        //Cima cima Direita
        case 1:
            for(i=1;i<2;i++){
                for(int j = 1;j <3;j++){
                    printf("%d Cima\n", j);
                }
                printf("%d direita\n",i);
            }
            break;
        // cima cima esquerda
        case 2:
            for(i=1;i<2;i++){
                for(int j = 1;j <3; j++){
                    printf("%d Cima\n", j);
                }
                printf("%d esquerda\n",i);
            }
            break;
        // direita direita cima
        case 3:
             for(i=1;i<2;i++){
                for(int j = 1;j <3;j++){
                    printf("%d Direita\n", j);
                }
                printf("%d Cima\n",i);
            }
            break;
        //direita direta baixa
        case 4:
             for(i=1;i<2;i++){
                for(int j = 1;j <3;j++){
                    printf("%d Direita\n", j);
                }
                printf("%d Baixo\n",i);
            }
            break;
        //Esquerda esquerda cima
        case 5:
             for(i=1;i<2;i++){
                for(int j = 1;j <3;j++){
                    printf("%d Esquerda\n", j);
                }
                printf("%d Cima\n",i);
            }
            break;
        //esquerda esquerda baixo
        case 6:
            for(i=1;i<2;i++){
                for(int j = 1;j <3;j++){
                    printf("%d Esquerda\n", j);
                }
                printf("%d Baixo\n",i);
            }            
            break;
        // baixo baixo direita
        case 7:
            for(i=1;i<2;i++){
                for(int j = 1;j <3;j++){
                    printf("%d Baixo\n", j);
                }
                printf("%d Direita\n",i);
            }
            break;
        //baixo baixo esquerda
        case 8:
            for(i=1;i<2;i++){
                for(int j = 1;j <3;j++){
                    printf("%d Baixo\n", j);
                }
                printf("%d Esquerda\n",i);
            }
            break;
        default:
        printf("Opção invalida!\n");
            break;
        }
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
