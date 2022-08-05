#include <stdio.h>
#define MON 10
#define PRON 5000

int main() {
    int unit;
    char month[MON];
    int rt=0;
    do {
        puts("Ingrese mes a revisar: ");
        scanf("%s", month);
        do {
            puts("Ingresar cantidad de unidades que piensa producir: ");
            scanf("%d", &unit);
            if(unit<0){
                puts("\nIngrese un valor mayor o igual a cero\n");
            }
        } while(unit<0);
        if(unit<PRON){
            puts("Se producira menos de lo pronosticado");
        } else if (unit>PRON) {
            puts("Se producira mas de lo pronosticado");
        } else {
            puts("Se producira lo mismo que lo pronosticado");
        }
        do {
            puts("Desea continuar cargando meses? (1=si, 0=no)");
            scanf("%d", &rt);
            if(rt>1 || rt<0){
                puts("Ingrese 1 o 0");
            }
        } while(rt>1 || rt<0);
    } while(rt==1);
    return 0;
}
