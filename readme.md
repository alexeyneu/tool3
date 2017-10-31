## tool3 monero sync gui. 

 
[![version](https://img.shields.io/github/tag/alexeyneu/tool3.svg?style=plastic)](https://github.com/alexeyneu/tool3/releases/latest)


 [![ ](https://img.shields.io/coverity/scan/13991.svg)](https://scan.coverity.com/projects/alexeyneu-tool3)

## about 
 - tracks monero blockchain synchonization progress . achieved by `monerod.exe` pipelining  
 - speed indicator represents relative overall sync speed with first_synced_block_group to second_one speed as base.
 - 32-bit ver could launch 64-bit monerod   


## how to:
0. i see some talks around console io in monero-project repo so 

https://github.com/alexeyneu/monero
until next hard fork monerod can be deployed from there. 
  
1. locate `monerod.exe` folder  
2. thats all


 - Sys Req:
 
Visual C++ 2010 redist 
https://www.microsoft.com/en-us/download/details.aspx?id=14632

 cpu with sse2 set(sse-optimized,nothing sse-specific in code for now);

Windows 7 . 
  
 
![Screen1](/screens/Untitled.jpg)
## bin


https://github.com/alexeyneu/tool3/releases/download/v5.00-1/tool3.zip


## build:
 - ms visual studio 2010 (C++)


32/64-bit : conf manager/change active solution platform  
 - msbuild 
vs command prompt(2010)
```
msbuild  tool3.sln /property:Configuration=Release   /property:Platform=x64

msbuild  tool3.sln \
/property:Configuration=Release   /property:Platform=Win32


```
