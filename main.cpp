#include <iostream>
using namespace std;

// Function to Input The Weights of the Items

int getWeights(int weight[], int n){
    cout << endl;
    cout << "----------------------Weights------------------------" << endl;
    cout << endl;
    for(int i = 0; i < n; i++){
        cout << "Enter the Weight of Item" << " " << i << ": ";
        cin >> weight[i];
        cout << endl;
    }
    return weight[n];
}

// Function to Input The Prices of the Items

int getPrices(int prices[], int n){
    cout << endl;
    cout << "-----------------------Prices------------------------" << endl;
    cout << endl;
    for(int i = 0; i < n; i++){
        cout << "Enter the Price of Item" << " " << i << ": ";
        cin >> prices[i];
        cout << endl;
    }
    return prices[n];
}

// Main Logic of the Problem

void getAnswer(int weight[], int prices[] , int n , int basket){
    int index = 0 , HighestValue = INT_MIN, toAdd = 0;
    for(int i = 0; i < n; i++){
        if(prices[i] / weight[i] > HighestValue){
            HighestValue = prices[i] / weight[i];
            index = i;
        }
    }
    if(weight[index] != basket ){
        toAdd = basket - weight[index];
    }
    cout << "-----------------------Result------------------------" << endl;
    cout << endl;
    cout << "The Item That Gives More Profit is:" << " "<< "Item" << " " << index << endl;
    cout << endl;
    cout << "So we should buy more"<< " " <<  toAdd  << " " <<"kg to get the profit of:" << " "<< (weight[index] + toAdd) * HighestValue << "₹"<< endl;
    
}


// Main Function

int main() {
    cout << "-----------------------------------------------------" << endl;
    cout <<                "Vegetable Vendor Problem"               << endl;
    cout << "-----------------------------------------------------" << endl;
    cout << endl;
    cout << "Enter the Size of the Basket (Kg):" <<" ";
    int basket;
    cin >> basket;
    cout << endl;
    int n;
    cout << "Enter the Number of Items To Register:" <<" ";
    cin >> n;
    int *weight = new int(n);
    int *prices = new int(n);
    getWeights(weight,n);
    getPrices(prices,n);
    getAnswer(weight, prices, n ,basket);
    cout << endl;
    cout << "-----------------------------------------------------" << endl;
    
}
