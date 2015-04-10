/*This is the implementation file for the class 'Revolver'.*/

#include <string> //string, to_string
#include <iostream> //cout, endl
using namespace std;
#include "revolver.h"

namespace gunsMMoore{

  Revolver::Revolver() : Handgun(), singleAction(false), numberOfRounds(0)
  {/*deliberately empty*/}
  
  Revolver::Revolver(const string& theManufacturer, const string& theCaliber, const string& theGrips, const string& theSights, bool theLaser, bool theSingleAction, int theNumberOfRounds) : Handgun(theManufacturer, theCaliber, theGrips, theSights, theLaser), singleAction(theSingleAction), numberOfRounds(theNumberOfRounds)
  {/*deliberately empty*/}
  
  bool Revolver::getSingleAction() const
  {return singleAction;}
  
  int Revolver::getNumberOfRounds() const
  {return numberOfRounds;}
  
  void Revolver::setSingleAction(bool theSingleAction)
  {singleAction = theSingleAction;}
  
  void Revolver::setNumberOfRounds(int theNumberOfRounds)
  {numberOfRounds = theNumberOfRounds;}
  
  string Revolver::printSingleAction(){
    if (singleAction)
      return "single action";
    else
      return "double action";
  }
  
  void Revolver::printNumberOfRounds(){
    cout << numberOfRounds << " rounds";
  }
}
