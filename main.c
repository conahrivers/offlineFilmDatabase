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
    int releaseYear[4]; //creating struct with fields
    char agerating[4];
    char genre[20];
    int runTime[3];
    double rating [3];
    struct filmList *next; //self referential structure

} films;

/***************************************************************/

int main(int argc, char** argv) {

/***************************************************************/

    char title;
    int releaseYear;
    char ageRating;
    char genre;
    int runTime;
    double rating;

/***************************************************************/
    FILE *pToFile = fopen("films.txt", "r");

    int count = 0;

    char line [800];

    while (fgets(line, sizeof (line), pToFile) != NULL) {
        count++;
        printf("%s", line); //opens the file
        

       sscanf(line, "%s", \"%[^\"]\"," title, releaseYear, ageRating, genre, runTime, rating);
       printf("Title: %s \n" 
              "Release Year: %d \n"
              "Age Rating: %s \n"
              "Genre: %s \n"
              "Run Time: %d \n"
              "Rating: %l.f \n ", title, releaseYear, ageRating, genre, runTime,
               rating
               );

        if (pToFile == NULL) {
            printf("Error: unable to open 'films.txt' in mode 'r' \n");

            exit(EXIT_FAILURE);
        }
    }
 
    printf("\n Total fils: %d", count);
    printf("\n\n End program\n");

    fclose(pToFile);
    /***************************************************************/
    return (EXIT_SUCCESS);
}
