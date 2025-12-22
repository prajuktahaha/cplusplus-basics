#include<iostream>
using namespace std;
class Account{
    public : 
    string name;
    int accountNumber;
    void getAccountDetails(){
        cout << "Enter name of the user: " << endl;
        cin >> name;
        cout << "Enter the accout number: " << endl;
        cin >> accountNumber;
    }
};

class Transaction {
    public :
    int balance;
    int amount;
    void getBalance(){
        cout << "Enter the current balance : " << endl;
        cin >> balance;
    }
    void deposit(){
        cout << "Enter the amount u want to deposit : " << endl;
        cin >> amount;
        cout << amount + balance << " deposited succesfully" <<endl;
    }
    void withdraw(){
        int amount;
        cout << "Enter the amount u want to withdraw : " << endl;
        cin >> amount;
        if(amount <= balance){
            balance = balance - amount;
        }
        else{
            cout << "Sorry insufficent balance" << endl;
        }
    }
    void finalBalance(){
        cout << "dear user ur current balance is : " << balance - amount << endl;

    }
};
class Bank : public Transaction , public Account{
    public :
    void displayDetails(){
        cout << "BANK DETAILS" << endl;
        cout << "Accout holder name : " << name << endl;
        cout << "Account number : " << accountNumber << endl;
        cout << "Final balance : " << balance - amount << endl;
    }
};
int main(){
    Bank obj;
    obj.getAccountDetails();
    obj.getBalance();
    obj.deposit();
    obj.withdraw();
    obj.finalBalance();
    return 0;
}    
