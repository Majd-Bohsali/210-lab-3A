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

// returnRestaurantStruct() creates a Restaurant struct and collects attribute values from user
// arguments: none
// returns: a populated Restaurant struct
Restaurant returnRestaurantStruct() { 
    Restaurant tempRestaurant; 
    cout << "Enter the Restaurant's name: ";
    getline(cin, tempRestaurant.name);
    cout << "Enter the Restaurant's address: ";
    getline(cin, tempRestaurant.address);
    cout << "What are the restaurant's opening hours: ";
    getline(cin, tempRestaurant.openHours);
    cout << "What is the carrying capacity of the restaurant: "; 
    cin >> tempRestaurant.carryingCapacity; 
    cout << "What is the average rating score of the restaurant: "; 
    cin >> tempRestaurant.avgRating; 

    return tempRestaurant; 
}

int main() {
    returnRestaurantStruct();
    return 0; 
}