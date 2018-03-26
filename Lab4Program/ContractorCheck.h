#include <iostream>
#include <string>
#include <vector>
#include "Sale.h"
#include "ContractorSale.h"

#ifndef CONTRACTORCHECK_H
#define CONTRACTORCHECK_H

using namespace std;

class ContractorCheck : public ContractorSale
{
public:
  ContractorCheck();

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
