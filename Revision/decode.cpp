#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string decodeString(string s){

    string result = "";

    for(int i = 0; i < s.length() ; i++){

        if(s[i] != ']'){
            result.push_back(s[i]);
        }

        else{
            // extract str froom reus;lt 
            string str = "";
            while(!result.empty() && result.back() != '['){
                str.push_back(result.back());
                result.pop_back();
            }

            // revere str
            reverse(str.begin() , str.end());

            // remove the '[' from result
            result.pop_back();

            // extract the number 
            string num = "";

            while(!result.empty() && (result.back() >= '0' && result.back() <= '9')){

                num.push_back(result.back());
                result.pop_back();

            }

            reverse(num.begin() , num.end());

            // convert string into integer 
            int int_num = stoi(num);
            // inserting str int_num times into result

            while(int_num){
                result += str;
                int_num--;
            }


        }

        

    }

    return result;

}

int main(){
    string str;
    cin >> str;

    cout << decodeString(str) << endl;
}