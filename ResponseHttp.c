
#include "ResponseHttp.h"
#include "OperationString.h"

_HEADER_RESPONSE ___reponse(char response[]){
	    _HEADER_RESPONSE  header;
	       int index_cookies = 0;
	                 do{
	                            int index = ___indexof(response ,'\n');
	                           char line[1024];
	                            ___substring(line, response, index);
								// S = 83 e = 101 t = 116 - = 34 C=67 o =111
								if(line[0] == 83 && line[1] == 101 && line[2] == 116)
								{
								   //12
								   for(int i =12 ; i < strlen(line) ; i++)
								   {								   	
								   	  if(line[i] == 59)
								   	  {
								   	     header.cokies[index_cookies] = line[i];
								   	     index_cookies++;
								   	     break;
									  }
								   	header.cokies[index_cookies] = line[i];
								   	index_cookies++;
								   }								    
								}        	           
								                 
	                            if(line[0] == 13)
	                              break;
	                              memset(line , 0 , 256);								                	                         
	                 }while(true);	     
					 return header;            
}


