#ifndef _RESPONSEHTTP_H
#define _RESPONSEHTTP_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>

typedef struct  _HEADER_RESPONSE 
{
   char cokies[2048];
   char transfer_encondig[16];
}_HEADER_RESPONSE;

_HEADER_RESPONSE ___reponse(char response[]);
int ___length_response(char response[]);
#endif
