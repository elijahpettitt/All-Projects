#include <iostream>
#include <iomanip> 
#include "ItemToPurchase.h"
#include "ShoppingCart.h"
using namespace std;

int main() {
  ItemToPurchase itemToP1;
//	ItemToPurchase itemToP2;
	//string name = "";
	//double price = 0.0;
	//int quantity = 0;

	cout << fixed << setprecision(2);

	ItemToPurchase water("Water", "pure", 1.99, 3);
	ItemToPurchase bread("Bread", "wheat", 2, 1);

	cout << endl;

	//ShoppingCart cart("The Cart", "Jan 12, 2020");
	ShoppingCart cart;

	cart.AddItem(water);
	cart.AddItem(bread);


//	cout << cart.GetCustomerName() << endl;
//	cout << cart.GetCreationDate() << endl;

	cart.UpdateItemQuantity("Water", 10);

	cout << "total quantity: " << cart.GetTotalCost() << endl;

	cart.PrintTotalQuantityAndCost();

	cart.PrintItems();
}