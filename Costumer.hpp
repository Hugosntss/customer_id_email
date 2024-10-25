#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <string>
using namespace std;

struct Customer {
    int id;
    string name;
    string email;

    void costumer_details() const;
};

#endif
