#ifndef STOREITEM_H
#define STOREITEM_H

#include <string>
using namespace std;

class ItemToPurchase {
  public:
    ItemToPurchase();
		ItemToPurchase(string name, string description, double price, int quantity);
    void SetName(string itemName);
    string GetName() const;
		void SetDescription(string description);
		string GetDescription() const;
    void SetPrice(double itemPrice);
    double GetPrice() const;
    void SetQuantity(int itemQuantity);
    int GetQuantity() const;
		void PrintCost() const;
		void PrintDescription() const;

  private:
    string itemName;
		string itemDescription;
    double itemPrice;
    int itemQuantity;
};

#endif