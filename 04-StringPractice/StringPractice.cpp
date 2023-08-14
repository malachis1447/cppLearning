/*
 * StringPractice.cpp
 * Kain M. Snyder
 * Mon Aug 14 2023 0308 MDT
 *
 * Practice with Strings
*/

#include <iostream>
using namespace std;

void StringPracticeCompany() {

   // Set Varaibles for various words in the company name, and combine them into a larger string

   string CompanyName01 = "Malachi ";
   string CompanyName02 = "Technologies";
   string CompanyName = CompanyName01.append(CompanyName02);
   cout << CompanyName;
   cout << "\n";

}

void StringPracticeUser() {

   // Ask user for their name, one part at a time, and print full name 

   string FirstName;
   cout << "Type your first name: ";
   cin >> FirstName; // Get user input for first name
   string LastName;
   cout << "\n Type your last name: ";
   cin >> LastName;
   cout << "\n Your full name is: ";
   cout << FirstName + " " + LastName;
}

int main() {

   cout << "\n This is a multi-function program, with the first part displaying the company name as follows: ";
   StringPracticeCompany();
   cout << "\n";

   cout << "\n And then asks for your name, and displays it back to you. \n";
   StringPracticeUser();
   return 0;

}