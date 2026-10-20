#include<bits/stdc++.h>
using namespace std;
int main(){
    int id [6] ;
    char a[6][20] ; //={{"Alu"},{"Bottle"},{"Corn"},{"Doel"},{"Elish"},{"Foul"}};
    for (int i=0;i<6;i++)
    {
        for (int j=0;j<20;j++)
        {
            cin >> a[i][j] ;
        }
    }
    for (int i=0;i<6;i++)
    {
        cin >> id [i] ;
    }
    for(int i=0;i<6;i++){
        for(int j=i;j<6;j++){
            if(id[i]>id[j]){
                swap(id[i],id[j]);
                swap(a[i],a[j]);
            }
        }

    }
    for(int i=0;i<6;i++)
    {

        cout<<id[i]<<' ';
        for(int j=0;j<20;j++){
            cout<<a[i][j];
        }
        cout<<endl;
    }
}
