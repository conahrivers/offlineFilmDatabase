/*
 *start of a linked list for film database
 */

#include <stdlib.h>


struct filmList {
    
    char title [50];
    int releaseYear[4]; //creating struct with fields
    char agerating[4];
    char genre[20];
    int runTime[3];
    double rating [3];
    struct filmList *next; //points to dummy node

};

int main() {
    
struct filmList *root; //first node

root = (struct filmList *) malloc(sizeof(struct filmList)); //root pointer to a node in struct

root ->next; //root points to the next node which is null
root ->title;
root ->releaseYear;
root ->agerating;
root ->genre;
root ->runTime;
root ->rating;

}
