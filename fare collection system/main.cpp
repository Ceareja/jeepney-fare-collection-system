#include <iostream>

using namespace std;
int regularRevenue=0, discountedRevenue=0, regularPassenger=0, discountedPassenger=0;

class myClasses
{
public:

void destinationMatrix()
{
    string locations[14]={"Villa Padua", "Panikihan", "Seawall", "Camohaguin", "Hagakhakin", "Binambang", "San Vicente", "Mal-ay", "Sugod", "Pansol", "Calantipayan", "Manguisian", "Del Pillar", "Lopez"};
    int fairs[14]={10,18,20,22,24,25,30,32,34,35,40,42,44,45};
    int location, passengerCount,discount, subtotal, total;
    char  passengerType, tryAgain='y', exit='y';


    do{
        cout << "Destination Matrix" << endl << endl;
    cout << "\t\t\t\t\t\tStudent\nLocation\t\tRegular\t\t\tSenior\n\t\t\t\t\t\tPWD" << endl << endl;
    cout << "1-Villa Padua\t\t10.00\t\t\t9.00\n2-Panikihan\t\t18.00\t\t\t17.00\n3-Seawall\t\t20.00\t\t\t18.00\n4-Camohaguin\t\t22.00\t\t\t20.00\n5-Hagakhakin\t\t24.00\t\t\t22.00\n6-Binambang\t\t25.00\t\t\t23.00\n7-San Vicente\t\t30.00\t\t\t27.00\n8-Mal-ay\t\t32.00\t\t\t29.00\n9-Sugod\t\t\t34.00\t\t\t31.00\n10-Pansol\t\t35.00\t\t\t32.00\n11-Calantipayan\t\t40.00\t\t\t36.00\n12-Manguisian\t\t42.00\t\t\t39.00\n13-Del Pillar\t\t44.00\t\t\t40.00\n14-Lopez\t\t34.00\t\t\t41.00\n\n";

    do
    {
        cout << "Enter your choice: ";
        cin >> location;
    }while(location>14||location<=0);
    cout << "No. of passenger/s: ";
    cin >> passengerCount;
    cout << "Student/Senior citizen/PWD? Type <Y> if YES or <N> if NO: ";
    cin >> passengerType;

    if(passengerType=='y'||passengerType=='Y')
    {
        discount=fairs[location-1]*.10;
        subtotal=fairs[location-1]-discount;
        total=subtotal*passengerCount;
        cout << "\nTotal: " <<total << ".00";
        discountedRevenue+=total;
        discountedPassenger+=passengerCount;
        int payment=0, change=1;

        do
        {
            cout << "\nEnter Payment: ";
            cin >> payment;
            change=payment-total;

            if(change>=0)
            {
                cout << "Change: " << change;
            }
            else
            {
                cout << "\nInsufficient amount! Try again.";
            }
        }while(change<0);

    }
    else
    {
        total=fairs[location-1]*passengerCount;
        cout << "\nTotal: " <<total << ".00";
        regularRevenue+=total;
        regularPassenger+=passengerCount;
        int ch=1, paym=0;
        do
        {
            cout << "\nEnter Payment: ";
            cin >> paym;
            ch=paym-total;

            if(ch>=0)
            {
                cout << "Change: " << ch;
            }
            else
            {
                cout << "\nInsufficient amount! Try again.";
            }
        }while(ch<0);

    }

    cout << "\nTHANKYOU! Try again? Type <Y> or <N>";
    cin >> tryAgain;
    total=0;
    discount=0;
    subtotal=0;
    location=0;
    passengerCount=0;
    system("CLS");


    }while(tryAgain=='y'||tryAgain=='Y');


    cout << "\nExit destination matrix? <Y> or <N>";
    cin >> exit;
    if(exit=='y'||exit=='Y')
    {
        system("CLS");
        intro();
    }
    else
    {
        system("CLS");
        destinationMatrix();
    }


    return;
}

void transactions()
{
    int adminAction;


    cout << "What do you want to do? ";
    cout << "\n1-View total revenue\n2-View total passenger\n3-Exit\n\nEnter choice: ";
    cin >> adminAction;

    if(adminAction==1)
    {
        cout << "******************** Revenue ********************\n\n";
        cout << "\ntotal discounted revenue:\t" << discountedRevenue << ".00";
        cout << "\ntotal regular revenue:\t\t" << regularRevenue << ".00";
        cout << "\n-------------------------------------------------\n";
        cout << "Total revenue:\t\t\t" << discountedRevenue+regularRevenue << ".00";
        cout << "\n\n-------------------------------------------------\n\n";
        transactions();

    }
    else if(adminAction==2)
    {
        cout << "******************* Passenger *******************\n\n";
        cout << "\ntotal discounted passenger:\t" << discountedPassenger << " passenger/s";
        cout << "\ntotal regular passenger:\t" << regularPassenger << " passenger/s";
        cout << "\n-------------------------------------------------\n";
        cout << "Total passenger/s:\t\t" << discountedPassenger+regularPassenger << " passenger/s";
        cout << "\n\n-------------------------------------------------\n\n";
        transactions();
    }
    else if(adminAction==3)
    {
        system("CLS");
        intro();
    }
    else
    {
        cout << "Invalid entry.";
    }
}

void admin()
{
    string username, password;
    cout << "Please enter your username and password" << endl;
    cout << "Username: ";
    cin>> username;
    cout << "Password: ";
    cin >> password;

    if(username=="admin"&&password=="admin")
    {
        cout << "Login successful!" << endl;
        system("pause");
        system("CLS");
        transactions();
    }
    else{
        cout << "Invalid username or password.\n\n";
        system("PAUSE");
        system("CLS");
        admin();
    }
    return;
}

void intro()
{
    int who;
    cout << "1 - Admin" << endl;
    cout << "2 - User" << endl;
    cout << "3 - Exit" << endl;
    cout << "Enter choice: ";
    cin >> who;

    myClasses accessClass;
    if(who==1)
    {
        system("CLS");
        accessClass.admin();
    }
    else if(who==2)
    {
        system("CLS");
        accessClass.destinationMatrix();
    }
    else if(who==3)
    {
        char go;
        cout << "Exit program? <Y> or <N> ";
        cin >> go;

        if(go=='y'||go=='Y')
        {
            cout << "Okay.";
            exit(0);
        }
        else if(go=='n'||go=='N')
        {
            system("PAUSE");
            cout << endl;
            system("CLS");
            intro();
        }
    }
    else
    {
        cout << "Invalid entry.\n";
        system("PAUSE");
        cout << endl;
        system("CLS");
        intro();
    }
    return;
}


};

int main()
{
    cout << "\n\n\n\t\t\t\t-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-";
    cout << "\n\t\t\t\t| welcome to PAY FAire a Jeepney fare collection system |\n";
    cout << "\t\t\t\t-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n\n";
    cout << "\t\t\t\t\tProject by: Clarisse T. Espalmado\n\n\t\t\t\t\t";
    system("PAUSE");
    system("CLS");

    myClasses accessClass1;
    accessClass1.intro();
    return 0;
}
