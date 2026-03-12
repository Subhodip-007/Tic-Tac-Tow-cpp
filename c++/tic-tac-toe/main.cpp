#include <iostream>
using namespace std;
 bool replaceValueOfposition(int val,char matrix[3][3],char choice){
    if(val < 1 || val > 9){
        cout<<"enter move in range";
        return false;
    }
    int row=(val-1)/3;
    int col=(val-1)%3;
    if(matrix[row][col]!='O' && matrix[row][col]!='X'){
    matrix[row][col]=choice;
    return true;
 }
 else{
    cout<<"position already occupied"<<endl;
    return false;
 }
}
 void print(char matrix[3][3]){
        for(int i=0;i<3;i++){
       for(int j = 0; j < 3; j++) {   
            cout<< " "<<matrix[i][j];
            if(j<2){
                cout<<" | ";
            }

            
        }
        
        cout << endl; 
        if(i<2){ cout<<"--------------"<<endl;}
       
}
    }
int main(){
    int val;
    char choice;
   
char board[3][3]={
    {'1','2','3'},
    {'4','5','6'},
    {'7','8','9'},
};

print(board);
cout<<"enter your position :"<<endl;
cin>>val;
cout<<"enter your  :"<<endl;


}




