/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   moviedatabase.h
 * Author: conah
 *
 * Created on 10 November 2016, 12:06
 */

#ifndef MOVIEDATABASE_H
#define MOVIEDATABASE_H

#ifdef __cplusplus
extern "C" {
#endif

typedef struct filmlist {
  
  char title [50];
  int releaseYear[4];
  char rating[4];
  char genre[20];
  int runTime[3];
  double rating[3];
  
} films;

// linked list goes here


#ifdef __cplusplus
}
#endif

#endif /* MOVIEDATABASE_H */

