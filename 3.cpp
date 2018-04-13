#include <iostream>
using namespace std;
int main(){
int a,b,c;
cout<<"Введите количество бензина в колонках a,b,c";
cin>>a>>b>>c;
if (a<b&&a<c){
cout<<"Завезти бензин на колонку а";
}
else if(b<a&&b<c){
cout<<"Завезти бензин на колонку b";
}
else if(c<a&&c<b){
cout<<"Завезти бензин на колонку c";   
}
return 0;
}