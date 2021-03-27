#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
    int a=8;
    srand(time(0));
    int LinearIndex[8][8]={};
   
    for (int row =0;row<a;row++){
        for (int column=0;column<a;column++){
            LinearIndex[row][column]=1+(rand() %1000);
            
        }
    }
    
  
      
          int B[a*(a+1)/2]={};
     int row, column;
     int k=0;
     
    for (row = 0; row < a; row++)
    {
        for (column = 0; column< a; column++)
        {
            
            if(row>=column){
            cout << LinearIndex[row][column] << " ";
            if(k<a*(a+1)/2)
            {
                B[k]=LinearIndex[row][column];
                k++;
            }
            
        }
         
        
        }
        cout << endl;
    }
    cout<<B[8]<<endl;
    
    return 0;
    
    
    
}