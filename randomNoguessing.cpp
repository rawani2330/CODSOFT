#include<iostream>
#include<cstdlib>
using namespace std;
int main();

//function for asking again
void asking(){
cout<<"do you want to play again for Yes (1) and for No (0)\n";
        int ask;
        cin>>ask;
         if(ask==0){
            cout<<"Game End\n";
        }else{
            main();
        }

}
//main function
   int guess = 0;
int main(){
    int inputuser;
    int random_no =rand()%100+1;
    cout<<"enter any no in range between 1 to 100:\n";
while(guess != random_no){
    cin>>inputuser;
        if(random_no<inputuser){
            cout<<"Too high,Try again\n";
        }else if(random_no>inputuser){
            cout<<"To low,Try again\n";
        }else{
             if(inputuser==random_no){
        cout<<"Congratulation!, You guessed the number:\n";
            asking();
            break;
    }
        }
    
    }
    return 0;
}
