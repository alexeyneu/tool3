## tool3 monero sync gui. 
Runs pipelined monerod
 
[![version](https://img.shields.io/badge/%20%20tool3%20%20%20-v2.079%20%20Afterburning'%20SP4-brightgreen.svg)](https://github.com/alexeyneu/tool3/releases/v2.079)

v2.079 code fault-proof status :
 [![ ](https://scan.coverity.com/projects/13991/badge.svg)](https://scan.coverity.com/projects/alexeyneu-tool3)

## how to: 
1. locate monerod.exe folder  
2. thats all

Sys Req: 
Visual C++ 2010 redist (x86);
Windows 7    

Also monerod cmd-line options can be changed in edit window.
![Screen1](/screens/Untitled%202.jpg)


## build:
ms visual studio 2010

tool3.sln in explorer 
 
'Build/Build Solution' 

also can be done with Visual Studio Command Prompt(it's a regular  command prompt with pre-run of "vcvarsall.bat x86" ,can be found in VS tools) by
``` 
cd .\tool3
msbuild tool3.vcxproj /property:Configuration=Release  
```


nmake will work too. there is no MAKEFILE for now so doesnt make much sense although options can be transferred by cmd-line.
