#ifndef __KEPLER_H
#define __KEPLER_H

#include <winsock.h>
#include <winsock2.h>
#include <string.h>
#include <windows.h>
#include <conio.h>

#define PATH_FILE C:/Index.html

using namespace std;

typedef struct  kepler 
{
 SOCKET socket_id; 
 WSADATA contract;
 struct sockaddr_in _socket_addr;	
} kepler;

typedef struct server
{
	SOCKET server_id;
	struct sockaddr_in _server_host;
    char host[64];
};


void InitKepler(struct kepler *); 
void __connect_server(struct kepler *, struct server *);
void __extract(struct kepler *,struct  server*,const char * ,const char*);
void __extractUrl();

#endif
