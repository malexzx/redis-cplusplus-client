/**
 *  A drop-in replacement for original anet.h.
 *  Since the redis-cpp boost implementation only uses 3 funcs from anet,
 *  I remove all other to make it more clear.
 *                                             hklo.tw@gmail.com
 */

#ifndef ANET_H
#define ANET_H

#define ANET_OK 0
#define ANET_ERR (-1)
#define ANET_ERR_LEN 256

#ifdef  __cplusplus
extern  "C" {
#endif

typedef SOCKET socket_t;

socket_t anetTcpConnect(char *err, char *addr, int port);
int anetTcpNoDelay(char *err, socket_t fd);
int anetWrite(socket_t fd, char *buf, int count);

#ifdef  __cplusplus
}
#endif

#endif