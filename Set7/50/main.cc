#include <iostream>
#include <chrono>
#include <iomanip>

using namespace std;
using namespace chrono;

int main()
{
    int input;
    cin >> input;

    auto actualTime = system_clock::now();
    auto printTime = system_clock::to_time_t(actualTime);
                                       // print local time
    cout << "local: " 
         <<  put_time(localtime(&printTime), "%Y-%m-%d %X") << '\n';
                                       // print UTC time
    cout << "UTC:   " 
         <<  put_time(gmtime(&printTime), "%Y-%m-%d %X") << '\n';

    actualTime += seconds(input);      // add time
    actualTime += minutes(input);
    actualTime += hours(input);

    printTime = system_clock::to_time_t(actualTime);
                                       // print local added time
    cout << "Added time\n" << "local: " 
         <<  put_time(localtime(&printTime), "%Y-%m-%d %X") << '\n';
                                       // print UTC added time
    cout << "UTC:   " 
         <<  put_time(gmtime(&printTime), "%Y-%m-%d %X") << '\n';
}
