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

	//cout << "empty1: " << endl;
	//cart.PrintTotalQuantityAndCost();
	//cart.PrintItems();

	cart.AddItem(water);
	cart.AddItem(bread);

	cout << "full2: " << endl;
	cart.PrintTotalQuantityAndCost();
	cout << endl << endl << endl;
	cart.PrintItems();


//	cout << cart.GetCustomerName() << endl;
//	cout << cart.GetCreationDate() << endl;

	//cart.UpdateItemQuantity("Water", 0);
	//cart.UpdateItemQuantity("Bread", 0);

	cout << "empty3: " << endl;

	//cart.PrintTotalQuantityAndCost();
	//cart.PrintItems();
}