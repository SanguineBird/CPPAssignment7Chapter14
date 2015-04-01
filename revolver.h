/*
This is the header file for the class 'Revolver'.
The class 'Revolver' is derived from the class 'Handgun'
which is derived from the class 'Gun'.
*/

#ifndef REVOLVER_H
#define REVOLVER_H

#include <string>
using std::string;
#include "handgun.h"

namespace gunsMMoore{
  class Revolver{
    public:
      Revolver();
      Revolver(const string& theManufacturer, const string& theCaliber, const string& theGrips, const string& theSights, bool theLaser, bool theSingleAction, int theNumberOfRounds);
      bool getSingleAction() const;
      int getNumberOfRounds() const;
      void setSingleAction(bool theSingleAction);
      void setNumberOfRounds(int theNumberOfRounds);
      string printSingleAction();
      string printNumberOfRounds();
    private:
      bool singleAction;
      int numberOfRounds;
  };
}

#endif //REVOLVER_H
