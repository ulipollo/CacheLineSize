CahceLineSizeMex
================
Allows to know the size of a cache line in Matlab.
Can be used to optimize memory access.

## Credits
The cross-platform C code of the routine CacheLineMemSize has been forked from [https://github.com/NickStrupat/CacheLineSize](https://github.com/NickStrupat/CacheLineSize)

## Usage (Matlab)

cls = CacheLineSizeMex(); % returns an int32 with the size of the cache line in bytes.

## Compiling
The precompiled MEX file for Matlab on Windows 64bit platforms is provided.
It has been tested on Windows 8.1 64bits using Matlab r2012b, r2015b, r2017b.

To compile it from Matlab:
mex CacheLineSizeMex.c CacheLineSize.c
