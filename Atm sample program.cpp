#include <iostream>
using namespace std;
// ATM Application
void showMenu(){
    cout<<"************MENU************"<<endl;
    cout<<"1. Check balance" << endl;
    cout<<"2. Deposit "<< endl;
    cout<<"3. Withdraw"<< endl;
    cout<<"4. Exit"<< endl;

    cout<<"****************************"<< endl;
}
 int main()  
 {
    int option;
    double balance = 1800;

    do{

    showMenu();
    cout<<" option:";
    cin>> option;
    system("cls");

    switch(option){
    case 1: cout<<" Balance is : " << balance << "$" << endl; break;
    case 2: cout << "Deposit amount:";
        double depositAmount;
        cin>> depositAmount;
        balance += depositAmount;
        break;
    case 3: cout << "Withdraw amount:";
        double withdrawAmount;
        cin>> withdrawAmount;
            
            
        if(withdrawAmount < balance)
            balance -= withdrawAmount;
                
        else
            cout <<" Insufficient Balance"<< endl;
            break;

        }
        } while(option!= 4);
        
    

        system("pause>0");
}
