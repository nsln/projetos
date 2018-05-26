//
//  main.c
//  casejr
//
//  Created by MacBook on 14/05/2018.
//  Copyright © 2018 MacBook. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <ncurses.h>

int main(){
    int hora_aula, cred, faltas, restantes;
    char resp;
    do{
        printf("Escreva o número de aulas que vc teve: ");
        scanf("%d", &hora_aula);
        printf("Quantos créditos vale cada aula? ");
        scanf("%d", &cred);
        printf("Quantos créditos vc perdeu? ");
        scanf("%d", &faltas);
        restantes = 18 - faltas;
        printf("O número de faltas disponíveis para você é: %d", restantes);
        // Reprocessamento
        do {
            printf ("\n\nDeseja continuar (S/N)?");
            resp = getchar();
        }while (resp!='N' && resp!='S');
    } while (resp!='N');
}

