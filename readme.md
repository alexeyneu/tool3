## tool3 monero sync tool.  
Also suitable for solo mining and for monero clones.
 
[![version](https://img.shields.io/badge/tool3-v8.08-brightgreen.svg)](https://github.com/alexeyneu/tool3/releases/latest)  
[![version](https://img.shields.io/github/downloads/alexeyneu/tool3/total.svg?style=plastic)](https://github.com/alexeyneu/tool3/releases/latest)  

 [![ ](https://img.shields.io/coverity/scan/13991.svg)](https://scan.coverity.com/projects/alexeyneu-tool3)
 - Sys Req:  
Visual C++ 2013 redist  
https://www.microsoft.com/en-us/download/details.aspx?id=40784  
 cpu with sse2 set(sse-optimized,nothing sse-specific in code for now);
Windows 7 . 
![Screen1](/Untitled.jpg)
## about 
 - tracks monero blockchain synchonization progress . achieved by `monerod.exe` pipelining  
 - speed indicator represents relative overall sync speed with first_synced_block_group to second_one speed as base.
 - 32-bit ver could launch 64-bit monerod  
 - no NET framework stuff here 
 - for monero forks change `exe` name in `CreateProcess` 
 - pipelining has no impact on remote procedure calls handling
## how to:
 1) locate `monerod.exe` folder  
 2) thats all  
## build:
nmake holds well on non-2013
 - ms visual studio 2013 (C++)
32/64-bit : conf manager/change active solution platform  
 - msbuild  
vs command prompt(2013)
```
msbuild  tool3.sln /property:Configuration=Release   /property:Platform=x64

msbuild  tool3.sln \
/property:Configuration=Release   /property:Platform=Win32
```
- nmake  
  
vs x64 (native) command prompt (standard command prompt works too if env tuned right )
```
cd tool3
nmake
```

