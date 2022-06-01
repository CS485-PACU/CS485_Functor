//***************************************************************************
// File name:  CountingLogFunctor.h
// Author:     Chadd Williams
// Date:       3/18/2019
// Class:      CS485
// Assignment: Functor Example
// Purpose:    Demonstrate how the a functor can be used
//***************************************************************************
#include "CountingLogFunctor.h"

//***************************************************************************
// Constructor:   CountingLogFunctor
//
// Description:   Create object
//
// Parameters:    None
//
// Returned:      None
//***************************************************************************
CountingLogFunctor::CountingLogFunctor (std::string prefix) : mPrefix (prefix)
{}

//***************************************************************************
// Function:    operator() - Functor
//
// Description: Build message and count of bytes in string
//
// Parameters:  msg - the message to output
//
// Returned:    the newly built string message
//***************************************************************************
std::string CountingLogFunctor::operator() (std::string msg) 
{
  std::string output = mPrefix + ": " + msg;

  mBytesWritten += output.length ();
  return std::to_string (mBytesWritten) + " " + output;
}
