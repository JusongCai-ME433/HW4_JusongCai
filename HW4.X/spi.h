#ifndef SPI1__H__
#define SPI1__H__

#include <xc.h>           // processor SFR definitions
#include <sys/attribs.h>  // __ISR macro

//#define CS LATAbits.LATA0 // chip select pin
#define CHANNELA 0
#define CHANNELB 1
#define PI 3.1415926535898

void initSPI1(); 
char SPI1_IO(char write); // send a byte via spi and return the response
void setVoltage(char channel, int voltage); 

#endif