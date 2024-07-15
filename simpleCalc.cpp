#include<iostream>
using namespace std;
int num1;
int num2;
char operation;
//basic arthmetc operation of calculator
int arthmetic_operation(){

    cout<<"please input the operation which you want to perform(+,-,*,/):\n";
    cin>>operation;
    switch(operation){

        case '+':
        cout<<"your sum of "<<num1<< "+"<< num2<<"="<<num1 + num2 <<endl;
        break;
         case '-':
        cout<<"your subtraction of "<<num1<< "+"<< num2<<"="<<num1 + num2<<endl;
        break;
         case '*':
        cout<<"your product of "<<num1<< "*"<< num2<<"="<<num1 * num2<<endl;
        break;
         case '/':
         if(num2!=0){
        cout<<"your divison of "<<num1<< "/"<< num2<<"="<<num1 / num2<<endl;
         }
         else if (num1=0){
        cout<<"your divison of "<<num1<< "/"<< num2<<"= 0"<<endl; 
            }else{
            cout<<"divison by "<<num2<<" not allowed"<<endl;
         }
        break;
        default:
        cout<<"invalid operation"<<endl;
    }
}
// main function

int main(){
    cout<<"please enter the num1:\n";
    cin>>num1;
    cout<<"please enter the num2:\n";
    cin>>num2;
    //calling operation
    arthmetic_operation();
    return 0;
}