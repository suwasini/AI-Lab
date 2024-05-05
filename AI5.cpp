#include <iostream>
#include <string>
using namespace std;
void displayMainMenu() {
cout << "Welcome to MSRTC!" << endl;
cout << "1. Book Ticket" << endl;
cout << "2. Check booking Status" << endl;
cout << "3. Provide Feedback" << endl;
cout << "4. Exit" << endl;
}
void BookTicket() {
cout << "\n--- MSRTC ---" << endl;
cout << "1. PUNE" << endl;
cout << "2. MUMBAI" << endl;
cout << "3. MANALI" << endl;
cout << "Enter the number corresponding to your choice: ";
int choice;
cin >> choice;
int NO;
cout << "Enter A NO.): ";
cin >> NO;
cout << "\nThank you! Your " << NO<< " ";
switch(choice) {
case 1:
cout << "PUNE";
break;
case 2:
cout << "MUMBAI";
break;
case 3:
cout << "MANALI";
break;
default:
cout << "Unknown";
}
cout << " Ticket has been book." << endl;
}
void checkbookingStatus() {
string bookingCount;
cout << "Enter your BOOKING COUNT: ";
cin >> bookingCount;
cout << "Order " << bookingCount << " is being Booked!" << endl;
}
void provideFeedback() {
string feedback;
cout << "Please provide your feedback: ";
cin.ignore(); // Clear buffer before getline
getline(cin, feedback);
cout << "Thank you for your feedback!" << endl;
}
int main() {
while (true) {
displayMainMenu();
cout << "Select an option: ";
int option;
cin >> option;
switch(option) {
case 1:
BookTicket();
break;
case 2:
checkbookingStatus();
break;
case 3:
provideFeedback();
break;
case 4:
cout << "Thank you for book Ticket. Goodbye!" << endl;
return 0;
default:
cout << "Invalid option. Please try again." << endl;
}
}
return 0;
}

