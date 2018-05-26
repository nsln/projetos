//
//  main.c
//  case2
//
//  Created by MacBook on 25/05/2018.
//  Copyright © 2018 MacBook. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <ncurses.h>

int main() {
    int p, t, i, j, prova[p], trab[t];
    float media, soma_notas, soma_trab, p1, p2;
    char resp;
    p = 0;
    t = 0;
    do{
        printf("Digite o peso das provas: ");
        scanf("%f", &p1);
        printf("Digite o peso dos trabalhos: ");
        scanf("%f", &p2);
        printf("Qual a quantidade de provas dadas? ");
        scanf("%d", &p);
        printf("E de trabalhos? ");
        scanf("%d", &t);
        printf("Dê as notas das provas: ");
        scanf("%d", &prova[p]);
        printf("Agora as notas dos trabalhos: ");
        scanf("%d", &trab[t]);
        for (i = 0; i < p; i++){
            soma_notas = 0;
            soma_notas += prova[i];
        }
        for (j = 0; j < t; j++){
            soma_trab = 0;
            soma_trab += trab[j];
        }
        media = ((soma_notas * p1) + (soma_trab * p2)) / (p + t);
        printf("Sua nota foi: %f", media);
        do {
            printf ("\n\nDeseja continuar (S/N)?");
            resp = getchar();
        }while (resp!='N' && resp!='S');
    } while (resp!='N');
}
