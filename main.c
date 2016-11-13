/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: conah
 *
 * Created on 10 November 2016, 12:01
 */

#include <stdio.h>
#include <stdlib.h>

#include "main.h"

/***************************************************************/
typedef struct filmList {
  
  char title [50];
  int releaseYear[4];                                                            //creating struct with fields
  char rating[4];
  char genre[20];
  int runTime[3];
  double rating[3];
  struct filmList *next; //self referential structure
  
} Node;
/***************************************************************/

int main(int argc, char** argv) {
    
    
    
/***************************************************************/
    FILE *pToFile = fopen("films.txt", "r");

    int line = 0;

    char input[800];

    while (fgets(input, 800, pToFile)) {
        line++;
        printf("Line: %d -> %s", line, input);                                   //opens the file

        if (pToFile == NULL) {
            printf("Error: unable to open 'films.txt' in mode 'r' \n");

            exit(EXIT_FAILURE);
        }
    }
    printf("\n\n End program\n");

    fclose(pToFile);
/***************************************************************/
    return (EXIT_SUCCESS);
}

/** 
 * FILE *pToFile = fopen("films.txt", "r");

    int line = 0;

    char input[800];

    while (fgets(input, 800, pToFile)) {
        line++;
        printf("Line: %d -> %s", line, input);

        if (pToFile == NULL) {
            printf("Error: unable to open 'films.txt' in mode 'r' \n");

            exit(EXIT_FAILURE);
        }
    }
    printf("\n\n End program\n");

    fclose(pToFile);
 **/
