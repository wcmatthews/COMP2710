#include <iostream>
#include <string>
#include <vector>
#include "Sale.h"
#include "RegularSale.h"

#ifndef REGULARCREDITCARD_H
#define REGULARCREDITCARD_H

using namespace std;

class RegularCreditCard : public RegularSale
{
public:
  RegularCreditCard();

  string cardName;
  string expDate;
  int cardNum;

  void setCardName(string newCardName);
  string getCardName();
  void setExpDate(int month, int year);
  string getExpDate();
  void setCardNum(int newNum);
  int getCardNum();

  void process_payment();
  void print_sale();
};
#endif
