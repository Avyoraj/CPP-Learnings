// arrray using loop 
/* find a smallest and largest number from arrray*/


#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    // method  1 ONLY FINDING SMALLEST NUMBER USING LOOP without min max function 

int nums [] = {5,15,22,1,-5,24} ;
int size = 6 ;

int smallest = INT_MAX;
for (int i = 0; i < size; i++){
    if (nums[i] < smallest){
        smallest = nums[i];
    }
}
cout << "Smallest number is: " << smallest << endl;


cout << "breaking for second method" << endl;
cout << "----------------------------------" << endl;


// method 2 FINDING SMALLEST AND LARGEST NUMBER USING LOOP and min max function
int largest = INT_MIN; // initialize largest to the smallest possible integer value
   
// int smallest = INT_MAX; already declared above

for (int i = 0; i < size; i++){
   smallest = min(smallest, nums[i]); 
   largest = max(largest, nums[i]);  // order dont matter
}



    cout << "Smallest= " << smallest << endl;
    cout << "largest= " << largest << endl; 




return 0;
}
