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

#include "yunOSC.h"

yunOSC::yunOSC() {}

void yunOSC::begin(String adr, int port) {
  
     IP_ADR = adr;
     PORT = String(port);

}

void yunOSC::send(String adr, int* msg, int len) {

	Process p;
    p.begin("python");
    p.addParameter("/OSCtoPD/oscsend.py");
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
