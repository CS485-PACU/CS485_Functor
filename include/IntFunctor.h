//***************************************************************************
// File name:  IntFunctor.h
// Author:     Chadd Williams
// Date:       3/18/2019
// Class:      CS485
// Assignment: Functor Example
// Purpose:    Demonstrate how the a functor can be used
//***************************************************************************
#pragma once

class IntFunctor {

public:
  IntFunctor (int base);

  int operator() (int value) const;
  
private:
  int mBase;
};