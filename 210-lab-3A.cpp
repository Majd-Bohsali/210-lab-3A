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
    string openHours;   
};

Restaurant returnRestarantStruct() { 
    Restaurant tempRestaurant; 
    cout << "Enter the Restaurant's name: ";
    getline(cin, tempRestaurant.name);
    cout << "Enter the Restaurant's address: ";
    getline(cin, tempRestaurant.address);
    cout << "What is the carrying capacity of the restaurant: "; 
    cin >> tempRestaurant.carryingCapacity; 
    cout << "What is the average rating score of the restaurant: "; 
    cin >> tempRestaurant.avgRating; 
    cout << "What are the restaurant's opening hours: ";
    getline(cin, tempRestaurant.openHours);
    // checks outputs: 
    cout << tempRestaurant.name << ", " << tempRestaurant.address << ", " 
        << tempRestaurant.carryingCapacity << ", " << tempRestaurant.avgRating << ", ", tempRestaurant.openHours;

    return tempRestaurant; 
}

int main() {
    returnRestarantStruct();
    return 0; 
}