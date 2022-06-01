//***************************************************************************
// File name:  IntFunctor.h
// Author:     Chadd Williams
// Date:       3/18/2019
// Class:      CS485
// Assignment: Functor Example
// Purpose:    Demonstrate how the a functor can be used
//***************************************************************************
#include "IntFunctor.h"

//***************************************************************************
// Constructor:   IntFunctor
//
// Description:   Create object
//
// Parameters:    base - the base value to add 
//
// Returned:      None
//***************************************************************************
IntFunctor::IntFunctor (int base) : mBase (base) 
{};

//***************************************************************************
// Function:    operator() - Functor
//
// Description: Add base to value and return
//
// Parameters:  value - the int to add to base
//
// Returned:    bass + value
//***************************************************************************
int IntFunctor::operator() (int value) const
{
  return mBase + value;
}
