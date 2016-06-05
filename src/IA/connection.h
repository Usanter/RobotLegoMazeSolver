#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
// Socket, used for Bluetooth socket
#include <sys/socket.h>
#include <sys/types.h>

// Bluetooth headers
#include <bluetooth/bluetooth.h>
#include <bluetooth/rfcomm.h>

/*=================================================
 *                 CONNECTION.H                   *
 *           Authors: Defonte & Rolland           *
 *------------------------------------------------*
 * Fichier.h contenant les fonction bluetooth     *
 *================================================*/
int init_bluetooth(char *btAddress);
int nxt_sendmessage(int mbox, char *message);
int recevoir ();
