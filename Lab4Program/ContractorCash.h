#include <iostream>
#include <string>
#include <vector>
#include "Sale.h"
#include "ContractorSale.h"

#ifndef CONTRACTORCASH_H
#define CONTRACTORCASH_H

using namespace std;

class ContractorCash : public ContractorSale
{
public:
  ContractorCash();

  double amountReceived;
  double change;

  double getChange();
  void setAmountRec(double rec);
  void process_payment();
  void print_sale();
};
#endif
