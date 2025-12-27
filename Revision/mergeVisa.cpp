#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
using namespace std;

int main(){
    string str1 , str2;
    cin >> str1 >> str2;

    unordered_map <char , int> f1;
    unordered_map <char , int> f2;

    for(char ch : str1){
        f1[ch]++;
    }

    for(char ch : str2){
        f2[ch]++;
    }

    string ans = "";
    int i = 0 , j =0;

    while(i < str1.size() && j < str2.size()){

        if(f1[str1[i]] < f2[str2[j]]){
            ans += str1[i];
            i++;
        }

        else if (f1[str1[i]] > f2[str2[j]]){
            ans += str2[j];
            j++;
        }

        else{
            if(str1[i] < str2[j]){
                ans += str1[i];
                i++;
            }

            else if(str1[i] > str2[j]){
                ans += str2[j];
                j++;
            }

            else{
                // c1 = c2
                ans += str1[i];
                i++;
            }
        }

    }

    while(i < str1.size()){
        ans += str1[i];
        i++;
    }

    while(j < str2.size()){
        ans += str2[j];
        j++;
    }

    cout << ans << endl;
}