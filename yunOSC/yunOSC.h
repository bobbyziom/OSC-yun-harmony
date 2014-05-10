//
//  yunOSC lib example for sending OSC formatted messages 
//  on local UDP using pyOSC python library on lininio
//
//  dependencies: 
//  * pyOSC lib installed on linino
//  * oscsend.py python script located in root@arduino.local/tmp
//  * pd-extended msg_to_freq_example.pd patch
//  
//  README/GUIDE: https://github.com/bobbyziom/OSC-yun-harmony/blob/master/README.md
//
//  - bobbyziom  
//

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