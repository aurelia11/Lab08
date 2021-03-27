using namespace std;

  

void LinearIndexIverse(int B[],int n)
{

  
int C[n][n];

    for(int row= 0; row < n; row++) 
    {

       for(int column= 0; column < n; column++) 
        

      

       if(row>= column) 

          C[row][column]= B[column]; 

       else

         
          C[row][column]= 0; 

    }

  


    for(int row= 0; row < n; row++) 

    {

      for(int column= 0; column < n; column++) 

         cout<< C[row][column] << " ";

      cout << endl; 

    }

}

  


int main()

{

    int
 B[]= { 1, 2, 3, 4, 5 }; 

    int n = sizeof(B)
/ sizeof(B[0]);

    LinearIndexIverse(B,n); 

    return 0;

}