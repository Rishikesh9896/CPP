#include <iostream>
#include <string>
using namespace std;

string countSort(string str){
    int freq[26] = {0};
    for(char ch : str){
        freq[ch - 'a']++;
    }

    // create sorted string
    string ans = "";
    for(int i = 0 ; i < 26; i++){
        while(freq[i] > 0){
            char ch = i + 'a';
            ans.push_back(ch);
            freq[i]--;
        }
    }
    return ans;
}

int main(){

    string str;
    cin >> str;

    cout << countSort(str) << endl;

}