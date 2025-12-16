// ATM System Simulation
#include<iostream>
using namespace std;
int main(){

  int pin, attempts = 0 ;
  int fixedpin = 1234;
  float balance = 5000.0;
  float amount = 0;
  float deposit, withdraw;
  char lastTransactionType = 'N';
  float lastTransactionAmount = 0;
  bool isRunning = true; //whether menu should keep repeating or not

  //welcome screen
  cout<< "*************************************\n\t Welcome to ATM\t\n*************************************\n ";
  cout<< "Please enter your 4-digit PIN. \n";

  //pin verification 
  while(attempts<3){
    cout<<"Enter PIN: ";
    cin>>pin;

    if (pin == fixedpin){
        cout<<"PIN Verified Successfully!\n";
        break;
    } else {
        attempts++;
        cout<<"Incorrect PIN. Attempts left: "<< (3 - attempts) << "\n";
    }
  }

  if (attempts == 3){
    cout<<"\nToo many wrong Attempts. ATM Locked.\n\tStart Again!!";
     return 0;
  }
int choice;
 do{
  cout<<"\nMAIN MENU\n";
  cout<<"1. Check Balance\n";
  cout<<"2. Deposit Money\n";
  cout<<"3. Withdraw Money\n";
  cout<<"4. Mini Statement\n";
  cout<<"5. Exit\n";
  cout<<"Enter your Choice: ";
  cin>>choice;
  //because of isRunning The all statement is repeating again and again till we write isRunning False
  switch (choice){

    case 1://to show current balance code
    cout<<"Your current balance is: "<<balance<<endl;
    break;

    case 2://deposit money code
    cout<<"Enter amount to deposit: ";
    cin>>deposit;

    if(deposit<=0){
      cout<<"Invalid amount. Try again.\n";
    } else if (deposit > 5000) {                   // Deposit overflow 
      cout<<"Error: You cannot deposit more than 5000 at once!\n";
    }
    else{
      balance = balance + deposit;
      lastTransactionType = 'D';
      lastTransactionAmount = deposit;
      cout << "Deposit successful! New Balance: "<<balance<<endl;
    } break;

    case 3://withdraw code
    cout <<"Enter amount to withdraw: ";
    cin >>withdraw;
    if (withdraw > 0  && withdraw <= balance) {
      balance = balance - withdraw;
      lastTransactionType  = 'W';
      lastTransactionAmount =- withdraw;
      cout<< "Withdraw Done: "<< balance<< endl;
     }
     else{
      cout<<"Your entered value is wrong. Try again!\n " ; // withdraw overflow
     }
    break;

   case 4://mini statement code
   if(lastTransactionType == 'N'){
    cout<<"No Transcation performed yet.\n";
   } else{
    cout<<"Last transaction: ";
    if(lastTransactionType=='D')
    cout<<"Deposit: ";
     else if (lastTransactionType == 'W')
    cout << "Withdraw: ";
    cout << lastTransactionAmount << endl;

  // prefix/postfix operator
    cout << "Balance Preview (Postfix ++): " << balance++ << endl;
    cout << "Balance after Postfix: " << balance << endl;
    cout << "Balance Preview (Prefix --): " << --balance << endl;
    cout << "Balance after Prefix: " << balance << endl;
    }
    break;   
    
    case 5:
    cout<<"Thank you for using my Atm. Goodbye!\n*************************************\n";
    isRunning = false; //stop the loop
    break;

    default:
    cout<<"Invalid choice. Please try again.\n";}
 }
  while(isRunning);
  return 0;
}

 