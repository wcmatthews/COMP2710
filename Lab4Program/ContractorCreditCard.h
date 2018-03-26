#include <iostream>
#include <string>
#include <vector>
#include "Sale.h"
#include "ContractorSale.h"

#ifndef CONTRACTORCREDITCARD_H
#define CONTRACTORCREDITCARD_H

using namespace std;

class ContractorCreditCard : public ContractorSale
{
public:
  ContractorCreditCard();

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
