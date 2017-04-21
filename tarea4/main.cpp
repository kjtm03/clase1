#include <iostream>

using namespace std;
void cambiazo2(int *pt1, int *pt2){
    int temp=*pt1;
    *pt1=*pt2;
    *pt2=temp;
}
//Ejercicio 14
int sumRec(int arr[],int a, int b){
    if(a==b)
        return 0;
    else
        return arr[a]+sumRec(arr,a+1,b);
}
//Ejercicio 09
void libroAlg(int arr[],int longitud){
    int t,t2;
    for(int i=0;i<longitud;i++)
        t = i;
        while(t>0&&arr[t]<arr[t-1]){
            t2 = arr[t];
            arr[t] = arr[t-1];
            arr[t-1] = t2;
            t--;
        }
}
//Ejercicio 04
int pot(int base, int exponente)
    {
    int x = 0;
    x+=1;
    int resul=1;
    for(int i=0;i<exponente;i++)
    {
        resul=resul*base;
        }
    return resul;
    }
    //Ejercicio 07
    void cambiazo(int& x, int& y){
    int temp;
    temp = x;
    x = y;
    y = temp;

}
//Ejercicio 15
string palindromo(string pal)
    {
        string z;
        for(int i = pal.size()-1;i>=0;i--)
            z += pal[i];
        return z;
    }
//Ejercicio 12
void reversa(int arreglo[],int longitud)
    {

        int arr[longitud];
        for(int j = longitud;j>=0;j--){
            arr[longitud]+=arreglo[j];
        }
    }
//Ejercicio 11
int matrices()
    {
        int aMatriz[3][2] = {{2, 3}, {3, 5}, {2, 1}};
        int bMatriz[2][3] = {{2, 3, 5}, {9, 8, 7}};
        int cMatriz[3][3] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}};
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                for(int k=0;k<2;k++){
                    cMatriz[i][j] += aMatriz[i][k]*bMatriz[k][j];
                }
                cout<<cMatriz[i][j]<<"    ";
            }
            cout<<" \n";
        }
    }
int main()
{
    //Ejercicio 01
    /*float milla, z;
    cout << "Escriba el numero de millas: " <<endl;
    cin >> milla;
    z = milla*1.60934;
    cout << "Convirtiendo: " << z <<endl;
    */

    //Ejercicio 02
    /*int c,f;
    cout << "Farenheit      Celcius" <<endl;
    for(f=0;f<=300;f+=20){
        c=((f-32)*5)/9;
        cout << f << "              "<<c << endl;
        */

    //Ejercicio 3
    /*int x;
    while(x != -1){
        cout << "Escriba un numero: " <<endl;
        cin >> x;
        if (x%2==0){
        cout << "El numero es par"<<endl;
        }
        else{
        cout << "El numero es impar"<<endl;
        }
    }
    */
//Ejercicio 4
//cout<<"La potencia es: "<<pot(2,6)<<endl;

//Ejercicio 05
/*int x;
while(x!=-1)
    {
    cout << "Escriba un numero " <<endl;
    cin >> x;
    switch(x)
        {
        case 0:
            cout<<"Cero"<<endl;
            break;
        case 1:
            cout<<"Uno"<<endl;
            break;
        case 2:
            cout<<"Dos"<<endl;
            break;
        case 3:
            cout<<"Tres"<<endl;
            break;
        case 4:
            cout<<"Cuatro"<<endl;
            break;
        case 5:
            cout<<"Cinco"<<endl;
            break;
        case 6:
            cout<<"Seis"<<endl;
            break;
        case 7:
            cout<<"Siete"<<endl;
            break;
        case 8:
            cout<<"Ocho"<<endl;
            break;
        case 9:
            cout <<"Nueve"<<endl;
            break;
        default:
            if (x==-1)
                cout<<"Programa terminado"<<endl;
            else
                cout <<"Numero NO permitido"<<endl;
        }
    }
    */

    //Ejercicio 06
    /*string a;
    int b,c;
    cout<<"Escribe la operacion: \n";
    cin>>a;
    cout<<"Escribe el primer numero: \n";
    cin>>b;
    cout<<"Escribe el segundo numero: \n";
    cin>>c;
    if (a=="/")
        {
            cout<<"La division es: "<<b/c<<endl;
        }
    if (a=="*")
        {
            cout<<"La multiplicacion es: "<<b*c<<endl;
        }
    if (a=="-")
        {
            cout<<"La resta es: "<<b-c<<endl;
        }
    if (a=="+")
        {
            cout<<"La suma es: "<<b+c<<endl;
        }
    */

    //Ejercicio 07
    /*int x,y;
    cout<<"Ingrese el valor del 1º numero: \n";
    cin>>x;
    cout<<"Ingrese el valor del 2º numero: \n";
    cin>>y;
    cambiazo(x,y);
    cout<<"El valor del 1º con cambiazo es: "<<x<<endl;
    cout<<"El valor del 2º con cambiazo es: "<<y<<endl;
   */
    //Ejercicio 08
    int l,m;
    cout<<"Ingrese el valor del 1º numero: \n";
    cin>>l;
    cout<<"Ingrese el valor del 2º numero: \n";
    cin>>m;
    int *pt1=&l;
    int *pt2=&m;
    cambiazo2(pt1,pt2);
    cout<<"El valor del 1º con cambiazo2 es: "<<l<<endl;
    cout<<"El valor del 2º con cambiazo2 es: "<<m<<endl;
    //Ejercicio 11
    /*
    matrices();
    */

    //Ejercicio 12
    /*
    int arr[8]={8,7,6,5,4,3,2,1};
    reversa(arr,8);
    /*

    //Ejercicio 15
    /*
    string palabra,cambio;
    cout<<"Ingrese una palabra: \n";
    cin>>palabra;
    cambio = palindromo(palabra);
    cout<<cambio<<endl;
    if (palabra==cambio)
        cout<<"true"<<endl;
    else
        cout<<"false"<<endl;
    */




}

