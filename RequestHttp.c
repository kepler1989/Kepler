
#include "RequestHttp.h"
#include <stdio.h>
#include <string.h>



void __get(const char * url ,const char *cokies ,char request[256],const char *host ){
	
	if(strlen(cokies) == 0)
   sprintf(request,"GET %s HTTP/1.1 \nHost: %s\nUser-Agent: Mozilla/4.0   \nAccept: text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,*/*;q=0.8 \nConnection: keep-alive \n\n" 
   ,url 
   ,host);
}


void __post(char *url , char *cokies , char *request , char *host){
	
}
