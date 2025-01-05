// #include <iostream>
// #include <math.h>
// using namespace std;
// int main(){
//     int n;
//     cin >>n;

//     int ans = 0;
//     int i = 0;
//     while(n!= 0){

//         int bit = n&1;
//         ans = (bit * pow(10, i)) + ans;
//         n = n >>1;
//         i++;
//     }
//     cout << "Answer is " << ans << endl;
// }



// decimal to binary
#include <iostream>
using namespace std;
void decToBin(int n)
{
    int BinaryNum[32];//creating array of size 32 
    int i = 0;
    while (n > 0)
    {
        BinaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }
    // printing array in reverse order
    for (int j = i - 1; j >= 0; j--)
    {
        cout << BinaryNum[j];
    }
}
int main()
{
    int n;
    cin >> n;
    decToBin(n);
    return 0;
}