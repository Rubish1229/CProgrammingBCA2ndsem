#include<stdio.h>
int main(){
    int matrixA[2][2],matrixB[2][2],matrixC[2][2],i,j;
   
    //FOR MATRIX A
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            scanf("%d %d",&matrixA[i][j]);
        }
    }

    //FOR MATRIX B
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            scanf("%d %d",&matrixB[i][j]);
        }
    }

    //FOR MATRIX C
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            matrixC[i][j]=matrixA[i][j] + matrixB[i][j];
            printf("The value of matrix is:%d",matrixC[i][j]);
        }
    }
    
return 0;



    
}