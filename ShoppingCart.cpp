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

bool ShoppingCart::IsCartEmpty() {
	if (items.empty()) {
    cout << "1" << endl;
    cout << items.size();
		return true;
	}
	else if (GetTotalQuantity() == 0) {
    cout << "2" << endl;
			return true;
	}
    cout << "3" << endl;
	return false;
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

int ShoppingCart::GetTotalQuantity() {
	int total = 0;
	for (unsigned int i = 0; i < items.size(); i++) {
		total += items.at(i).GetQuantity();
	}
	return total;
}

double ShoppingCart::GetTotalCost() {
	double total = 0.0;
	for (unsigned int i = 0; i < items.size(); i++) {
		total += items.at(i).GetQuantity() * items.at(i).GetPrice();
	}
	return total;
}

void ShoppingCart::PrintItems() {
	if (!IsCartEmpty()) {
		cout << customerName << " Shopping Cart - " << creationDate << endl;
		cout << endl;
		cout << "Item Descriptions" << endl;

		for (unsigned int i = 0; i < items.size(); i++) {
			items.at(i).PrintDescription();
		}
	}
	else {
		cout << "Shopping cart is empty." << endl;
	}
}

void ShoppingCart::PrintTotalQuantityAndCost() {
	if (!IsCartEmpty()) {
		cout << customerName << " Shopping Cart - " << creationDate << endl;

		cout << "Number of Items: " << items.size() << endl;
		cout << endl;

		for (unsigned int i = 0; i < items.size(); i++) {

			cout << items.at(i).GetName() << " " << items.at(i).GetQuantity() << " @ $" << items.at(i).GetPrice() << " = $" << 	items.at(i).GetPrice() * items.at(i).GetQuantity() << endl;
		}

		cout << endl << "Total: $" << GetTotalCost() << endl;
	}
	else {
		cout << "Shopping cart is empty." << endl;
	}
}
