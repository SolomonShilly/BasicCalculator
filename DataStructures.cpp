#include <iostream>
#include <vector>
#include <list>
#include <set>
#include <map>

using namespace std;

void learnVector(){
    vector<string> people = {"Ally", "Bill", "Cailou", "Dell", "Eileen", "Freddie", "Gwen", "Heather", "Kim"};
    for (string person : people){
        cout << person << "\n";
    }
}

void learnList(){
    list<string> cars = {"Volvo", "Ford", "BMW", "Lexus"};
    for (string car : cars){
        cout << car << "\n";
    }
}

void learnSet(){
    set <string> sports = {"Basketball", "Football", "Soccer"};
    for (string sport: sports){
        cout << sport << "\n";
    }
}

void learnMap(){
    map <string, string> cities = {{"Seattle", "Washington"}, {"Brooklyn", "New York"}, {"Bronx", "New York"}, {"Sacramento", "California"}, {"Green Bay", "Wisconsin"}};
    cout << "Seattle is in " << cities["Seattle"];
    cout << "\nBrooklyn is in " << cities["Brooklyn"];
    cities["Seattle"] = "New York";
    cout << "\n" << cities["Seattle"];
    cities["Seattle"] = "Washington";
    cities["Portland"] = "Oregon";
    cout << "\n" << "Portland is in " << cities["Portland"];
    cities.erase("Portland");
    cout << "\nThe size of the cities list after removing Portland is " << cities.size();
    cout << "\nIf output is 1, the cities map is empty: " << cities.empty() << "\n\n";
    
    int count = 1;
    for (auto city : cities){
        cout<< city.first << " is in " << city.second << "\n";
        
        if (city.second == "New York"){
            count += 1;
        }
    }
    cout << "\nThe map includes " << count << " cities from New York";
}

int main(){
    learnVector();
    cout << "\n";
    learnList();
    cout << "\n";
    learnSet();
    cout << "\n";
    learnMap();
}