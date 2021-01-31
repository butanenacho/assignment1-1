//INCLUDING HEADER FILES
#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
/*
Description: This code works for INF SUPERMARKET
*/
int main()
{
//VARIABLE DECLARATION/INITIALIZATION
string customer_name;
int customer_id;
int quantity;
string buy_item;
double customer_money;
double balance;
const double vat=0.12;
double printer_price = 650;
double phone_price = 350;
double table_price = 95;
string item1="Printer";
string item2="Phone";
string item3="Table";
double total_cost;
double total_amount_paid;
//END OF VARIABLE DECLARATION
//SERVICES OFFERED IN THE COMPANY
cout << "We offer two services in our company\n"<<endl;
cout << "1.Purchasing an item\n"<<endl;
cout << "2.Making Enquiries\n"<<endl;
cout << "But for Now, you can only purchase an item\n"<<endl;
//CUSTOMER'S NAME
cout << "Please what is your Full Name:\n"<<endl;
getline(cin, customer_name);
cout <<endl;
//CUSTOMER'S UNIQUE ID
cout <<"Please Kindly enter your ID in number\n"<<endl;
cin >> customer_id;
cout <<endl;
