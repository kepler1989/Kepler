#include "Kepler.h"

#include<stdio.h>
#include "RequestHttp.h"
#include "ResponseHttp.h"
#include "File.h"
#include "Regex.h"


void InitKepler(kepler *_kepler)
{
      WSAStartup(MAKEWORD(2,2),&_kepler->contract);
         _kepler->socket_id = 0;
         _kepler->socket_id =socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
     if(_kepler->socket_id == INVALID_SOCKET)
         printf("Error al crear el socket ...ok\n");
         
    _kepler->_socket_addr.sin_family=AF_INET;
    _kepler->_socket_addr.sin_addr.s_addr=inet_addr("192.168.1.84");
	_kepler->_socket_addr.sin_port=htons(10000);
	int bind_d = bind(_kepler->socket_id , (struct sockaddr *)&_kepler->_socket_addr, sizeof(_kepler->_socket_addr));
	if(bind_d == -1)
	  printf("Error al ligar con la interfaz de red \n");
}

void __connect_server(kepler * _kepler, server *_server)
{
	struct hostent *remote_host;
	 struct in_addr addr_remote;         
			  remote_host = gethostbyname(_server->host);
	          addr_remote.s_addr = *(u_long *) remote_host->h_addr_list[0];
	          printf("conectando con : %s \n" , inet_ntoa(addr_remote));
	          
	          _server->_server_host.sin_family = AF_INET;
	          _server->_server_host.sin_port= htons(80);
	          _server->_server_host.sin_addr.s_addr =  inet_addr(inet_ntoa(addr_remote)); //ip alcanzable de google
	          
		  SOCKET server_id = connect(_kepler->socket_id , (struct sockaddr *)&_server->_server_host,sizeof(struct sockaddr));	
	_server->server_id = server_id;
	 if(server_id == -1)
       printf("Error al connectar con el servidor ..... \n");
       else
       printf("servidor connectado \n");
}

void __extract(struct kepler *_kepler,struct  server *_server ,const char * cookies , const char *url)
{
	char request[256];
   	__get(url,cookies,request,_server->host);
   	    
                   int n_send = send(_kepler->socket_id ,(const char *)&request, strlen(request) , 0);
				   char buffer[5000];
				 int index = 0;
				 _HEADER_RESPONSE response;
				FILE *stream;
				//directorio absoluto en la raiz de  del disco C:
				  stream = Open(PATH_FILE);
				   do
				   {
				       int n_rec = recv(_kepler->socket_id , buffer , sizeof(buffer),0);
				        if(index == 0)
				        response = ___reponse(buffer);
				        index++;
						WriteLine(buffer,stream);
					if(IsMatch("</html>",buffer))
					break;
					    memset(buffer,0,strlen(buffer)); 
			       }while(true);
			       CloseFile(stream);
			       //archivo cerrado
}






void __transform()
{
  FILE *stream;
           stream = Open(PATH_FILE);
           
           
}



