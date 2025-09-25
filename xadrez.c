#include <stdio.h>
#include <locale.h>
#include <windows.h>
int main()
{
    // Configurando o console para aceitar acentos.
    SetConsoleOutputCP(65001);
    // setlocale(LC_ALL, "pt_BR.UTF-8"); // TODO: Descomentar esta linha se estiver utilizando Linux ou MacOS.

    int opcao;
    int casas;

    do
    {
        system("cls"); // Limpa a tela do console (Windows).
        printf("╔═════════════════════════════════════════╗\n");
        printf("║      Desafio de Xadrez - MateCheck      ║\n");
        printf("╚═════════════════════════════════════════╝\n");

        printf("╔═══ Escolha uma peça para movimentar:\n");
        printf("║\n");
        printf("╠═► 1 - Bispo\n");
        printf("╠═► 2 - Torre\n");
        printf("╠═► 3 - Rainha\n");
        printf("╠═► 4 - Cavalo\n");
        printf("╠═► 0 - Sair\n");
        printf("║\n");
        printf("╚════► ");
        scanf(" %d", &opcao);

        switch (opcao)
        {
        case 1: // TODO: Modificar a movimentação do Bispo para ser feita por uma função recursiva.   
            {

            printf("\nVocê escolheu o Bispo!\n");
            printf("Quantas casas deseja mover o Bispo na diagonal? (Exemplo: 5)\n");
            scanf(" %d", &casas);
            for (int i = 0; i < casas; i++)
            {
                printf("Direita ");
                Sleep(500); // Pausa de 500 milissegundos para simular o movimento
                printf("Cima \n");
                Sleep(500); // Pausa de 500 milissegundos para simular o movimento
            }
            system("pause");
            break;
        }
        case 2:
        {

            int contador = 0;

            printf("\n Vocé escolheu a Torre!\n");
            printf("Quantas casas deseja mover a Torre para a direita? (Exemplo: 5)\n");
            scanf(" %d", &casas);
            while (contador < casas)
            {
                printf("Direita\n");
                Sleep(500);
                contador++;
            }
            system("pause");
            break;
        }
        case 3:
        {

            printf("\n Vocé escolheu a Rainha!\n");
            printf("Quantas casas deseja mover a Rainha para a esquerda? (Exemplo: 8)\n");
            scanf(" %d", &casas);
            for (int i = 0; i < casas; i++)
            {
                printf("Esquerda\n");
                Sleep(500);
            }
            system("pause");
            break;
        }
        case 4:
            printf("\n Vocé escolheu o Cavalo!\n");
            printf("Movimentação do Cavalo em L:\n");
            for (int i = 0; i < 2; i++) // Movimento horizontal
            {
                printf("Cima ");
                Sleep(500);
            }

            printf("Direita\n");
            Sleep(500);

            system("pause");
            break;
        case 0:
            printf("\n Vocé escolheu Sair!\n");
            break;
        default:
            printf("\n Vocé escolheu uma opção inválida!\n");
            break;
        }
        /* code */
    } while (opcao != 0);

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

    return 0;
}
