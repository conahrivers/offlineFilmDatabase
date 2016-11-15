/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   moviedatabase.h
 * Author: ebx15jtu
 *
 * Created on 15 November 2016, 11:56
 */

#ifndef MOVIEDATABASE_H
#define MOVIEDATABASE_H

#ifdef __cplusplus
extern "C" {
#endif

typedef struct filmList {
    char title [50];
    int releaseYear[4]; //creating struct with fields
    char agerating[4];
    char genre[20];
    int runTime[3];
    double rating [3];
    struct filmList *next; //points to dummy node

} films;


#ifdef __cplusplus
}
#endif

#endif /* MOVIEDATABASE_H */

