## tool3 monero sync gui. 
Runs pipelined monerod
 
[![version](https://img.shields.io/github/tag/alexeyneu/tool3.svg?style=plastic)](https://github.com/alexeyneu/tool3/releases/latest)


 [![ ](https://scan.coverity.com/projects/13991/badge.svg)](https://img.shields.io/coverity/scan/13991.svg)

## how to: 
1. locate monerod.exe folder  
2. thats all

 - Sys Req: 
Visual C++ 2010 redist (x86);
Windows 7    

Also monerod cmd-line options can be changed in edit window.
![Screen1](/screens/Untitled%202.jpg)


## build:
 - ms visual studio 2010

tool3.sln in explorer ,
'Build/Build Solution' 

 - msbuild

 also can be done with Visual Studio Command Prompt(it's a regular  command prompt with pre-run of "vcvarsall.bat x86" ,can be found in VS tools) by
``` 
cd .\tool3
msbuild tool3.vcxproj /property:Configuration=Release  
```
