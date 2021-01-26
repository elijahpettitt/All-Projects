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
	items.push_back(item);
}

/*
void ShoppingCart::RemoveItem(ItemToPurchase item) {

}
void ShoppingCart::UpdateItemQuantity(string name) {

}
int ShoppingCart::GetTotalQuantity() {

}
int ShoppingCart::GetTotalCost() {

}
void ShoppingCart::PrintItems() {

}
void ShoppingCart::PrintTotalQuantityAndCost() {

}
*/