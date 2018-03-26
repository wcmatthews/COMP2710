#include <iostream>
#include <string>
#include <vector>


#ifndef CONTRACTORSALE_H
#define CONTRACTORSALE_H

using namespace std;

class ContractorSale : public Sale
{
public:
  ContractorSale();

  string contrID;

  void setContID(string newID);
  string getContID();
  //double getDiscount();
  void process_sale();

};
#endif
