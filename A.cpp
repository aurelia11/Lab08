#include<iostream>
using namespace std;
int main()
{
    
int LinearIndx[2][3];

int row , column;

for (row=0;row <=2;row++){
    for(column=0;column<=3;column++){
        printf("Lower triangular matrix: [%d][%d]\n", row,column );
        scanf("%d",&LinearIndx[row][column]);
    }
}

printf("Lower triangular values of A[][]");
for (row=0;row <=2;row++){
    for(column=0;column<=3;column++){
        printf("%d",LinearIndx[row][column]);
        if(column==2){
            printf(" ");
            }
        }
    }
}