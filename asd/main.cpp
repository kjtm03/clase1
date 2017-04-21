#include <iostream>

using namespace std;
string reversa(string pal,int a,int b){
    if (a>=0)
        return pal[a]+reversa(pal,a-1,b);
    else
        return "";
}

int mulMatriz(){
    int aMatriz[3][3]={{1,3,2},{4,6,6},{2,3,4}};
    int bMatriz[3][3]={{9,8,3},{6,4,8},{3,5,5}};
    int cMatriz[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;i++){
            for(int k=0;k<3;k++){
                cMatriz[i][j]=aMatriz[i][k] * bMatriz[k][j];
            }
            cout<<cMatriz[i][j]<<"   "<<endl;
        }
        cout<<"   \n";
    }
    cout<<"  \n";
}
int suma(int arr[],int x,int y){
    if(x==y)
        return 0;
    return arr[x]+suma(arr,x+1,y);

}
int main()
{
    int a[3]={2,3,4};
    cout<<suma(a,0,3)<<endl;
    mulMatriz();
    string z;
    cout<<"Escriba una palabra: \n";
    cin>>z;
    cout<<reversa(z,4,4)<<endl;
}
