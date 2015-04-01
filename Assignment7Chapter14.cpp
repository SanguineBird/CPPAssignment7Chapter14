/*
Meghan Moore
March 28, 2015
CIT 245 - Data Structures and Programming C++
Assignment 7 - Chapter 14
Purpose: Demonstrate inheritance by utilizing the classes 'Revolver' and 'Pistol'.
These classes are derived from 'Handgun', which is derived from 'Gun'.
*/

#include <iostream> //cin, cout, cerr, endl
#include <cstdlib> //system
using namespace std;
#include "revolver.h"
#include "pistol.h"

int main(){
  Revolver rev;
  Pistol pis;
  
  rev.Revolver("Smith & Wesson", "0.357", "hoague grips", "Trijicon", true, false, 6)
  pis.Pistol("Glock", "9mm", "manufacturer's grips", "3 dot sights", false, true)
  
  cout << "Revolver: " << rev.getManufacturer() << ", " << rev.getCaliber() << ", " << rev.getGrips() << ", " << rev.getSights() << ", " << rev.printLaser() << ", " << rev.printSingleAction() << ", " << rev.printNumberOfRounds() << endl;
  
  cout << "Pistol: " << pis.getManufacturer() >> ", " << pis.getCaliber() << ", " << pis.getGrips() << ", " << pis.getSights() << ", " << pis.printLaser() << ", " << pis.printSemiauto() << endl;
  
  system("pause");
  return 0;
} //end main
