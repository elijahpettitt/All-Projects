#ifndef THECART_H
#define THECART_H

#include <string>
#include <vector>

#include "ItemToPurchase.h"

using namespace std;

class ShoppingCart {
	private:
		string customerName;
		string creationDate;
		vector<ItemToPurchase> items;
		bool IsItemInCart(string name);
		int GetItemIndex(string name);
	
	public:
		ShoppingCart();
		ShoppingCart(string name, string date);
		string GetCustomerName();
		string GetCreationDate();
		void AddItem(ItemToPurchase item);
		void RemoveItem(string name);
		void UpdateItemQuantity(string name, int quantity);
		int GetTotalQuantity();
		int GetTotalCost();
		void PrintItems();
		void PrintTotalQuantityAndCost();
};

#endif