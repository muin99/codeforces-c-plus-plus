#include<iostream>
#include<numeric>
using namespace std;
int ab[1000000];
int main()
{
    int temp, num, product=1;
    cin>>num;
    for(int i=0; i<num; i++){
        cin>>ab[i];
    }
    for(int i=0; i<num; i++){
        temp=ab[i];
        ab[i]=1;
        product = accumulate(ab, ab + num, 1, multiplies<int>());
        cout<<product;
        if(i!=num-1){
            cout<<" ";
        }
        ab[i]=temp;
    }
}
