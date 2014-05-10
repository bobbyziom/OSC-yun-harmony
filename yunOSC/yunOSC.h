#ifndef yunOSC_h
#define yunOSC_h

#include <Arduino.h>  
#include <Process.h>

class yunOSC {

public:

	yunOSC();
	void begin(String adr, int port);
	void send(String adr, int* mgs, int len);

private:

	String IP_ADR;
	String PORT;

};

extern yunOSC osc;

#endif