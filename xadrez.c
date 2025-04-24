
// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

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
    
    #include <stdio.h>
    //Lógica do Bispo de  Recursividade.
    void recursivoBispo(int casas_bispo_restantes) {
        if(casas_bispo_restantes > 0){
            printf("Cima\n");
            printf("Direita\n");
            recursivoBispo(casas_bispo_restantes - 1);      
    }
    //Lógica da Torre de Recursividade.
    }
    void recursivoTorre(int casas_torre_restantes) {
        if(casas_torre_restantes > 0){
            printf("Direita\n");
            recursivoTorre(casas_torre_restantes - 1);      
    }
    // Lógica da Rainha de Recursividade. 
    }
    void recursivoRainha_Horizontal(int casas) {
        if(casas > 0) {
            printf("Esquerda\n");
            recursivoRainha_Horizontal(casas - 1);
        }
    }
    
    int main () {
        
        //Movimento da Torre...
        printf("Jogo do Xadrez...\n");
        printf("---Possibilidades da Torre---\n");
        printf("5 casas para a direita.\n");
        int casas_torre = 5;
        recursivoTorre(casas_torre);
    
        //Movimento do Bispo...
        printf("---Possibilidades do Bispo ---\n");
        printf("---Versão Recursiva---\n");
        printf("5 na diagonal (cima/direita).\n");
        recursivoBispo(5);
    
        // código dos loops
        printf("---Versão com Loops Aninhados---\n");
        printf("5 na diagonal (cima/direita).\n");
        for(int i = 0; i < 5;i++){
            printf("Cima\n");
         for(int j = 0; j < 1; j++){
            printf("Direita\n");
         }    
        }
        //Movimento da Rainha
        printf("---Possibilidades da Rainha ---\n");
        printf("8 casas para a esquerda.\n");//Direção do movimento da Rainha.
        recursivoRainha_Horizontal(8);
        //Movimento do Cavalo
      
        printf("\n---Possibilidades do Cavalo ---\n");
        printf("2 casas para cima e 1 para direita (em L).\n");//1 Direção do movimento do Cavalo.
        for (int i = 0; i < 3; i++) {
            if(i < 2) {
            printf("Cima\n");
            continue;
            }
            printf("Direita\n");
        }    
    
    return 0;
    }
 
