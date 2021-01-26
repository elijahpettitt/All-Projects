#include <string>
#include <iostream>
#include "ItemToPurchase.h"
using namespace std;

ItemToPurchase::ItemToPurchase() {
  this->itemName = "none";
  this->itemPrice = 0.0;
  this->itemQuantity = 0;
}

void ItemToPurchase::SetName(string itemName) {
  this->itemName = itemName;
}

string ItemToPurchase::GetName() const {
  return this->itemName;
}

void ItemToPurchase::SetDescription(string description) {
	this->itemDescription = description;
}

string ItemToPurchase::GetDescription() const {
	return this->itemDescription;
}

void ItemToPurchase::SetPrice(double itemPrice) {
  this->itemPrice = itemPrice;
}

double ItemToPurchase::GetPrice() const {
  return itemPrice;
}

void ItemToPurchase::SetQuantity(int itemQuantity) {
  this->itemQuantity = itemQuantity;
}

int ItemToPurchase::GetQuantity() const {
  return itemQuantity;
}

void ItemToPurchase::PrintCost() const {
		cout << itemName << " " << itemQuantity << " @ $" << itemPrice << " = $" << 	itemPrice * itemQuantity << endl;
}

void ItemToPurchase::PrintDescription() const {
	cout << itemName << ": "  <<  itemDescription << endl;
}