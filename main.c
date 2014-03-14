#include "Kepler.h"
#include <stdio.h>

 int main() 
 {
    kepler *_kepler = (kepler*)malloc(sizeof(kepler));
 	server *_server =(server*)malloc(sizeof(server));
 	    char host[64] ="www.youtube.com";
 	         strcpy(_server->host , host);
		 InitKepler(_kepler);
 	     __connect_server(_kepler,_server);
 	         __extract(_kepler,_server,"","/");
			 __transform(); 	     
  return 0;
}

