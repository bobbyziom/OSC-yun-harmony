OSC-yun-harmony
===============
How to use:
---

Download pyOSC from: https://trac.v2.nl/wiki/pyOSC
Create /tmp folder on yun:
```c
mkdir tmp
```
Copy lib to yun:
```c
scp -r /User/.../Downloads/pyOSC-0.3.5b-5294 root@arduino.local:/tmp
```
Install pyOSC on yun:
```c
python setup.py install
```
Copy python script to yun:
```c
scp /Users/.../Desktop/oscsend.py root@arduino.local:/tmp
```
Change exec mode on script:
```c
chmod +x oscsend.py
```
Copy yunOSC folder to arduino/libraries path
Open pure data patch 
Open Arduino IDE
Choose File->Examples->yunOSC->send_example
Upload and listen to your analog reads
