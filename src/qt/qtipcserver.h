#ifndef QTIPCSERVER_H
#define QTIPCSERVER_H

// Define PumpCoin message queue name
#define BITCOINURI_QUEUE_NAME "PumpCoinURI"

void ipcScanRelay(int argc, char *argv[]);
void ipcInit(int argc, char *argv[]);

#endif // QTIPCSERVER_H
