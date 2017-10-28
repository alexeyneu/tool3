## tool3 monero sync gui. 
Runs pipelined monerod
 
[![version](https://img.shields.io/github/tag/alexeyneu/tool3.svg?style=plastic)](https://github.com/alexeyneu/tool3/releases/latest)


 [![ ](https://img.shields.io/coverity/scan/13991.svg)](https://scan.coverity.com/projects/alexeyneu-tool3)


 - speed indicator represents relative overall sync speed with first_synced_block_group to second_one speed as base.
 - 32-bit ver could launch 64-bit monerod   
   monerod  used from  https://github.com/monero-project/monero


## how to: 
1. locate monerod.exe folder  
2. thats all


 - Sys Req:
 
Visual C++ 2010 redist 
https://www.microsoft.com/en-us/download/details.aspx?id=14632

 cpu with sse2 set(sse-optimized,nothing sse-specific in code for now);

Windows 7 . 
  
 
![Screen1](/screens/Untitled.jpg)
## bin


https://github.com/alexeyneu/tool3/releases/download/v4.40-5/tool3_x64.zip
https://github.com/alexeyneu/tool3/releases/download/v4.40-5/tool3.zip




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
