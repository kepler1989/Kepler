#include "Regex.h"

bool IsMatch(const char * pattern,char *cadena)
{
	int index_pattern = 0;
	int count = 0;
	int index_vector = 0;
	for(int i = 0 ; i < strlen(cadena) ;i++)
	{
		if(count == strlen(pattern))
		{
		return true;	
		}
		if(cadena[i] == pattern[index_pattern]){
			index_pattern++;
			count++;
		}else
		{
			index_pattern = 0;
			count = 0;
		}
	}
	return false;
}


