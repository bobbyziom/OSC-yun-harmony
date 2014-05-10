#   
#  README/GUIDE: https://github.com/bobbyziom/OSC-yun-harmony/blob/master/README.md
#
#  - bobbyziom  
#

import OSC, sys

# use first arguments to setup connection
host = sys.argv[1]  
port = int(sys.argv[2]) 
adr = sys.argv[3]

# initiate udp client and connect
client = OSC.OSCClient()
client.connect( (host, port) ) 

# create OSC message object and set adr
msg = OSC.OSCMessage() 
msg.setAddress(adr)

# put all message arguments in OSC message object
for value in range(len(sys.argv)):
  if value > 3:
    msg.append(sys.argv[value])

# see ya nevah :D
client.send(msg) 