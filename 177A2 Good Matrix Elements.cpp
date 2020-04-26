#include<iostream>
using namespace std;
int main()
{
    int ar[10201], arm, good=0, matr;
    int i;

    cin >> arm;
    matr = arm*arm;
    ///input
    for(i=0; i<matr; i++){
        cin>>ar[i];
    }
    /**i am asuming ar[3*3]
    arm = 3
    matr = 9
    ar[0] ar[1] ar[2]
    ar[3] ar[4] ar[5]
    ar[6] ar[7] ar[8]

    */

    ///now counting principal diagonal
    for(i=0; i<matr; i =i+arm+1){
        if(i == (matr-1)/2){
            continue;
        }
        else{
            good = good+ar[i];
        }
    }
    ///secondary diagonal
    for(i=arm-1; i<=matr-arm; i = i+arm-1){
        if(i == (matr-1)/2){
            continue;
        }
        else{
            good = good+ar[i];
        }
    }
    ///middle row
    for(i = (matr-arm)/2; i<= ((matr+arm)/2)-1; i++){
        if(i == (matr-1)/2){
            continue;
        }
        else{
            good = good+ar[i];
        }
    }

    ///middle collumn
    for(i = (arm-1)/2; i< matr; i = i + arm){
        if(i == (matr-1)/2){
            continue;
        }
        else{
            good = good+ar[i];
        }
    }

    ///center
    good = good + ar[(matr-1)/2];

    cout<<good;

}
