#include <stdio.h>

int main(distribuicao_eletronica) {
    int eletrons, i;
    int orbitais[] = {2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6,2,14,10,6}; 
    const char *nomes_orbitais[] = {
        "1s", "2s", "2p", "3s", "3p", "4s",
        "3d", "4p", "5s", "4d", "5p", "6s",
        "4f", "5d", "6p","7d","5f","6d","7p"
    };

    printf("Digite o numero atomico do elemento: \n");
    scanf("%d", &eletrons);

    if (eletrons < 1 || eletrons > 119) {
        printf("Numero atômico fora do intervalo suportado (1 a 119).\n");
        return 1;
    }

    printf("Distribuição eletronica:\n");

    for (i = 0; i < 20; i++) {
        if (eletrons == 0) break;

        int ocupados = (eletrons >= orbitais[i]) ? orbitais[i] : eletrons;
        eletrons -= ocupados;

        printf("%s%d ", nomes_orbitais[i], ocupados);
    }
    printf("\nFeito!\n");

    printf("\n");
    return 0;
}