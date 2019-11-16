#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <functional>
using namespace std;

// <-- ADD YOUR FUNCTION PROTOTYPE HERE
//int trioValues (int& Red, int& Green, int& Blue);
int trioValues (int& Red, int& Green, int& Blue);
int comparator(const void *, const void *);
int main()
{
        //DO NOT CHANGE WITHIN THIS AREA...
        int red, blue, green;
        cout<<"Enter Red, Green, and Blue values: ";
        cin>>red>>green>>blue;
        //...END OF "DO NOT CHANGE" AREA


        // <-- ADD YOUR FUNCTION CALL HERE
        trioValues( red, green, blue);

        //DO NOT CHANGE WITHIN THIS AREA...
        cout<<"Rearranged....\n";
        cout<<"RGB: "<<red<<","<<green<<","<<blue<<endl;
        return 0;
        //...END OF "DO NOT CHANGE" AREA
      

}

// <-- ADD YOUR FUNCTION DEFINITON HERE
//int trioValues (int& Red, int& Green, int& Blue)
int trioValues (int& Red, int& Green, int& Blue)
{
    int arr[] = {Red, Green, Blue};
    int n = sizeof(arr)/sizeof(arr[0]);
    sort(arr, arr+n,greater<int>());
    Red = arr[0];
    Green = arr[1];
    Blue = arr[2];

}


//Reference GeeksforGeeks.com
