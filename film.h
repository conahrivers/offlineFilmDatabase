/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   film.h
 * Author: conah
 *
 * Created on 10 November 2016, 12:06
 */

#ifndef FILM_H
#define FILM_H

#ifdef __cplusplus
extern "C" {
#endif

typedef struct filmlist {
  
  char* title [50];
  int releaseYear;
  char* certifiate[4];
  char* genre[20];
  int runTime;
  float rating;
  
} films;

films *film_new(char title, int releaseYear, char certificte, char genre, int runTime, double rating);

void file_free(films *film);
void void film_fprint(FILE *PToFile, const films *film);

char* title_getTitle(const films *film) {
    
    return film->title;
}

int releaseYear_getYear(const films *film) {
    
    return film->releaseYear;
}

char* certifice_getCert(const films *film) {
    
    return film->certifiate;
}

char* genre_getGenre(const films *film) {
    
    return film->genre;
}

int runTime_getRun(const films *film) {
    
    return film->runTime;
}

float rating_getRating(const films *film) {
    
    return film->rating;
}

#ifdef __cplusplus
}
#endif

#endif /* FILM_H */

