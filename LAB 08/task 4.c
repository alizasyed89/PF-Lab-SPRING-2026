#include <stdio.h>

int main() {
    int a[3][3], t[3][3];
    int cofactor[3][3], adj[3][3];
    int i, j;

    printf("Enter 3x3 matrix:\n");
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            scanf("%d",&a[i][j]);

    
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            t[j][i] = a[i][j];

    printf("\nTranspose:\n");
    for(i=0;i<3;i++) {
        for(j=0;j<3;j++)
            printf("%d ", t[i][j]);
        printf("\n");
    }

    
    int det =
    a[0][0]*(a[1][1]*a[2][2] - a[1][2]*a[2][1])
  - a[0][1]*(a[1][0]*a[2][2] - a[1][2]*a[2][0])
  + a[0][2]*(a[1][0]*a[2][1] - a[1][1]*a[2][0]);

    printf("\nDeterminant = %d\n", det);

    
    cofactor[0][0] =  (a[1][1]*a[2][2] - a[1][2]*a[2][1]);
    cofactor[0][1] = -(a[1][0]*a[2][2] - a[1][2]*a[2][0]);
    cofactor[0][2] =  (a[1][0]*a[2][1] - a[1][1]*a[2][0]);

    cofactor[1][0] = -(a[0][1]*a[2][2] - a[0][2]*a[2][1]);
    cofactor[1][1] =  (a[0][0]*a[2][2] - a[0][2]*a[2][0]);
    cofactor[1][2] = -(a[0][0]*a[2][1] - a[0][1]*a[2][0]);

    cofactor[2][0] =  (a[0][1]*a[1][2] - a[0][2]*a[1][1]);
    cofactor[2][1] = -(a[0][0]*a[1][2] - a[0][2]*a[1][0]);
    cofactor[2][2] =  (a[0][0]*a[1][1] - a[0][1]*a[1][0]);

    printf("\nCofactor Matrix:\n");
    for(i=0;i<3;i++) {
        for(j=0;j<3;j++)
            printf("%d ", cofactor[i][j]);
        printf("\n");
    }

    
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            adj[j][i] = cofactor[i][j];

    printf("\nAdjoint Matrix:\n");
    for(i=0;i<3;i++) {
        for(j=0;j<3;j++)
            printf("%d ", adj[i][j]);
        printf("\n");
    }

   
    if(det == 0) {
        printf("\nInverse does not exist (determinant = 0)\n");
    } else {
        printf("\nInverse Matrix:\n");
        for(i=0;i<3;i++) {
            for(j=0;j<3;j++)
                printf("%.2f ", adj[i][j] / (float)det);
            printf("\n");
        }
    }

    return 0;
}