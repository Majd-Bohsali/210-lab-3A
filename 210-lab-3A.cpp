// COMSC-210 | Lab 3A | Majd Bohsali
// IDE used: Visual Studio Code
#include <iostream>
#include <vector> 
#include <string>
using namespace std; 

// defines a struct datatype with attributes for the name, address, carryingCapacity, avgRating, and openHours
struct Restaurant { 
    string name; 
    string address; 
    int carryingCapacity; 
    float avgRating; 
    string cuisine;   
};

// returnRestaurantStruct() creates a Restaurant struct and collects attribute values from user
// arguments: none
// returns: a populated Restaurant struct
Restaurant returnRestaurantStruct() { 
    const int CHAR_SKIP = 100; 
    Restaurant tempRestaurant; 
    cout << "Enter the Restaurant's name: ";
    getline(cin, tempRestaurant.name);
    cout << "Enter the Restaurant's address: ";
    getline(cin, tempRestaurant.address);
    cout << "What are the restaurant's cuisine: ";
    getline(cin, tempRestaurant.cuisine);

    // only allows carrying capacity to be positive integers
    cout << "What is the carrying capacity of the restaurant: "; 
    double tempCarryingCpactiyInput; 
    cin >> tempCarryingCpactiyInput; 
    while (tempCarryingCpactiyInput <= 0 || tempCarryingCpactiyInput != (int)tempCarryingCpactiyInput) { 
        cout << "Invalid input, please enter a positive integer: ";
        cin.clear();
        cin.ignore(CHAR_SKIP, '\n');
        cin >> tempCarryingCpactiyInput; 
    }
    tempRestaurant.carryingCapacity = (int)tempCarryingCpactiyInput;
    // clears any extra input
    cin.ignore(CHAR_SKIP, '\n');

    // only allows the average rating to be a positive number
    cout << "What is the average rating score of the restaurant: "; 
    cin >> tempRestaurant.avgRating; 
    while (tempRestaurant.avgRating <= 0) {
        cout << "Invalid input, please enter a positive number: ";
        cin.clear();
        cin.ignore(CHAR_SKIP, '\n');
        cin >> tempRestaurant.avgRating; 
    } 
    // clears any extra input
    cin.ignore(CHAR_SKIP, '\n');

    return tempRestaurant; 
}

// printRestaurantDetails() displays all restaurant details 
// arguments: Restaurant object to display content of 
// returns: void (nothing)
void printRestaurantDetails(Restaurant rest) {
    cout << endl << "Restaurant Details: " << endl; 
    cout << "Name: " << rest.name << endl;  
    cout << "Address: " << rest.address << endl;
    cout << "Cuisine: " << rest.cuisine << endl; 
    cout << "Capacity: " << rest.carryingCapacity << endl;
    cout << "Rating: " << rest.avgRating << endl << endl; 
}

int main() {
    for (int i = 0; i < 4; i++) { 
        cout << "Enter details for Restaurant " << i + 1 << endl; 
        Restaurant restaurant1 = returnRestaurantStruct();
        printRestaurantDetails(restaurant1);
    }
    return 0; 
}