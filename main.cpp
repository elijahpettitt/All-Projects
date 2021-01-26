#include <iostream>
#include <iomanip> 
#include "ItemToPurchase.h"
#include "ShoppingCart.h"
using namespace std;

int main() {
  ItemToPurchase itemToP1;
//	ItemToPurchase itemToP2;
	string name = "";
	double price = 0.0;
	int quantity = 0;

	cout << fixed << setprecision(2);

	cout << "Item 1" << endl;

	cout << "Enter the item name: ";
	getline(cin, name);
	itemToP1.SetName(name);

	cout << "Enter the item description: ";
	getline(cin, name);
	itemToP1.SetDescription(name);

	cout << endl << "Enter the item price: ";
	cin >> price;
	itemToP1.SetPrice(price);

	cout << endl << "Enter the item quantity: ";
	cin >> quantity;
	itemToP1.SetQuantity(quantity);

	cout << endl;

	cout << "TOTAL COST" << endl;

		itemToP1.PrintCost();
		itemToP1.PrintDescription();

	ShoppingCart cart("The Cart", "Jan 12, 2020");


	cout << cart.GetCustomerName() << endl;
	cout << cart.GetCreationDate() << endl;


	//cart.AddItemToCart(itemToP1);

	//cart.PrintItems();
}