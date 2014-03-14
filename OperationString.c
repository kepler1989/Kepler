#include "OperationString.h"

int ___indexof(const char * cadena , char caracter)
{
	for(int i = 0 ; i < strlen(cadena) ; i++)
	{
		if(cadena[i] == caracter)
		   return i++;
	}
	return 0;
}

void ___substring(char line[],char response[], int length)
{
	   	   for(int i = 0; i < length ; i++  )	        				
			  line[i] = (char)response[i];
			
	      for(int i = 0 ; i < strlen(response) ; i++)
	      {
	      	   response[i] =  response[length+1];
	      	   length++;
	      }
}


