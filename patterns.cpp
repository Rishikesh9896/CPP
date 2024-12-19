#include <iostream>
using namespace std;

int main(){
    /*  // STAR PATTERN
    int n;
    cin >> n;

    int i =1;

    while(i<=n){
        int j =1;
        while(j<=n){
            cout<< "*";
            j = j+1;
        }
        cout << endl;
        i = i +1;
    }

    */

    // SECOND PATTERN

   /* int n;
    cin >>n;
    int i = 1;

    while(i <=n){
        int j = 1;
        while(j<=n){
            cout<<i;
            j = j +1;
        }
        cout << endl;
        i = i +1;
    }

    */

    // PATTERN 3 
    // 1234
    // 1234
    // 1234
    // 1234

  /*  int n;
    cin >> n;
    int i = 1;

    while(i<=n){
        int j = 1;
        while(j<=n){
            cout << j;
            j = j +1;

        }
        cout << endl;
        i = i +1;
    }

    */

    // REVERSE OF IT THAT IS   4321
    //                         4321
    //                         4321
    //                         4321


   /* int n;
    cin >> n;
    int i = 1;
    while (i<=n){
        int j =1;
        while(j<=n){
            cout<< n -j +1;
            j = j +1;
        }
        cout << endl;
        i = i +1;
    }

    */

    // PATTERN 5    123
     //             456
     //             789

    /* int n;
     cin >> n;
     int i = 1;
     int count =1;
     while(i<=n){
        int j = 1;
        while(j<=n){
            cout << count << " ";
            count = count + 1;
            j = j +1;

        }
        cout << endl;
        i = i +1;
     }
*/
    // PATTERN 6 
    //  *
    //  **
    //  ***
     // ****

   /*  int n;
     cin >>n;
     int i = 1;
     while(i<=n){
        int j =1;
        while(j<=i){
            cout << "*";
            j = j +1;
        }
        cout << endl;
        i = i +1;
     }

     PATTERN 7
     1
     22
     333
     4444

     

     int n;
     cin>>n;
     int i = 1;
     while(i <=n){
        int j = 1;
        while(j<=i){
            cout << i;
            j = j +1;
        }
        cout << endl;
        i = i +1;
     }

     

     PATTERN 7
     1
     23
     456
     78910
     

     int n;
     cin >>n;
     int i =1;
     int count = 1;
     while (i<=n){
        int j =1;
        while(j<=i){
            cout << count << " ";
            count = count +1;
            j = j +1;
        }
        cout << endl;
        i = i +1;
     }

     

     PATTERN 8 
     1
     23
     345
     4567

     

     int n;
     cin >> n;
     int i = 1;
     while (i <=n){
        int j = 1;
        int value = i;                 // THERE IS ANOTHER METHOD TOO ..... TRY IT 
        while (j <=i){
            cout << value;
            value = value + 1;
            j = j +1;

        }
        cout << endl;
        i = i +1;
     }

     

     PATTERN 9
     1
     21
     321
     4321

     

     int n;
     cin >>n;
     int i = 1;
     while(i <=n){
        int j = 1;
        while(j <=i){
            cout << i-j+1;
            j = j +1;
        }
        cout << endl;
        i = i +1;
     }
     

     //PATTERN 10
     AAA
     BBB
     CCC

     

     int n;
     cin >>n;
     int i = 1;

     while(i <=n){
        int j = 1;
        while(j<=n){
            char ch = 'A' + i -1;
            cout << ch;
            j = j +1;
        }
        cout << endl;
        i = i +1;
     }

    

     PATTERN 11
     ABC
     ABC
     ABC

      

     int n;
     cin >> n;
     int i = 1;
     while(i<=n){
        int j = 1;
        while(j <=n){
           char ch = 'A' + j -1;
           cout << ch;
           j = j +1;
        }
        cout << endl;
        i = i +1;
     }

     

     PATTERN 12
     ABC
     DEF
     GHI

    
     int n;
     cin >>n;
     int i = 1;
     char count = 'A';
     while(i <=n){
        int j = 1;
        
        while(j <=n){
            
            cout << count;
            count = count +1;
            j = j +1;
        }
        cout <<endl;
        i = i +1;
     }

      

      PATTERN 13
      ABC
      BCD
      CDE

      

      int n;
      cin >>n;
      int i =1;
      while(i <=n){
        int j = 1;
        while(j <=n){
            char ch = 'A' + i + j -2;
            cout << ch;
            j = j +1;
             
        }
        cout << endl;
        i = i +1;
      }

      

      PATTERN 14
      A
      BB
      CCC

      int n;
      cin >>n;
      int i = 1;
      while(i <=n){
        int j =1;
        while(j <=i){
            char ch = 'A' + i -1;
         cout << ch;
         j = j +1;   

        }

        cout << endl;
        i = i +1;
      }

     

      // PATTERN 15
    //   A
    //   BC
    //   DEF
    //   GHIF

      int n;
      cin >>n;
      int i =1;
      char ch = 'A';
      while(i <=n){
        int j = 1;
        while(j<=i){
            
            cout << ch;
            ch = ch +1;
            j = j +1;
        }
        cout << endl;
        i = i +1;
      }

       

    // PATTERN 16
    // A
    // BC
    // CDE
    // DEFG

    int n;
    cin >>n;
    int i =1;
    while(i <=n){
        int j = 1;
        while(j <=i){
            char ch = 'A' + i+ j -2;
            cout << ch;
            j = j +1;
        }
        cout << endl;
        i = i +1;
    }

    */

    // PATTERN 17
    // D
    // CD
    // BCD
    // ABCD

    // int n;
    // cin >>n;
    // int i = 1;
     
    // while(i <=n){
    //     int j = 1;
    //    char start = 'A' + n -i;
    //     while(j <=i){
            
    //         cout << start;
    //         start = start +1;
    //         j = j +1;

    //     }
    //     cout << endl;
    //     i = i +1;
    // }

    // PATTERN 18
    //    *
    //   **
    //  ***
    // ****

    // int n;
    // cin >>n;
    // int i = 1;
    // while(i <=n) {
    //     int space = n -i;
    //     while(space){
    //         cout << " ";
    //         space = space -1;
    //     }
    //     int j = 1;
    //     while(j <=i){
    //         cout << "*";
    //         j = j +1;
    //     }
    //     cout << endl;
    //     i = i +1;

    // }     


    // PATTERN 19
    // ****
    //  ***
    //   **
    //    *

    int n;
    cin >> n;
    int i = 1;
    while(i <=n){
        int space = 1;
        while(space <= i){
            cout << " ";
            space = space + 1;
        }
        int j = 1;
        while(j <= n - i + 1){
            cout << "*";
            j = j +1;
        }

        cout << endl;
        i = i +1;
    }


    // PATTERN 20
    // 1111
    //  222
    //   33
    //    4

    // int n;
    // cin >>n;
    // int i = 1;
    // while(i <=n){
    //     int space = 1;
    //     while(space <=i){
    //         cout << " ";
    //         space = space + 1;

    //     }
    //     int j = 1;
    //     while(j<= n - i +1){
    //         cout << i;
    //         j = j +1;
    //     }
    //     cout << endl;
    //     i = i +1;
    // }








    









     


     




    






}