#include <iostream>
#include <string>
using namespace std;

int main(){

    string str1 , str2;
    cin >> str1 >> str2;

    if(str1.size() != str2.size()){
        cout << "Not an Anagram" << endl;
        return 0;
    }

    int freq1[26] = {0};
    int freq2[26] = {0};

    for(char ch : str1){
        freq1[ch - 'a']++;
    }

    for(char ch : str2){
        freq2[ch - 'a']++;
    }

    
    bool anagram = false;
    for(int i = 0 ; i < 26; i++){
        if(freq1[i] == freq2[i]){
            anagram = true;
        }
        else{
            anagram = false;
            break;
        }
    }

    if(anagram){
        cout << "Anagram" << endl;
    }
    else{
        cout << "Not an Anagram" << endl;
    }

}