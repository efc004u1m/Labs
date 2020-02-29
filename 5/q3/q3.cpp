#include <iostream>
#include <string>
#include "Account.h"
using namespace std;

Account :: Account(string id, string name) {
    this->id = id;
    this->name = name;
}
Account :: Account(string id, string name, int balance) {
    this->id = id;
    this->name = name;
    this->balance = balance;
}

string Account :: getID() {
    return id;
}

string Account :: getName() {
    return name;
}

int Account :: getBalance() {
    return balance;
}

int Account :: credit(int amount) {
    balance += amount;
    return balance;
}

int Account :: debit(int amount) {
    if (amount <= balance) {
        balance -= amount;
    } else {
        cout << "Amount exceeded balance";
    }
    return balance;
}

int Account :: transferTo(Account& acc, int amount) {
    if (amount <= balance) {
        acc.credit(amount);
        this->debit(amount);
    } else {
        cout << "Amount exceeded balance";
    }
    return balance;
}

string Account :: toString() {
    return "Account[id=" + id + ",name=" + name + ",balance=" + to_string(balance) + "]";
}