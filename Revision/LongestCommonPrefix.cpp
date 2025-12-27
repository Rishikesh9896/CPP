#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

string LongestCommonPrefix(vector <string> &str){
    // sort

    if(str.size() == 0){
        return "";
    }

    sort(str.begin() , str.end());

    string s1 = str[0];
    string s2 = str[str.size() - 1];

    string ans = "";

    int i = 0 , j = 0;

    while(i < s1.size() && j < s2.size()){
        if(s1[i] == s2[j]){
            ans += s1[i];
            i++;
            j++;
        }

        else{
            break;
        }
    }

    return ans;



}

string LongestCommonPrefix2(vector <string> &str){
    string s1 = str[0];
    int ans_length = s1.size();

    for(int i = 1 ; i < str.size() ; i++){
        int j = 0;
        while( j < s1.size()  && j < str[i].size() && s1[j] == str[i][j]){
            j++;

            ans_length = min(ans_length , j);
        }
    }

    return s1.substr(0 , ans_length);
}

int main(){
    cout << "Enter the number of strings " << endl;
    int n ;
    cin >> n;

    cout << "Enter the stringd " << endl;
    vector <string > str(n);
    for(int i = 0 ; i < n ; i++){
        cin >> str[i];
    }

    cout << "Longest Common Prefix is " << LongestCommonPrefix2(str) << endl;

}