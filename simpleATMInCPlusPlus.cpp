#include<iostream>
using namespace std;

void showMenu()
{

    cout<<" ********** MAIN MENU ************* "<<endl;
    cout<<"1. CHECK BALANCE "<<endl;
    cout<<"2. DEPOSIT "<<endl;
    cout<<"3. WITHDRAW "<<endl;
    cout<<"4. EXIT "<<endl;
    cout<<" ********************************** "<<endl;
}

int main()
{

    system("COLOR 5f");

    int option;
    double balance = 0;


    do {

        showMenu();
        cout<<"OPTION"<<endl;
        cin>>option;

        system("cls");


        switch(option)
        {
            case 1 : cout<<"BALANCE IS: $"<<balance<<endl;
            break;

            case 2 : cout<<" DEPOSIT AMOUNT IS: $";
            double depositAmount;
            cin>>depositAmount;
            balance = balance + depositAmount;
            break;

            case 3 : cout<<"WITHDRAW AMOUNT IS: $";
            double withdrawAmount;
            cin>>withdrawAmount;
            if(withdrawAmount <= balance )
                balance = balance - withdrawAmount;
            else
                cout<<"NOT ENOUGH MONEY !"<<endl;
            break;
        }

    }while (option != 4);

    return 0;
}
