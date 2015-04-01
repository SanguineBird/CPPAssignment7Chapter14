/*This is the implementation file for the class 'Revolver'.*/

#include <string> //string, to_string
using std::string;
using std::to_string;
#include "revolver.h"

namespace gunsMMoore{

  Revolver::Revolver() : Gun(), Handgun(), singleAction(false), numberOfRounds(0)
  {/*deliberately empty*/}
  
  Revolver::Revolver(const string& theManufacturer, const string& theCaliber, const string& theGrips, const string& theSights, bool theLaser, bool theSingleAction, int theNumberOfRounds) : Gun(theManufacturer, theCaliber), Handgun(theGrips, theSights, theLaser), singleAction(theSingleAction), numberOfRounds(theNumberOfRounds)
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
    if (singleAction())
      return "single action";
    else
      return "double action";
  }
  
  string Revolver::printNumberOfRounds(){
    string display = to_string(numberOfRounds) + " shot";
    return display;
  }
}
