// pair sum using with sorted benifit optimized approch 



// using 2 pointer approch 




#include <iostream>
#include <vector>
using namespace std;



vector <int> pairSum( vector <int> nums, int target ) {


    vector <int> ans;

    int n = nums.size () ;

    int i = 0 , j = n-1 ;

    while ( i< j ) {

        int pairSum = nums[i] + nums[j] ;


        if (pairSum > target){
            j-- ;
        }

        else if ( pairSum < target) {
            i++ ;
        }

        else {
            ans.push_back(i);
            ans.push_back(j);
            return ans;

        }
    }

    return ans;
}



int main(int argc, char const *argv[])
{
    vector <int> nums = { 2,7,11,15} ;
    
    int target = 13 ;

    vector <int > ans = pairSum(nums,target);
   
    cout << ans[0] << "," << ans[1] << endl;
    
    cout << nums[ans[0]] << "," << nums[ans[1]] << endl;

    return 0;
}
