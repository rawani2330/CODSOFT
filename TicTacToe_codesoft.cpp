#include<iostream>
using namespace std;

char tic_tac_toe[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
int r ;  //for rows in tic tac toe
int c;   //for columnnstic tac toe
char value ='X';   // the value by user
bool Tie=false;
string user1=" ";
string user2=" ";
 void tictactoe_demo();
 void Tic_Tac_Toe();
 bool tictactoeprocess();
void askagain();

 /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

              //for(3X3)grid
 void tictactoe_demo(){  
cout<<"     |     |        \n";
cout<<" "<<tic_tac_toe[0][0]    <<"   |  "  <<tic_tac_toe[0][1]   <<"  |  "   <<   tic_tac_toe[0][2]<<"\n";
cout<<"_____|_____|_____   \n";
cout<<"     |     |        \n";
cout<<" "<<tic_tac_toe[1][0]    <<"   |  "  <<tic_tac_toe[1][1]<<"  |  "  <<    tic_tac_toe[1][2]<<"\n";
cout<<"_____|_____|_____   \n";
cout<<"     |     |        \n";
cout<<" "<<tic_tac_toe[2][0]    <<"   |  "<<tic_tac_toe[2][1]<<"  |  "  <<tic_tac_toe[2][2]<<"\n";
cout<<"     |     |        \n";

}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Tic_Tac_Toe(){ 
    int Value;
    if(value=='X'){
    cout<<user1<<" Please enter the value of 0-9 for position: ";
    cin>>Value;
    }
      if(value == '0'){
    cout<<user2<<" Please enter the value 0-9 for position except filled box of "<< user1<<":";
    cin>>Value;
}
if(Value==1){
    r =0;
    c=0;
}
if(Value==2){
    r=0;
    c=1;
}if(Value==3){
    r=0;
    c=2;
}
if(Value==4){
    r=1;
    c=0;
}
if(Value==5){
    r=1;
    c=1;
}if(Value==6){
    r=1;
    c=2;
}if(Value==7){
    r=2;
    c=0;
}if(Value==8){
    r=2;
    c=1;
}if(Value==9){
    r=2;
    c=2;
}else if(Value<1|| Value>9){
cout<<"Invalid!!!!"<<endl;
}
if(value=='X' && tic_tac_toe[r][c]!='X'&& tic_tac_toe[r][c]!='0'){
    tic_tac_toe[r][c]='X';
    value ='0';
} 
  else if(value=='0' && tic_tac_toe[r][c]!='X' && tic_tac_toe[r][c]!='0'){
    tic_tac_toe[r][c]='0';
    value='X';
  }
else{
    cout<<"Completely filled########"<<endl;
 askagain();
}

}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

 //for operation of tic tac toe game
  bool tictactoeprocess(){    //3
        for(int i =0;i<3;i++){
        if(tic_tac_toe[i][0]==tic_tac_toe[i][1]&&tic_tac_toe[i][0]==tic_tac_toe[i][2] ||tic_tac_toe[0][i]==tic_tac_toe[1][i]&&tic_tac_toe[0][i]==tic_tac_toe[2][i])
        return true;
        }
        if(tic_tac_toe[0][0]==tic_tac_toe[1][1]==tic_tac_toe[2][2] || tic_tac_toe[0][2]==tic_tac_toe[1][1]==tic_tac_toe[2][0]){
        return true;
        }
         for(int i=0;i<3;i++){
         for(int j=0;j<3;j++){
         if(tic_tac_toe[i][j]!='X'&& tic_tac_toe[i][j]!='0'){
            return false;
            }
          }
        }
          Tie=true ;
          return false;
         }

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//main function

int main(){
     cout<<"enter the name of player:\n ";
     cin>>user1;
     cout<<"please enter the name of second player:\n ";
     cin>>user2;
     cout<<user1<<" is first player: \n";
     cout<<user2<<" is second player: \n";


     while(!tictactoeprocess()){
         tictactoe_demo();
         Tic_Tac_Toe();
         tictactoeprocess();
    
     }
     if(value =='X'&& Tie==false){
        cout<<user2<<" Wins!!!!"<<endl;
        askagain();
    }
    else if(value=='0'&& Tie==false){
        cout<<user1<<" Wins!!!!"<<endl;
        askagain();
    }else{
        cout<<"This Match is draw!!!"<<endl;
    }askagain();
 }


 void askagain(){
    int y=1;
    int n=0;
    int ask;
     cout<<"do you want to play again input 1 for yes or 0 for NO:\n";
     cin>>ask;
    if(ask==1){
        main();
    }else{
        cout<<"thank you!!!!!!\n";
    }
 }
