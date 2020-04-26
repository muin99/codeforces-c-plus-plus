#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string a;
    cin>>a;
    int index = a.length();
    int lo=0, hi=0;

    for(int i = 0; i<index; i++){
        if(a[i]>'Z') lo++;
        else hi++;
    }
    if(hi>lo){
        transform(a.begin(), a.end(), a.begin(), ::toupper);
    }
    else transform(a.begin(), a.end(), a.begin(), ::tolower);

    cout<<a;
}
