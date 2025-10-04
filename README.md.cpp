# InverseStarTriangle
Reverse of the star triangle
#include<iostream>
using namespace std;
int main(){
    int row,i,j;
    cout<<"Enter number of rows : ";
    cin>>row;
    int a=row;
    for(i=1;i<=row;i++){
        for(j=1;j<=a;j++){
            cout<<"* ";
        }
        a--;
        cout<<endl;
    }
    return 0;
}

