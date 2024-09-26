//g++ -o client client.o FileData.o -lwsock32 -lWs2_32

#ifndef CLIENT_H
#define CLIENT_H

#define WIN32_LEAN_AND_MEAN

#include <windows.h>
#include <winsock2.h>
#include <ws2tcpip.h>
#include <stdlib.h>
#include <stdio.h>
#include <Lmcons.h>
#include <filesystem>
#include <iostream>

namespace fs = std::filesystem;

// Need to link with Ws2_32.lib, Mswsock.lib, and Advapi32.lib
#pragma comment (lib, "Ws2_32.lib")
#pragma comment (lib, "Mswsock.lib")
#pragma comment (lib, "AdvApi32.lib")


#define DEFAULT_BUFLEN 10000
#define DEFAULT_PORT "27015"
#define DEFAULT_SERVER "172.29.240.1"

#endif