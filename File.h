#ifndef __FILE_H
#define __FILE_H

#include <stdio.h>

FILE * Open(const char *);
void ReadLine(char *,FILE *);
void WriteLine(const char *,FILE *);
void CleanFile(FILE *);
void CloseFile(FILE *);

#endif
