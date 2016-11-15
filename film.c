#include <stdio.h>
#include <stdlib.h>

void printfuction() {

    /***************************************************************/

    char title [50];
    int releaseYear;
    char ageRating [50];
    char genre [50];
    int runTime;
    float rating ;

    /***************************************************************/
    FILE *pToFile = fopen("films.txt", "r");

    int count = 0;

    char line [800];

    /***************************************************************/

    while (fgets(line, sizeof (line), pToFile) != NULL) {
        count++;
       // printf("%s", line); //opens the file

         sscanf(line, "\"%[^\"]\", %d, \"%[^\"]\", \"%[^\"]\", %d, %f", title, &releaseYear, ageRating, genre, &runTime, &rating);
         
         printf("Title: %s \n" 
                "Release Year: %d \n"
                "Age Rating: %s \n"
                "Genre: %s \n"
                "Run Time: %d \n"
                "Rating: %.1f \n "
                 "\n -----------------------\n", title, releaseYear, ageRating, genre, 
                runTime, rating
                 );

        if (pToFile == NULL) {
            printf("Error: unable to open 'films.txt' in mode 'r' \n");

            exit(EXIT_FAILURE);
        }
    }

    /***************************************************************/

    printf("\n Total fils: %d", count);
    printf("\n\n End program\n");

    fclose(pToFile);

    /***************************************************************/
    }

