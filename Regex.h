#ifndef __REGEX_H
#define __REGEX_H

#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

typedef struct MATCH_SPLIT{
char buffer[1024];
}MATCH_SPLIT;

bool IsMatch(const char *,char *);
void Match(int *,const char *,const char *);
void Split(MATCH_SPLIT *, const char * , const char *);

#endif
