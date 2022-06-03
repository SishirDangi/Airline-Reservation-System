#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

void mainMenu();

class Management
{
public:
    Management()
    {
        mainMenu();
    }
};

class Details
{
public:
    static string name, gender;
    int phoneNo;
    int age;
    string add;
    static int cId;
    char arr[100];

    void information()
    {
        cout << "Enter the customer id" << endl;
        cin >> cId;
        cout << "\nEnter the name: " << endl;
        cin >> name;
        cout << "\nEnter the age: " << endl;
        cin >> age;
        cout << "\nAddress: "<<endl;
        cin >> add;
        cout << "\nGender: "<<endl;
        cin >> gender;
        cout << "\tYour details are saved with us" << endl;
    }
};
int Details::cId;
string Details::name;
string Details::gender;

class Registration
{
public:
    static int choice;
    int choice1;
    int back;
    static float charges;
    void flights()
    {
        string flight[] = {"Dubai", "Canada", "Australia", "America", "Nepal", "China"};
        for (int i = 0; i < 6; i++)
        {
            cout << i + 1 << " flight to " << flight[i] << endl;
        }
        cout << "Welcome to the Airlines" << endl;
        cout << "Press the number of your preferred destination to book the flight" << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            cout << "___________ WELCOME TO DUBAI EMIRATES __________" << endl;
            cout << "Fly the Friendly Skies" << endl;
            cout << "Following are the flights" << endl;

            cout << "1. Dub - 498" << endl;
            cout << "\t02/06/2022 8:00 A.M 10hrs Rs.60,000" << endl;
            cout << "2. Dub - 223" << endl;
            cout << "\t12/12/2022 1:00 A.M 12hrs Rs.40,000" << endl;
            cout << "3. Dub - 594" << endl;
            cout << "\t01/06/2022 8:00 A.M 8hrs Rs.90,000" << endl;

            cout << "Select the flight you want to book" << endl;
            cin >> choice1;
            if (choice1 == 1)
            {
                charges = 60000;
                cout << "\nYou have successfully booked the flight Dub-498" << endl;
                cout << "You can go back to menu and take the ticket" << endl;
            }
            else if (choice1 == 2)
            {
                charges = 40000;
                cout << "\nYou have successfully booked the flight Dub-223" << endl;
                cout << "You can go back to menu and take the ticket" << endl;
            }
            else if (choice1 == 3)
            {
                charges = 90000;
                cout << "\nYou have successfully booked the flight Dub-594" << endl;
                cout << "You can go back to menu and take the ticket" << endl;
            }

            else
            {
                cout << "Invalid input, shifting to the previous menu" << endl;
                flights();
            }
            cout << "Press any key to go back to the main menu" << endl;
            cin >> back;
            if (back == 1)
            {
                mainMenu();
            }
            else
            {
                mainMenu();
            }
        }
        case 2:
        {
            cout << "___________ WELCOME TO CANADIAN AIRLINES __________" << endl;
            cout << "Fly the Friendly Skies" << endl;
            cout << "Following are the flights" << endl;

            cout << "1. CA - 758" << endl;
            cout << "\t02/01/2023 8:00 A.M 15hrs Rs.60,000" << endl;
            cout << "2. CA - 231" << endl;
            cout << "\t30/12/2022 1:00 A.M 19hrs Rs.40,000" << endl;
            cout << "3. CA - 354" << endl;
            cout << "\t23/12/2022 8:00 A.M 18hrs Rs.90,000" << endl;

            cout << "Select the flight you want to book" << endl;
            cin >> choice1;
            if (choice1 == 1)
            {
                charges = 60000;
                cout << "\nYou have successfully booked the flight CA-758" << endl;
                cout << "You can go back to menu and take the ticket" << endl;
            }
            else if (choice1 == 2)
            {
                charges = 40000;
                cout << "\nYou have successfully booked the flight CA-231" << endl;
                cout << "You can go back to menu and take the ticket" << endl;
            }
            else if (choice1 == 3)
            {
                charges = 90000;
                cout << "\nYou have successfully booked the flight CA=354" << endl;
                cout << "You can go back to menu and take the ticket" << endl;
            }

            else
            {
                cout << "Invalid input, shifting to the previous menu" << endl;
                flights();
            }
            cout << "Press any key to go back to the main menu" << endl;
            cin >> back;
            if (back == 1)
            {
                mainMenu();
            }
            else
            {
                mainMenu();
            }
        }
        case 3:
        {

            cout << "___________ WELCOME TO AUSTRALIAN AIRLINES __________" << endl;
            cout << "Fly the Friendly Skies" << endl;
            cout << "Following are the flights" << endl;

            cout << "1. AUS - 765" << endl;
            cout << "\t02/06/2022 8:00 A.M 10hrs Rs.60,000" << endl;
            cout << "2. AUS - 533" << endl;
            cout << "\t12/12/2022 1:00 A.M 12hrs Rs.40,000" << endl;
            cout << "3. AUS - 980" << endl;
            cout << "\t01/06/2022 8:00 A.M 8hrs Rs.90,000" << endl;

            cout << "Select the flight you want to book" << endl;
            cin >> choice1;
            if (choice1 == 1)
            {
                charges = 60000;
                cout << "\nYou have successfully booked the flight AUS-765" << endl;
                cout << "You can go back to menu and take the ticket" << endl;
            }
            else if (choice1 == 2)
            {
                charges = 40000;
                cout << "\nYou have successfully booked the flight AUS-533" << endl;
                cout << "You can go back to menu and take the ticket" << endl;
            }
            else if (choice1 == 3)
            {
                charges = 90000;
                cout << "\nYou have successfully booked the flight AUS-980" << endl;
                cout << "You can go back to menu and take the ticket" << endl;
            }

            else
            {
                cout << "Invalid input, shifting to the previous menu" << endl;
                flights();
            }
            cout << "Press any key to go back to the main menu" << endl;
            cin >> back;
            if (back == 1)
            {
                mainMenu();
            }
            else
            {
                mainMenu();
            }
        }
        case 4:
        {

            cout << "___________ WELCOME TO US AIRWAYS __________" << endl;
            cout << "Fly the Friendly Skies" << endl;
            cout << "Following are the flights" << endl;

            cout << "1. US - 598" << endl;
            cout << "\t02/06/2022 8:00 A.M 20hrs Rs.60,000" << endl;
            cout << "2. US - 145" << endl;
            cout << "\t12/US2/2022 1:00 A.M 22hrs Rs.40,000" << endl;
            cout << "3. US - 895" << endl;
            cout << "\t01/06/2022 8:00 A.M 18hrs Rs.90,000" << endl;

            cout << "Select the flight you want to book" << endl;
            cin >> choice1;
            if (choice1 == 1)
            {
                charges = 60000;
                cout << "\nYou have successfully booked the flight US-598" << endl;
                cout << "You can go back to menu and take the ticket" << endl;
            }
            else if (choice1 == 2)
            {
                charges = 40000;
                cout << "\nYou have successfully booked the flight US-145" << endl;
                cout << "You can go back to menu and take the ticket" << endl;
            }
            else if (choice1 == 3)
            {
                charges = 90000;
                cout << "\nYou have successfully booked the flight US-895" << endl;
                cout << "You can go back to menu and take the ticket" << endl;
            }

            else
            {
                cout << "Invalid input, shifting to the previous menu" << endl;
                flights();
            }
            cout << "Press any key to go back to the main menu" << endl;
            cin >> back;
            if (back == 1)
            {
                mainMenu();
            }
            else
            {
                mainMenu();
            }
        }
        case 5:
        {

            cout << "___________ WELCOME TO NEPAL AIRLINES __________" << endl;
            cout << "Fly the Friendly Skies" << endl;
            cout << "Following are the flights" << endl;

            cout << "1. NEP - 213" << endl;
            cout << "\t02/06/2022 8:00 A.M 10hrs Rs.60,000" << endl;
            cout << "2. NEP - 123" << endl;
            cout << "\t12/12/2022 1:00 A.M 12hrs Rs.40,000" << endl;
            cout << "3. NEP - 989" << endl;
            cout << "\t01/06/2022 8:00 A.M 8hrs Rs.90,000" << endl;

            cout << "Select the flight you want to book" << endl;
            cin >> choice1;
            if (choice1 == 1)
            {
                charges = 60000;
                cout << "\nYou have successfully booked the flight NEP-213" << endl;
                cout << "You can go back to menu and take the ticket" << endl;
            }
            else if (choice1 == 2)
            {
                charges = 40000;
                cout << "\nYou have successfully booked the flight NEP-123" << endl;
                cout << "You can go back to menu and take the ticket" << endl;
            }
            else if (choice1 == 3)
            {
                charges = 90000;
                cout << "\nYou have successfully booked the flight NEP-989" << endl;
                cout << "You can go back to menu and take the ticket" << endl;
            }

            else
            {
                cout << "Invalid input, shifting to the previous menu" << endl;
                flights();
            }
            cout << "Press any key to go back to the main menu" << endl;
            cin >> back;
            if (back == 1)
            {
                mainMenu();
            }
            else
            {
                mainMenu();
            }
        }
        case 6:
        {
            cout << "___________ WELCOME TO CHINA AIRLINES __________" << endl;
            cout << "Fly the Friendly Skies" << endl;
            cout << "Following are the flights" << endl;

            cout << "1. CH - 1221" << endl;
            cout << "\t02/06/2022 8:00 A.M 10hrs Rs.60,000" << endl;
            cout << "2. CH - 9012" << endl;
            cout << "\t12/12/2022 1:00 A.M 12hrs Rs.40,000" << endl;
            cout << "3. CH - 1231" << endl;
            cout << "\t01/06/2022 8:00 A.M 8hrs Rs.90,000" << endl;

            cout << "Select the flight you want to book" << endl;
            cin >> choice1;
            if (choice1 == 1)
            {
                charges = 60000;
                cout << "\nYou have successfully booked the flight CH-1221" << endl;
                cout << "You can go back to menu and take the ticket" << endl;
            }
            else if (choice1 == 2)
            {
                charges = 40000;
                cout << "\nYou have successfully booked the flight CH-9012" << endl;
                cout << "You can go back to menu and take the ticket" << endl;
            }
            else if (choice1 == 3)
            {
                charges = 90000;
                cout << "\nYou have successfully booked the flight CH-1231" << endl;
                cout << "You can go back to menu and take the ticket" << endl;
            }

            else
            {
                cout << "Invalid input, shifting to the previous menu" << endl;
                flights();
            }
            cout << "Press any key to go back to the main menu" << endl;
            cin >> back;
            if (back == 1)
            {
                mainMenu();
            }
            else
            {
                mainMenu();
            }
        }
        default:
        {
            cout << "Invaild input, shifting you to the main menu !" << endl;
            mainMenu();
            break;
        }
        }
    }
};
float Registration::charges;
int Registration::choice;
class Ticket : public Registration, Details
{
public:
    void Bill()
    {
        string destination = "";
        ofstream outf("data.txt");
        {
            outf << "_________________ CSIT AIRLINES ___________________" << endl;
            outf << "___________________ TICKET ________________________" << endl;
            outf << "____________________________________________________" << endl;
            outf << "Customer ID:" << Details::cId << endl;
            outf << "Customer Name:" << Details::name << endl;
            outf << "Customer Gender:" << Details::gender << endl;
            outf << "\t\tDescription" << endl
                 << endl;

            if (Registration::choice == 1)
            {
                destination = "Dubai";
            }
            else if (Registration::choice == 2)
            {
                destination = "Canada";
            }
            else if (Registration::choice == 3)
            {
                destination = "Australia";
            }
            else if (Registration::choice == 4)
            {
                destination = "America";
            }
            else if (Registration::choice == 5)
            {
                destination = "Nepal";
            }
            else if (Registration::choice == 6)
            {
                destination = "China";
            }
            outf << "Destination\t\t" << destination << endl;
            outf << "Flight Cost: \t\t"<<charges << endl;
        }
        outf.close();
    }
    void disBill()
    {
        ifstream ifs("data.txt");
        {
            if (!ifs)
            {
                cout << "File error!" << endl;
            }
            while (!ifs.eof())
            {
                ifs.getline(arr, 100);
                cout << arr << endl;
            }
        }
        ifs.close();
    }
};
void mainMenu()
{
    int lchoice;
    int schoice;
    int back;
    cout << "\t_____________________ CSIT AIRLINES _____________________\n"
         << endl;
    cout << "\t_____________________ MAIN MENU _________________________\n"
         << endl;
    cout << "\t_________________________________________________________" << endl;
    cout << "\t|\t\t\t\t\t\t\t|" << endl;
    cout << "\t|\t Press 1 -> To add the Customer Details   \t|" << endl;
    cout << "\t|\t Press 2 -> For Flight Registration       \t|" << endl;
    cout << "\t|\t Press 3 -> For Ticket and Charges        \t|" << endl;
    cout << "\t|\t Press 4 -> To exit                       \t|" << endl;
    cout << "\t|\t\t\t\t\t\t\t|" << endl;
    cout<<"\t---------------------------------------------------------"<<endl;
    cout << "\t_________________________________________________________" << endl;

    cout << "Enter the choice: " << endl;
    cin >> lchoice;

    Details d;
    Registration r;
    Ticket t;

    switch (lchoice)
    {
    case 1:
    {
        cout << "_________ Customer Service __________\n"
             << endl;
        d.information();
        cout << "Press any key to go back to the main menu"<<endl;
        cin >> back;
        if (back == 1)
        {
            mainMenu();
        }
        else
        {
            mainMenu();
        }
        break;
    }
    case 2:
    {
        cout << "_________  Book a flight using this system __________\n"
             << endl;
        r.flights();
        break;
    }
    case 3:
    {
        cout << "_________  Get your ticket __________\n"
             << endl;
        t.Bill();
        cout << "Your ticket has been printed, you can collect it\n"
             << endl;
        cout << "Press 1 to display your ticket" << endl;
        cin >> back;
        if (back == 1)
        {
            t.disBill();
            cout << "Press any key to go back to the main menu" << endl;
            cin >> back;
            if (back == 1)
            {
                mainMenu();
            }
            else
            {
                mainMenu();
            }
        }
        else
        {
            mainMenu();
        }
        break;
    }
    case 4:
    {
        cout << "\n\n\t\t___________THANK YOU____________" << endl;
        exit(0); 
    }
    default:
    {
        cout << "Invalid input, please try again!" << endl;
        mainMenu();
        break;
    }
    }
}

int main()
{
    Management Mobj;
    return 0;
}
