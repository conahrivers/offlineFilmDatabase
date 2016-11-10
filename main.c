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
    filmFile = fopen("films.txt", "r");
    char c;
    
    c = fget(filmFile);
    
    while(c=fgetc(filmFile) ) != EOF) {
        printf("%c", c);
    }
    
    printf("\n End of list\n");
    
    fclose(filmFile);
    

    return (EXIT_SUCCESS);
}

