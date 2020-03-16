#include <iostream>
#include <string>
#include <vector>

const int NUM = 5;
using namespace std;

/*  Now create a 3 element vector and initialize it   */
void vectorTest() {
    vector<double> yamCosts = {20.10, 30.35, 5.95};
    int a;
    size_t n = yamCosts.size();  // A better way to get the elements in an array.                   
    auto it = yamCosts.begin();
    cout << *it << endl;
    vector<double> newYamCosts;  // Create an empty vector
    //
    // User push_back() to populate the vector
    //
    for (a = 0; a < n; a++) {
        newYamCosts.push_back(yamCosts[a] + 5.0);
    }
    for (a = 0; a < newYamCosts.size(); a++) cout << newYamCosts[a] << endl;
    newYamCosts.push_back(100.0);
    for (a = 0; a < newYamCosts.size(); a++) cout << newYamCosts[a] << endl;
    vector<string> titles(NUM);
    cout << "Enter " << NUM << " titles" << endl;
    cin.clear();
    cin.ignore(10000, '\n');  // seems like a kludgy way to empty the cin buffer
    for (a = 0; a < titles.size(); a++) {
        cout << "\nEnter title: ";
        getline(std::cin, titles[a]);
    }
    cout << "You entered the following:\n";
    for (a = 0; a < NUM; a++) {
        cout << titles[a] << endl;
    }
    return;
}
