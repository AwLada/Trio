#include <iostream>
#include <vector>
#include <string>
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

    int size = sizeof(arr)/sizeof(arr[0]);
    qsort((void*)arr, size, sizeof(arr[0]), comparator);
    Red = arr[2];
    Green = arr[1];
    Blue = arr[0];

}
int comparator(const void *p, const void *q)
{
int l = *(const int *)p;
int r = *(const int *)q;

if ((l&l) && (r&l))
        return (r-1);

if (!(l&l) && !(r&l))
        return (l-r);

if (!(l&l))
        return l;

return -l;
}


