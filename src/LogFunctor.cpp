//***************************************************************************
// File name:  LogFunctor.h
// Author:     Chadd Williams
// Date:       3/18/2019
// Class:      CS485
// Assignment: Functor Example
// Purpose:    Demonstrate how the a functor can be used
//***************************************************************************
#include "LogFunctor.h"

//***************************************************************************
// Constructor:   LogFunctor
//
// Description:   Create object
//
// Parameters:    prefix - the prefix for each log message
//
// Returned:      None
//***************************************************************************
LogFunctor::LogFunctor (std::string prefix) : mPrefix (prefix)
{};

//***************************************************************************
// Function:    operator() - Functor
//
// Description: Create a log message
//
// Parameters:  msg - the message to log 
//
// Returned:    the prefix + msg
//***************************************************************************
std::string LogFunctor::operator() (std::string msg) const
{
  return mPrefix + ": " + msg;
}
