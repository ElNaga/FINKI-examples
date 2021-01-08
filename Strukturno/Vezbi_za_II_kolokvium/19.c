// За квадратна матрица А со димензии n x n, од стандарден влез се внесува бројот n (n > 2)
// и елементите на матрицата (реални броеви). 
// Нека X e збирот од елементите под главната дијагонала во матрицата А. 
// Нека Y е збирот од елементите под споредната дијагонала во матрицата А. 
// Да се креира нова матрица B на следниот начин:
// сите елементи од главната дијагонала во матрицата B треба да имаат вредност X
// сите елементи од споредната дијагонала во матрицата B треба да имаат вредност Y
// ако даден елемент припаѓа и на главната и на споредната дијагонала во матрицата B,
// тогаш неговата вредност e X+Y
// сите останати елементи во матрицата B имаат вредност 0
// Новата матрица B да се испечати на стандарден излез.

#include <stdio.h>

int main(){
    int n,x=0,y=0;
    scanf("%d",&n);
    float matrica[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%f",&matrica[i][j]);
            if(i>j) x+=matrica[i][j];
            if(i+j>n-1) y+=matrica[i][j];
            matrica[i][j]=0;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j) matrica[i][j]+=x;
            if(i+j==n-1) matrica[i][j]+=y;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%.1f ",matrica[i][j]);
        }
        printf("\n");
    }
    return 0;
}