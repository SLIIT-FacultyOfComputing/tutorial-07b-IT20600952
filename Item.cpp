#include "Item.h"
#include <iostream>
using namespace std;

// 4. Implement Default Constructor Implementation
// 5. Implement Overloaded Constructor Implementation
// 6. Implement Destructor (display "Destructor Called")
Item ::Item(){
  ItemCode = 0;
  unitPrice = 0;
  discount = 0;
}
Item::Item(int code,float price){
  ItemCode=code;
  unitPrice=price;
}

void Item::setDiscount(float pdiscount) {
  discount = pdiscount;
}

float Item::getDiscount() {
  return discount;
}

float Item::discountedPrice() {
   return unitPrice - unitPrice * discount/100;
}

void Item::display() {
  cout << "Item : " << itemCode << endl;
  cout << "Discounted Price " << discountedPrice() << endl;
}

Item::Item(){
  cout<<"Detructor Called"<<endl;
}
