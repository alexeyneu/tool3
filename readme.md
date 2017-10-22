## tool3 monero sync gui. 
Runs pipelined monerod
 
[![version](https://img.shields.io/github/tag/alexeyneu/tool3.svg?style=plastic)](https://github.com/alexeyneu/tool3/releases/latest)


 [![ ](https://img.shields.io/coverity/scan/13991.svg)](https://scan.coverity.com/projects/alexeyneu-tool3)

## how to: 
1. locate monerod.exe folder  
2. thats all

 - Sys Req: 
Visual C++ 2010 redist (x86 , 64-bit version req x64) so-called `vcrun2010` wine ;cpu with sse2 set;
Windows 7    

Also monerod cmd-line options can be changed in edit window.
![Screen1](/screens/Untitled.jpg)
## bin

/Release

/x64/Release

## build:
 - ms visual studio 2010

`tool3.sln` in explorer ,
'Build/Build Solution' 

64-bit : conf manager/change active solution platform to x64  
 - msbuild

 also can be done with Visual Studio Command Prompt(it's a regular  command prompt with pre-run of "vcvarsall.bat x86" ,can be found in VS tools) by

1.
``` 
cd .\tool3
msbuild tool3.vcxproj /property:Configuration=Release  
```
2.
```
msbuild  tool3.sln
/property:Configuration=Release   /property:Platform=x64
```
