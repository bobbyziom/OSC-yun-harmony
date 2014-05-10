OSC-yun-harmony
===============

How to use:

1. Download pyOSC from: https://trac.v2.nl/wiki/pyOSC
2. Create /tmp folder on yun:
  mkdir tmp
3. Copy lib to yun:
  scp -r /User/.../Downloads/pyOSC-0.3.5b-5294 root@arduino.local:/tmp
4. Copy python script to yun:
  scp /Users/.../Desktop/oscsend.py root@arduino.local:/tmp
5. Change exec mode on script:
  chmod +x oscsend.py
6. Copy yunOSC folder to arduino/libraries path
7. Open pure data patch 
8. Open Arduino IDE
9. Choose File->Examples->yunOSC->send_example
10. Upload and listen to your analog reads
