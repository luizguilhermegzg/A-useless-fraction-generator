/* **************************************************************************************** */
/*  Program name: Fractions generator.                                                      */
/*  Created by: Luiz Guilherme C. Silva.                                                    */
/*  Date: 17/07/2021.                                                                       */
/*  Objective: Random generate exercises to practice fractions.                             */
/*  *************************************************************************************** */


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(0));
    system("clear");
    
    int fractions[4];
    int type;
    int answer;
    double calc[2];
    int confirm;
    for (int i = 0; i <= 3; i++){
        fractions[i] = rand() % 100;
        if (i == 1){
            fractions[i] = rand() % 100;
            while (fractions[i] < fractions[i - 1]){
                fractions[i - 1] = rand() % 100;
            }
        }
        if (i == 3){
            fractions[i] = rand() % 100;
            while (fractions[i] < fractions[i - 1]){
                fractions[i - 1] = rand() % 100;
            }
        }
    }
    
    printf("[1] Equals numerators\n[2] Equals denominators\n[3] Nothing equal\n\nWhich type you wanna -->  ");
    while(scanf("%d", &type) != 1){
        system("clear");
        printf("[1] Equals numerators\n[2] Equals denominators\n[3] Nothing equal\n\nWhich type you wanna -->  ");
        while(getchar() != '\n');
    }

    switch(type){
        case 1:
            
            while (fractions[0] > fractions[3] ){
                fractions[0] = rand() % 100;
                while (fractions[0] > fractions[1]){
                    fractions[0] = rand() % 100;

                }
            }

            fractions[2] = fractions[0];
            calc[0] = (float)fractions[0] / (float)fractions[1];
            calc[1] = (float)fractions[2] / (float)fractions[3];
            
            system("clear");
            printf("\nX = %d\n    --\n    %d\t\tY = %d\n\t\t    --\n\t\t    %d\n\n[1] X\n[2] Y\n[0] Equal\n\nWhich fraction is bigger? --> ", fractions[0], fractions[1], fractions[2], fractions[3]);
            while(scanf("%d", &answer) != 1){
                system("clear");
                printf("\nX = %d\n    --\n    %d\t\tY = %d\n\t\t    --\n\t\t    %d\n\n[1] X\n[2] Y\n[0] Equal\n\nWhich fraction is bigger? --> ", fractions[0], fractions[1], fractions[2], fractions[3]);
                while(getchar() != '\n');
    }
            if (calc[0] > calc[1]){
                confirm = 1;
            }
            else if (calc[0] < calc[1]){
                confirm = 2;
            }
            else if (calc[0] == calc[1]){
                confirm = 0;
            }
            if (answer == confirm){
                printf("\nParabéns você acertou!!!!\n");
            }
            else {
                printf("\nAh, que pena :( ... Você errou!\n");
            }
            break;
        case 2:
            while (fractions[0] > fractions[1]){
                fractions[0] = rand() % 100;
            }
            while (fractions[2] > fractions[1]){
                fractions[2] = rand() % 100;
            }
            fractions[3] = fractions[1];
            calc[0] = (float)fractions[0] / (float)fractions[1];
            calc[1] = (float)fractions[2] / (float)fractions[3];
            
            system("clear");
            printf("\nX = %d\n    --\n    %d\t\tY = %d\n\t\t    --\n\t\t    %d\n\n[1] X\n[2] Y\n[0] Equal\n\nWhich fraction is bigger? --> ", fractions[0], fractions[1], fractions[2], fractions[3]);
            
            while(scanf("%d", &answer) != 1){
                system("clear");
                printf("\nX = %d\n    --\n    %d\t\tY = %d\n\t\t    --\n\t\t    %d\n\n[1] X\n[2] Y\n[0] Equal\n\nWhich fraction is bigger? --> ", fractions[0], fractions[1], fractions[2], fractions[3]);
                while(getchar() != '\n');
    }
            if (calc[0] > calc[1]){
                confirm = 1;
            }
            else if (calc[0] < calc[1]){
                confirm = 2;
            }
            else if (calc[0] == calc[1]){
                confirm = 0;
            }
            if (answer == confirm){
                printf("\nParabéns você acertou!!!!\n");
            }
            else {
                printf("\nAh, que pena :( ... Você errou!\n");
            }
            
            
            break;
        case 3:
            fractions[0], fractions[1], fractions[2], fractions[3] = rand() % 100, rand() % 100, rand() % 100, rand() % 100;
            while (fractions[0] > fractions[1]){
                fractions[0] = rand() % 100;
            }
            while (fractions[2] > fractions[3]){
                fractions[2] = rand() % 100;
            }
            calc[0] = (float)fractions[0] / (float)fractions[1];
            calc[1] = (float)fractions[2] / (float)fractions[3];
            system("clear");
            printf("\nX = %d\n    --\n    %d\t\tY = %d\n\t\t    --\n\t\t    %d\n\n[1] X\n[2] Y\n[0] Equal\n\nWhich fraction is bigger? --> ", fractions[0], fractions[1], fractions[2], fractions[3]);

            while(scanf("%d", &answer) != 1){
                system("clear");
                printf("\nX = %d\n    --\n    %d\t\tY = %d\n\t\t    --\n\t\t    %d\n\n[1] X\n[2] Y\n[0] Equal\n\nWhich fraction is bigger? --> ", fractions[0], fractions[1], fractions[2], fractions[3]);
                while(getchar() != '\n');
    }
            if (calc[0] > calc[1]){
                confirm = 1;
            }
            else if (calc[0] < calc[1]){
                confirm = 2;
            }
            else if (calc[0] == calc[1]){
                confirm = 0;
            }
            if (answer == confirm){
                printf("\nParabéns você acertou!!!!\n");
            }
            else {
                printf("\nAh, que pena :( ... Você errou!\n");
            }
            break;
    }
}