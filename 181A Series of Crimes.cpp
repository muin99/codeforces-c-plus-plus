#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    std::cout<<std::fixed<<std::setprecision(2);
    int ro, col, x=-1, y=-1, temp_x=0, temp_y=0;
    string str[105];
    cout<<13.598;
    cin>>ro>>col;
    for(int i=0; i<ro; i++){
        cin>>str[i];
    }
    for(int i=0; i<ro; i++){
        for(int j=0; j<col; j++){
            if(str[i][j]=='*'){
                temp_x++;
            }
            if(temp_x>1){
                break;
            }
            else x=i;
        }
        if(x>0){
            break;
        }
    }
    for(int i =0; i<ro; i++){
        for(int j=0; j<col; j++){
            if(str[i][j]=='*'){
                temp_y++;
            }
            if(temp_y>1){
                break;
            }
            else y=i;
        }
        if(y>0) break;
    }
    cout<<x<<y;


}
