
#include "Costumer.hpp"
#include <iostream>

void Customer::costumer_details() const {
    cout << "Customer ID: " << id << endl;
    cout << "Customer Name: " << name << endl;
    cout << "Customer Email: " << email << endl;
}
