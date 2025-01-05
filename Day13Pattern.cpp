#include<iostream>
using namespace std;
int main(){
    /*
    Ques: 01
    Print the Given Pattern
    *****
    *****
    *****
 -->>   Solid Rectangle
    */
    cout<<"Enter a Row Number : "<<endl;
    int n;
    cin>>n;
    cout<<"Enter a Colums Number : "<<endl;
    int m;
    cin>>m;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            cout<<"*";
        }
        cout<<endl;
    }

    /*
    
    Ques: 02
    Print the Given Pattern
    ****
    ****
    ****
    ****
   -->> Solid Square

    */
    cout<<"Enter a Row Number : "<<endl;
    int n;
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cout<<"*";
        }
        cout<<endl;
    }

    /*
    Ques:03
    Print the Given Pattern
    1234
    1234
    1234
    1234

  -->>  Number Square

    */
    cout<<"Enter a Row Number : "<<endl;
    int n;
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cout<<j;
        }
        cout<<endl;
    }

    /*
    Ques: 04
    Print the Given Pattern
    *
    **
    ***
    ****
    -->> Star Triangle

    */
    cout<<"Enter a Row Number : "<<endl;
    int n;
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }

    /*
    Ques:05
    Print the Given Pattern
    ****
    ***
    **
    *
--->> Star Triangle Reverse
    */
    cout<<"Enter a Row Number : "<<endl;
    int n;
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n+1-i; j++){
            cout<<"*";
        }
        cout<<endl;
    }

    /*
    Ques:06
    Print the Given Pattern
    1
    12
    123
    1234
    -->> Number Triangle

    */
    cout<<"Enter a Row Number : "<<endl;
    int n;
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<j;
        }
        cout<<endl;
    }

    /*
    Ques:07
    Print the Given Pattern
    1
    13
    135
    1357
    -->> Odd Number Triangle

    */
    cout<<"Enter a Row Number : "<<endl;
    int n;
    cin>>n;
    for(int i=1; i<=n; i++){
        int a = 1;
        for(int j=1; j<=i; j++){
            cout<<a;
            a+=2;

        }
        cout<<endl;
    }

    /*
    Ques:08
    Print the Given Pattern
    A B C D
    A B C D
    A B C D
    A B C D
    -->> Alphabet Square

    */
    cout<<"Enter a Row Number : "<<endl;
    int n;
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cout<<(char)(j+64)<<" ";
        }
        cout<<endl;
    }  

    /*
    Ques:09
    Print the Given Pattern
        *
        *
      *****
        *
        *
    -->> Star Plus
    */
    cout<<"Enter a Row Number : "<<endl;
    int n;
    cin>>n;
    int mid = n/2 +1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(i==mid || j==mid) cout<<"*";
            else cout<<" ";
        }
        cout<<endl;
    }

    /*
    Ques:09
    Print the Given Pattern
    *    *
     *  * 
      *
    *   *
   *     *

   --->>> Cross Star 
    
    */
    cout<<"Enter a Row Number : "<<endl;
    int n;
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(i==j || i+j==n+1 ) cout<<"*";
            else cout<<" ";

        }
        cout<<endl;
    }

    /*
    Ques:10
    Print the Given Pattern
    1
    2 3
    4 5 6
    7 8 9 10

    -->> Floyd's Triangle

    */
    // cout<<"Enter a Row Number : "<<endl;
    // int n;
    // cin>>n;
    // int k=1;
    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=i; j++){
    //         cout<<k<<" ";
    //         k++;
    //     }
    //     cout<<endl;
    // }

    /*
    Ques: 11
    Print the Given Pattern
    1
    0 1
    1 0 1
    0 1 0 1
    -- >> Binary Triangle
    */
    cout<<"Enter a Row Number : "<<endl;
    int n;
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            if((i+j)%2==0) cout<<1;
            else cout<<0;
        }
        cout<<endl;
    }

    /*
    Ques: 12
    Print the Given Pattern 
        *
       **
      ***  
     ****  
     -->> STAR TRIANGLE FLIPPED
    */
    cout<<"Enter a Number : "<<endl;
    int n;
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i; j++){
            cout<<" ";
        }
        for(int k=i; k<=i; k++){
            cout<<"*";
        }
        cout<<endl;
    }

    /*
    Ques: 13
    Print the Given Pattern
         1
       1 2 
     1 2 3
   1 2 3 4

   -->> Number Triangle Flipped
    */
    cout<<"Enter a Row Number : "<<endl;
    int n;
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i; j++){
            cout<<" ";
        }
        for(int k=1; k<=i; k++){
            cout<<k;
        }
        cout<<endl;
    }


                    // THANK YOU !





    return 0;
}



