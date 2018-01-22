//=================================================================================
//  mexFunction
//
//  Main entry function
//
//  Takes as input
//  - nothing
//
//  Generates output:
//  - cache line size (in bytes)
//=================================================================================
#include<mex.h>
#include "CacheLineSize.h"

void mexFunction(int nlhs, mxArray *plhs[],
                 int nrhs, const mxArray *prhs[])
{
    size_t cacheLineSize;
    int* outMexPtr;
    
    cacheLineSize   = CacheLineSize() ;// returns number of bytes
    
    plhs[0] = mxCreateNumericMatrix(1,1,mxINT32_CLASS,mxREAL);
    outMexPtr = (int*)mxGetData(plhs[0]);//gives a void*, cast it to int*
    *outMexPtr = (int)cacheLineSize;
}