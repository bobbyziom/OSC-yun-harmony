
# Dependencies:
#
# pyOSC and simpleOSC

import OSC, sys

host = sys.argv[1]  
port = int(sys.argv[2]) 
adr = sys.argv[3]

client = OSC.OSCClient()
client.connect( (host, port) ) # note that the argument is a tupple and not two arguments
msg = OSC.OSCMessage() #  we reuse the same variable msg used above overwriting it
msg.setAddress(adr)

for value in range(len(sys.argv)):
  if value > 3:
    msg.append(sys.argv[value])

client.send(msg) # now we dont need to tell the client the address anymore