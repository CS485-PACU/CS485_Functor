//***************************************************************************
// File name:  FilterFunctor.h
// Author:     Chadd Williams
// Date:       3/18/2019
// Class:      CS485
// Assignment: Functor Example
// Purpose:    Demonstrate how the a functor can be used
//***************************************************************************
#include "FilterFunctor.h"

//***************************************************************************
// Constructor:   FilterFunctor
//
// Description:   Create object
//
// Parameters:    prefix - the prefix to look for
//                compare - a function to do the comparison
//
// Returned:      None
//***************************************************************************

FilterFunctor::FilterFunctor (std::string prefix, 
    std::function<bool (std::string, std::string)> compare )
    : mPrefix (prefix), mCompare(compare)
{};

//***************************************************************************
// Function:    operator() - Functor
//
// Description: Build message and count of bytes in string
//
// Parameters:  msg - the message to compare
//
// Returned:    true if msg matches the filter, false otherwise
//***************************************************************************
bool FilterFunctor::operator() (std::string msg) const
{
  return mCompare(msg,mPrefix);
}
