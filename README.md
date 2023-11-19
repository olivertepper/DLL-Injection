# DLL-Injection

## Compile and create DLL
``` sh
g++ -shared -o helloworld.dll template.cpp
rundll32.exe helloworld.dll,HelloWorld
```
