#include <iostream>
#include <string>
#include <vector>
#include "Sale.h"
#include "RegularSale.h"

#ifndef REGULARCHECK_H
#define REGULARCHECK_H

using namespace std;

class RegularCheck : public RegularSale
{
public:
  RegularCheck();

  string checkName;
  int licenseNum;

  void setCheckName(string newCheck);
  string getCheckName();
  void setLicense(int newLicense);
  int getLicense();

  void process_payment();
  void print_sale();

};
#endif
