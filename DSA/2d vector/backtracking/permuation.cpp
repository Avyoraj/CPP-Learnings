#include <iostream>
#include <string>
#include <vector>

using namespace std;


void getPerms(string &s, int idx, vector<string> &ans) {

    if( idx==s.length()) {
        ans.push_back(s);
        return;
    }


    for( int i = idx ; i<s.length(); i++ ) {
        swap(s[idx],s[i]);
        getPerms(s,idx+1,ans);

        swap(s[idx],s[i]);
    }
}


vector<string> permute(string& s) {
    vector<string> ans;
    getPerms(s,0,ans);
    return ans;
    
}



int main(int argc, char const *argv[])
{

    string s = "harsh";
   vector <string> ans = permute(s);
    cout << "Permutations of the string: " <<endl;

    for( string str : ans) {
        cout << str << " " << endl;
    }

    cout << "Total permutations: " << ans.size() << endl;

    
    return 0;
}
