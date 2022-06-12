#include <stdio.h>
#include <math.h>

int main(){

    float premio = 780000.00;
    printf("O premio total: R$ %.2f", premio);
    printf("\no primeiro ganhador ficou com 46%%, ou seja: %.2f", 0.46*premio);
    printf("\no segundo ganhador ficou com 32%%, ou seja: %.2f", 0.32*premio);
    printf("\no terceiro ganhador ficou com %d%%, ou seja: %.2f", 100-46-32, (0.22)*premio);
    return 0;
}