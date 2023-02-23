#include <iostream>


using namespace std;

class Bank {
private:
    int acc;
    string name;
    float balance;

public:
    void openacc(){
    cout<<"Enter your account number: ";
    cin>>acc;
    cout<<"Enter your name: ";
    cin>> name;
    cout<<"Enter your balance: ";
    cin>>balance;}

    void showacc(){
    cout<< "Name: "<<name<<endl;
    cout<<"No.account: "<<acc<<endl;
    cout<<"You balance account: "<<balance<<endl;}

    void deposit(){
        float amt;
    cout<<"Deposit: ";
    cin>>amt;
    balance=balance+amt;
    }

    void withdraw(){
    float amt;
    cout<<"Withdraw: ";
    cin>>amt;
    if(amt>balance)
        cout<<"Not enough balance in your account";
    else
    balance=balance-amt;}
int Search(int);
    };

    int Bank::Search(int a)

 {

        if(acc==a){
            showacc();
            return(1);
        }
        return 0;
    }


int main()
{
Bank A[3];
int found=0, a,ch, i;
for(i=0;i<=2; i++)
{
    A[i].openacc();
}
do{
    cout<<"1: Display All"<<endl<<"2: Account No: "<<endl<<"3: Deposit"<<endl<<"4: Withdraw"<<endl<<"5: Exit"<<endl;
    cout<<"Input your choice: ";
    cin>>ch;

    switch(ch)
    {
    case 1:
        for(i=0; i<=2; i++){
     A[i].showacc();}

    break;

    case 2:

    cout<<"Account number: ";
    cin>>a;
    for(i=0;i<=2;i++){
            found= A[i].Search(a);
    if(found)
        break;
    } if(!found)
    cout<<"Record not found"<<endl;
    break;

    case 3:
        cout<<"Amount account number to deposit";
        cin>>a;
        for (i = 0; i <= 2; i++) {
                found = A[i].Search(a);
                if (found) {
                     A[i].deposit();
                    break;
                }
            }
            if (!found)
                cout << "Record not found" << endl;
          break;
    case 4:
            cout << "Account no. to withdraw  ";
            cin >> a;
            for (i = 0; i <= 2; i++) {
                found = A[i].Search(a);
                if (found) {
                     A[i].withdraw();
                    break;
                }
            }
            if (!found)
                cout << "Record not found" << endl;
            break;

            cout << "Have a nice day" << endl;
            break;

        default:
            cout << "Wrong Option" << endl;
        }
    } while (ch != 5);
    return 0;
}


