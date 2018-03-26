// Program:   Cash Register Program
// Name:      Walter Matthews
// Class:     COMP2710
// Date:      12/08/2017
// Email:     wcm0034@auburn.edu
//
// Definition for RegularSale class.
#include <iostream>
#include <string>
#include <vector>
#include "Sale.h"

#ifndef REGULARSALE_H
#define REGULARSALE_H

using namespace std;

class RegularSale : public Sale
{
public:
  RegularSale();

  void process_sale(); //paymeny type parameter?
  //void makeReceipt();


};
#endif
