//***************************************************************************
// File name:  CountingLogFunctor.h
// Author:     Chadd Williams
// Date:       3/18/2019
// Class:      CS485
// Assignment: Functor Example
// Purpose:    Demonstrate how the a functor can be used
//***************************************************************************
#pragma once
#include <string>

class CountingLogFunctor {

public:
  CountingLogFunctor (std::string prefix);
  std::string operator() (std::string msg);

private:
  std::string mPrefix;
  long long mBytesWritten = 0;
};