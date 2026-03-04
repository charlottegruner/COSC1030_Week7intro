#include <iostream>
using namespace std;

int main()
{
        const int SIZE = 5;
        int scores[SIZE];  //size of array needs to be known at compile time 
                           //
        // access the memory
        // indexing notation
        /*
        int ind = 0;
        scores[ind] = 88;
        ind++;
        scores[ind] = 79;
        ind++;
        cout << "Enter a score to put ind " << ind << ":";
        cin >> scores[ind];
        */

        // prompt use for SIZE of entries in a loop and fill the array
        for (int ind = 0; ind <= SIZE - 1; ind++)
        {
                cout << "Enter a score: ";
                cin >> scores[ind];
        }

        // print out the array
        for (int ind = 0; ind <= SIZE - 1; ind++)
        {
                cout << scores[ind] << " ";
        }
        cout << endl;

        // write a loop to print the  array backwards

        // write a loop to find the smallest element of the array and 
        // print out the smallest element and which array index it is in

        // write a loop to find the sum of all the elements in the array

        return 0;
}
