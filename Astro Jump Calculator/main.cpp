#include <iostream>
#include <map>
#include <string>
#include "bounce_prices.h"

using namespace std;

bool handledDelivery = false;
bool handledCleaning = false;

// Function to calculate the total payment based on delivery and cleaning
double calculatePayment(double deliveryPrice, bool cleaning) {
    double payment = deliveryPrice;
    if (cleaning) {
        payment += calculateCleaningPrice(deliveryPrice);
    }
    return payment;
}

// Function to handle the input for each stop
void handleStop() {
    string bounceName;
    double deliveryPrice;
    char tipType;
    double tipAmount = 0.0;

    if (!handledDelivery && !handledCleaning) {
        cout << "Did you handle delivery, cleaning, or both today? (Enter 'd' for delivery, 'c' for cleaning, 'b' for both): ";
        char action;
        cin >> action;

        if (action == 'd' || action == 'b') {
            handledDelivery = true;
        }
        if (action == 'c' || action == 'b') {
            handledCleaning = true;
        }
    }

    if (handledDelivery) {
        cout << "Enter the item name for delivery: ";
        cin.ignore();
        getline(cin, bounceName);

        // Look up the bounce price from the map
        auto it = BOUNCE_PRICES.find(bounceName);
        if (it != BOUNCE_PRICES.end()) {
            deliveryPrice = it->second;
            cout << "Delivery price for " << bounceName << " is $" << deliveryPrice << endl;
        } else {
            cout << "Bounce name not found. Please check the name and try again." << endl;
            return;
        }

        cout << "Did you receive a tip? (y/n): ";
        char receivedTip;
        cin >> receivedTip;

        if (receivedTip == 'y') {
            cout << "Was the tip on file or cash? (Enter 'f' for file, 'c' for cash): ";
            cin >> tipType;

            cout << "Enter the amount of the tip: $";
            cin >> tipAmount;
        }

        double totalPayment = calculatePayment(deliveryPrice, false) + tipAmount;
        cout << "Total payment for this stop (including tips): $" << totalPayment << endl;
    }

    if (handledCleaning) {
        cout << "Enter the bounce name cleaned: ";
        cin.ignore();
        getline(cin, bounceName);

        // Look up the bounce price from the map
        auto it = BOUNCE_PRICES.find(bounceName);
        if (it != BOUNCE_PRICES.end()) {
            deliveryPrice = it->second;
            cout << "Cleaning price for " << bounceName << " is $" << calculateCleaningPrice(deliveryPrice) << endl;
        } else {
            cout << "Bounce name not found. Please check the name and try again." << endl;
            return;
        }

        cout << "Cleaning at the warehouse does not include tips." << endl;
    }
}

int main() {
    char moreStops;
    double totalPayment = 0.0;

    do {
        handleStop();
        cout << "Do you have more stops to process? (y/n): ";
        cin >> moreStops;
    } while (moreStops == 'y');

    cout << "Total payment for all stops: $" << totalPayment << endl;

    return 0;
}
