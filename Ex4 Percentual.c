#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){
    float sp, rj, mg, es, outros, total;

    sp = 67836.43;
    rj = 36678.66;
    mg = 29229.88;
    es = 27165.48;
    outros = 19849.53;
    
    /*SP – R$67.836,43
    RJ – R$36.678,66
    MG – R$29.229,88
    ES – R$27.165,48
    Outros – R$19.849,53*/

    total = sp + rj + mg + es + outros;

    printf("Percentual de representacao de cada estado:\n");
    printf("SP: %.2f%%\n", (sp/total)*100);
    printf("RJ: %.2f%%\n", (rj/total)*100);
    printf("MG: %.2f%%\n", (mg/total)*100);
    printf("ES: %.2f%%\n", (es/total)*100);
    printf("Outros: %.2f%%\n", (outros/total)*100);

    return 0;
}