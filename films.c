/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   films.c
 * Author: conah
 *
 * Created on 08 November 2016, 13:17
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    
    FILE *openF;
    		char buf[1000];

    		openF =fopen("input.txt","r");
    		if (!openF)
        		return 1;

    		while (fgets(buf,1000, openF)!=NULL)
        		printf("%s",buf);

		fclose(openF);
    		return 0;

    return (EXIT_SUCCESS);
}

