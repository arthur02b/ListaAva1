#include <stdio.h>
#include <stdlib.h>

int main() {
    int senha, senhaValida;

    scanf("%d", &senha);
    printf("senha cadastrada: %d\n", senha);

    while (1){
        scanf("%d", &senhaValida);

        if (senhaValida == senha) {
            printf("senha valida!\n");
            break;
        } else {
            printf("senha invalida!\n");
        }
    }

    return 0;
}