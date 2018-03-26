#include <iostream>
#include <string>
#include <vector>
#include "Sale.h"
#include "RegularSale.h"
#include "RegularCreditCard.h"

using namespace std;

RegularCreditCard::RegularCreditCard()
{
  cardName = "";
  expDate = "";
  cardNum = 0;
  payment_info = "CREDIT CARD";

}

void RegularCreditCard::setCardName(string newName)
{
  cardName = newName;
}

string RegularCreditCard::getCardName()
{
  return cardName;
}

void RegularCreditCard::setExpDate(int month, int year)
{
  expDate = to_string(month) + "/" + to_string(year);
}

string RegularCreditCard::getExpDate()
{
  return expDate;
}

void RegularCreditCard::setCardNum(int newNum)
{
  cardNum = newNum;
}

int RegularCreditCard::getCardNum()
{
  return cardNum;
}

void RegularCreditCard::process_payment()
{
  cardName = getCardName();
  expDate = getExpDate();
  cardNum = getCardNum();
}

void RegularCreditCard::print_sale()
{
  for (int i = 0; i < items.size(); i++)
  {
    int itemNumber = i + 1;
    cout << itemNumber << ". " << items[i] << "  $ " << prices[i] << "\n";
  }

  cout << "Sub-Total:  $ " << this->getSub() << "\n" << this->getType() << "\n";
  cout << "Tax:  $ " << this->getTax() << "\n";
  cout << "Total amount:  $ " << this->getTotal() << "\n" << this->getPayInfo() << "\n";
  cout << "CREDIT CARD  " << this->getCardName() << this->getExpDate() << this->getCardNum();
}
