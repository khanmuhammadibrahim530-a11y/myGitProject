#include <iostream>
using namespace std;
int main(){
    int i=1;
    do{ int j=1;
        do{
        cout<<"*"<<"\t";
   j++;}while(j<=5);
   cout<<endl;
   i++;
        
    }while (i<=5);
return 0;
}