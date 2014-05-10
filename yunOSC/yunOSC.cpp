#include "yunOSC.h"

yunOSC::yunOSC() {}

void yunOSC::begin(String adr, int port) {
  
     IP_ADR = adr;
     PORT = String(port);

}

void yunOSC::send(String adr, int* msg, int len) {

	Process p;
    p.begin("python");
    p.addParameter("/tmp/oscsend.py");
    p.addParameter(IP_ADR);
    p.addParameter(PORT);
    p.addParameter(adr);

    for(int i = 0; i < len; i++) {
      p.addParameter(String(msg[i]));
    }

    p.run(); 
    p.flush();

}

yunOSC osc;