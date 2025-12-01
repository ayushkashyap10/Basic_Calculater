#include<iostream>
using namespace std;
int main(){
    double x,y,z=0;
    char op;
    cout<<"1.Enter experesion (x op y)\n2.If you want to quit after 1st operation enter 'q'\n\n";
    cin>>x>>op>>y;
    if(op=='+') z=x+y;
    else if(op=='-') z=x-y;
    else if(op=='*') z=x*y;
    else if(op=='/'){
        if(y==0){
           cout<<"Error: Division by '0'";
           return 0;
        }
        z=x/y;
    } 
    else if(op=='%'){
         if(x==static_cast<int>(x)&&y==static_cast<int>(y)){
             z=(static_cast<int>(x)) % (static_cast<int>(y));
         }
         else{
             cout<<"error,'%' operater works on integer.";
             return 0;
         }
    }
    else {
        cout<<"Error!,valide operators(+,-,*,/,%)";
        return 0;
    }
    while(true){
        cout<<z;
        cin>>op;
        if(op=='q') return 0;
        cin>>y;
        if(op=='+') z=z+y;
        else if(op=='-') z=z-y;
        else if(op=='*') z=z*y;
        else if(op=='/'){
            if(y==0){
                cout<<"Error: Division by '0'";
                return 0;
            }
            z=z/y;
        } 
        else if(op=='%'){
            if(z==static_cast<int>(z)&&y==static_cast<int>(y)){
                z=(static_cast<int>(z)) % (static_cast<int>(y));
            }
            else{
                cout<<"Error,'%' operater works on integer.";
                break;
            }
        }
        else {
            cout<<"Error!,valide operators(+,-,*,/,%)";
            return 0;
        }
    }
    return 0;
}
    