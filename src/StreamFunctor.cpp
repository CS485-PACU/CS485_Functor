//***************************************************************************
// File name:  StreamFunctor.h
// Author:     Chadd Williams
// Date:       3/18/2019
// Class:      CS485
// Assignment: Functor Example
// Purpose:    Demonstrate how the a functor can be used
//***************************************************************************
#include "StreamFunctor.h"

//***************************************************************************
// Constructor:   StreamFunctor
//
// Description:   Create object
//
// Parameters:    rcOut - the stream to write to
//                cLogFunc - the functor to build the log message
//
// Returned:      None
//***************************************************************************
StreamFunctor::StreamFunctor (std::ostream& rcOut, LogFunctor cLogFunc) 
    : mrcOut(rcOut), mcPrefixLog(cLogFunc) 
{}

//***************************************************************************
// Function:    operator() - Functor
//
// Description: Create a Stream message
//
// Parameters:  msg - the message to log to the stream 
//
// Returned:    none
//***************************************************************************
void StreamFunctor::operator() (std::string msg) const
{
  mrcOut <<  mcPrefixLog(msg) << std::endl;
}