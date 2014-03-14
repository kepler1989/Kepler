#include "File.h"

FILE * Open(const char * path)
{
	FILE * stream = fopen(path,"r+");
	if(stream == NULL)
	{
		printf("Error : Open file failed \n");
	}
	else
	{
		return stream;
	}
}

void ReadLine(char * line,FILE *stream)
{
	if(stream != NULL)
	{
	  char * lineFile = fgets(line,1024,stream);
	  if(lineFile == NULL)
	   {
	   	printf("Error : Read Line failed \n");
	   }
	}else
	{
		printf("Error : File not open \n");
	}
}

void WriteLine(const char *line,FILE *stream){
   if(stream != NULL)
	{
	  int put = fputs(line,stream);
	  if(put < 0 || put == EOF)
	  {
	  	printf("Error : Write line failed \n");
	  }
	}else
	{
		printf("Error : File not open \n");
	}
}

void CleanFile(FILE *stream)
{
	fseek(stream,0,SEEK_SET);
	
}

void CloseFile(FILE *stream)
{
	if(stream != NULL)
	{
	 int close = fclose(stream);
	 if(close != 0)
	 {
	 	printf("Error : File not close \n");
	 }
	}else
	{
		printf("Error : File not open \n");
	}
}

