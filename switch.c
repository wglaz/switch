#include <stdio.h>




int main() {
    int ile_a = 0, ile_b = 0, ile_xy = 0, nieznany =0; // trzeba wyzerować wyznaczniki bo inaczej podaje błedne dane
    char zn;

    zn = getchar();


    switch (zn){
        case 'a' : ++ile_a; break;
        case 'b' : ++ile_b; break;  // jesli damy break to nie bedzie dalej prszeszukiwac case tylko wyjdzie z programu
        case 'x' :                      // jesli nie damy break to przejdzie do nastepnego case
        case 'y' : ++ile_xy; break;

        default: ++nieznany;
    }


        printf("a: %i, b: %i, xy: %i, inny: %i", ile_a, ile_b, ile_xy, nieznany);
    return 0;


}





