//CreditCard.h
#include <iostream>
#include "bankaccount.h"
using namespace std;

class CreditCard : public BankAccount {
public:
        	makepayment(float);
        	print(); //declares the current credit balance
private:
        	float creditbalance; // credit card balnac
};