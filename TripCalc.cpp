
// TripCalc.cpp
// A C++ program to calculate mileage, trip distance, and fuel expense.

#include <iostream>
using namespace std;

int main() {
    char choice;
    float amountSpent, fuelRate, tripDistance, mileage, totalFuel, result;

    cout << "===============================" << endl;
    cout << "   🚗 Welcome to TripCalc 🚗" << endl;
    cout << "===============================" << endl;
    cout << "Select Your Option:" << endl;
    cout << "1. Find Mileage of Your Vehicle" << endl;
    cout << "2. Find Total Trip Distance" << endl;
    cout << "3. Find Total Fuel Expense" << endl;
    cout << "Enter your choice (1/2/3): ";
    cin >> choice;

    switch (choice) {
        case '1':  // Find mileage
            cout << "\nEnter the following details:\n";
            cout << "- Total amount you spent for fuel (Rs): ";
            cin >> amountSpent;
            cout << "- Current fuel rate per litre in your area (Rs): ";
            cin >> fuelRate;
            cout << "- Total trip distance (KM): ";
            cin >> tripDistance;

            totalFuel = amountSpent / fuelRate;
            mileage = tripDistance / totalFuel;
            cout << "\n✅ Mileage of your vehicle: " << mileage << " KM/L" << endl;
            break;

        case '2':  // Find total trip distance
            cout << "\nEnter the following details:\n";
            cout << "- Total amount you spent for fuel (Rs): ";
            cin >> amountSpent;
            cout << "- Current fuel rate per litre in your area (Rs): ";
            cin >> fuelRate;
            cout << "- Mileage of your vehicle (KM/L): ";
            cin >> mileage;

            totalFuel = amountSpent / fuelRate;
            tripDistance = mileage * totalFuel;
            cout << "\n✅ Your total trip distance is: " << tripDistance << " KM" << endl;
            break;

        case '3':  // Find total fuel expense
            cout << "\nEnter the following details:\n";
            cout << "- Total trip distance (KM): ";
            cin >> tripDistance;
            cout << "- Current fuel rate per litre in your area (Rs): ";
            cin >> fuelRate;
            cout << "- Mileage of your vehicle (KM/L): ";
            cin >> mileage;

            totalFuel = tripDistance / mileage;
            result = fuelRate * totalFuel;
            cout << "\n✅ Total fuel expense: Rs. " << result << endl;
            break;

        default:
            cout << "\n❌ Invalid choice. Please enter 1, 2, or 3." << endl;
    }

    cout << "\n💖 Thank you for using TripCalc! Safe journey, rav3N 💖\n";
    return 0;
}


//CreatedWithLoveBy: rav3N🧛‍♀️ 
