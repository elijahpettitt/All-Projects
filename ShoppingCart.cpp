#include <iostream>
#include <vector>
#include <string>

#include "ShoppingCart.h"

ShoppingCart::ShoppingCart() {
	customerName = "none";
	creationDate = "Jan 1, 2016";
}

ShoppingCart::ShoppingCart(string name, string date) {
	customerName = name;
	creationDate = date;
}

bool ShoppingCart::IsItemInCart(string name) {
	for (unsigned int i = 0; i < items.size(); i++) {
		if (!items.at(i).GetName().compare(name)) {
			return true;
		}
	}
	return false;
}

int ShoppingCart::GetItemIndex(string name) {
	for (unsigned int i = 0; i < items.size(); i++) {
		if (!items.at(i).GetName().compare(name)) {
			return i;
		}
	}
	return -1;
}

string ShoppingCart::GetCustomerName() {
	return customerName;
}

string ShoppingCart::GetCreationDate() {
	return creationDate;
}

void ShoppingCart::AddItem(ItemToPurchase item) {
	if (!IsItemInCart(item.GetName())) {
		items.push_back(item);
	}
	else {
		cout << "Item is already found in the cart. It will not be added."
			<< endl;
	}
}


void ShoppingCart::RemoveItem(string name) {
	if (IsItemInCart(name)) {
		items.erase(items.begin() + GetItemIndex(name));
	}
	else {
		cout << "Item not found in cart. It will not be removed." << endl;
	}
}

void ShoppingCart::UpdateItemQuantity(string name, int quantity) {

	if (IsItemInCart(name)) {
		items.at(GetItemIndex(name)).SetQuantity(quantity);
	}
	else {
		cout << "Item not found in cart. It will not be modified." << endl;
	}
}
/*
int ShoppingCart::GetTotalQuantity() {

}
int ShoppingCart::GetTotalCost() {

}
*/

void ShoppingCart::PrintItems() {
	cout << customerName << " Shopping Cart - " << creationDate << endl;
	cout << endl;
	cout << "Item Descriptions" << endl;

	for (unsigned int i = 0; i < items.size(); i++) {
		items.at(i).PrintDescription();
	}
}

void ShoppingCart::PrintTotalQuantityAndCost() {
	double cost = 0.0;

	cout << customerName << " Shopping Cart - " << creationDate << endl;

	cout << "Number of Items: " << items.size() << endl;
	cout << endl;

	for (unsigned int i = 0; i < items.size(); i++) {

		cout << items.at(i).GetName() << " " << items.at(i).GetQuantity() << " @ $" << items.at(i).GetPrice() << " = $" << 	items.at(i).GetPrice() * items.at(i).GetQuantity() << endl;

		cost += items.at(i).GetPrice() * items.at(i).GetQuantity();
	}

	cout << endl << "Total: $" << cost << endl;
}
