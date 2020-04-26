#include<iostream>
using namespace std;
int main()
{
    int test;

    cin>>test;
    for(int i=0; i<test; i++){
        int n;
        int a=2,aa=4,b=1,bb=5;
        cin>>n;
        if((n%4)!=0)
            {cout<<"NO"<<endl;}
        else{
            cout<<"YES"<<endl;
            int k=n/4;
            for(int j=1; j<=k; j++){
                cout<<a<<" "<<aa<<" ";
                a+=6;
                aa+=6;
            }
            for(int j=1; j<=k; j++){
                cout<<b<<" "<<bb<<" ";
                b+=6;
                bb+=6;
            }
            cout<<endl;
        }
    }
}
