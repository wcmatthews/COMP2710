#include <iostream>
#include <string>
#include <vector>
#include "Sale.h"
#include "RegularSale.h"

#ifndef REGULARCASH_H
#define REGULARCASH_H

using namespace std;

class RegularCash : public RegularSale
{
public:
  RegularCash();

  double amountReceived;
  double change;

  double getChange();
  void setAmountRec(double rec);
  void process_payment();
  void print_sale();
};
#endif
