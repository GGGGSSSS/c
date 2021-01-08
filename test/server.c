#include <WinSock2.h>
#include <stdio.h>
#pragma comment(lib, "ws2_32.lib")

int merror(int redata, long long unsigned int error, char *showinfo)
{
  if (redata == error)
  {
    perror(showinfo);
    getchar();
    return -1;
  }
  return 0;
}

int main()
{
  printf("hi");
  WSADATA wsdata;
  int isok = WSAStartup(MAKEWORD(2, 2), &wsdata);
  merror(isok, WSAEINVAL, "申请socket失败");
  SOCKET server = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
  merror(server, INVALID_SOCKET, "创建socket失败");
  getchar();
  return 0;
}