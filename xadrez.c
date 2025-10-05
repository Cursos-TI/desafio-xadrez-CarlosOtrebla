#include <stdio.h>
#include <locale.h>
#include <windows.h>

void moverBispo(int casas);
void moverTorre(int casas);
void moverRainha(int casas);
void moverCavalo();

int main()
{
    // Configurando o console para aceitar acentos.
    SetConsoleOutputCP(65001);
    // setlocale(LC_ALL, "pt_BR.UTF-8"); //  Descomentar esta linha se estiver utilizando Linux ou MacOS.

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
        case 1:
        {
            printf("\n");
            printf("╔═══ Você escolheu o Bispo, quantas casas deseja move-lo?\n");
            printf("║\n");
            printf("╚════► ");
            scanf(" %d", &casas);
            moverBispo(casas);
            system("pause");
            break;
        }
        case 2:
        {
            printf("╔═══ Você escolheu a Torre, quantas casas deseja move-la?\n");
            printf("║\n");
            printf("╚════► ");
            scanf(" %d", &casas);
            moverTorre(casas);
            system("pause");
            break;
        }
        case 3:
        {
            printf("╔═══ Você escolheu a Rainha, quantas casas deseja move-la?\n");
            printf("║\n");
            printf("╚════► ");
            scanf(" %d", &casas);
            moverRainha(casas);
            system("pause");
            break;
        }
        case 4:
            printf("\n════► Você escolheu o Cavalo, vou move-lo para cima e para a direita!\n");
            printf("\n");
            moverCavalo();
            system("pause");
            break;
        case 0:
            printf("\n Volte sempre...!\n\n");
            break;
        default:
            printf("\n Vocé escolheu uma opção inválida!\n");
            break;
        }
        /* code */
    } while (opcao != 0);

    return 0;
}

void moverBispo(int casas)
{
    if (casas <= 0)
        return;
    Sleep(500);
    printf("Direita ");
    Sleep(500);
    printf("Cima \n");
    Sleep(500);
    moverBispo(casas - 1);
}

void moverTorre(int casas)
{
    if (casas <= 0)
        return;
    Sleep(500);
    printf("Direita\n");
    Sleep(500);
    moverTorre(casas - 1);
}

void moverRainha(int casas)
{
    if (casas <= 0)
        return;
    Sleep(500);
    printf("Esquerda\n");
    Sleep(500);
    moverRainha(casas - 1);
}

void moverCavalo()
{
    Sleep(500);
    int passoVertical = 0, passoHorizontal = 0;
    int totalPassos = 0;

    for (int i = 0, j = 0; (i < 2 || j < 1) && totalPassos < 3; totalPassos++)
    {

        if (i < 2 && passoVertical < 2)
        {
            printf("Cima\n");
            Sleep(500);
            i++;
            passoVertical++;
            if (i < 2)
            {
                continue;
            }
        }

        if (i >= 2 && j < 1)
        {
            printf("Direita\n");
            Sleep(500);

            j++;
            passoHorizontal++;
            if (j >= 1)
            {
                break;
            }
        }
    }
}