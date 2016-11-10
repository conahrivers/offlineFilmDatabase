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

/*
 * 
 */
int main(int argc, char** argv) {
    
    FILE *filmFile;
    char buf[8000];

    filmFile = fopen("films.txt", "r");
    if (!filmFile)
        return 1;

    while (fgets(buf, 8000, filmFile) != NULL)
        printf("%s", buf);

    fclose(filmFile);
    return 0;

    return (EXIT_SUCCESS);
}

