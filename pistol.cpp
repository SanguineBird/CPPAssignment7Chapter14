/*This is the implementation file for the class 'Pistol'.*/

#include <string>
using std::string;
#include "pistol.h"

namespace gunsMMoore{

  Pistol::Pistol() : Gun(), Handgun(), semiauto(false)
  {/*deliberately empty*/}
  
  Pistol::Pistol(const string& theManufacturer, const string& theCaliber, const string& theGrips, const string& theSights, bool theLaser, bool theSemiauto) : Gun(theManufacturer, theCaliber), Handgun(theGrips, theSights, theLaser), semiauto(theSemiauto)
  {/*deliberately empty*/}
  
  bool Pistol::getSemiauto() const
  {return semiauto;}
  
  void Pistol::setSemiauto(bool theSemiauto)
  {semiauto = theSemiauto;}
  
  string Pistol::printSemiauto(){
    if(semiauto())
      return "semi-auto";
    else
      return "not semi-auto";
  }
}
