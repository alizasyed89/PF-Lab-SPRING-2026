#include <stdio.h>

int main() {
    int a[5][5], b[5][5];
    int r, c, i, j;

    int zero=1, identity=1, diagonal=1, scalar=1;
    int upper=1, lower=1, symmetric=1, skew=1;
    int equal=1;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter matrix A:\n");
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            scanf("%d",&a[i][j]);

    // For equal matrix
    printf("Enter matrix B (for equality check):\n");
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            scanf("%d",&b[i][j]);

    // Basic types
    if(r == c)
        printf("Square Matrix\n");
    else
        printf("Rectangular Matrix\n");

    if(r == 1)
        printf("Row Matrix\n");

    if(c == 1)
        printf("Column Matrix\n");

    // Checking properties
    for(i=0;i<r;i++) {
        for(j=0;j<c;j++) {

            if(a[i][j] != 0)
                zero = 0;

            // Identity
            if(i==j && a[i][j] != 1)
                identity = 0;
            if(i!=j && a[i][j] != 0)
                identity = 0;

            // Diagonal
            if(i!=j && a[i][j] != 0)
                diagonal = 0;

            // Scalar
            if(i==j && a[i][j] != a[0][0])
                scalar = 0;
            if(i!=j && a[i][j] != 0)
                scalar = 0;

            // Upper triangular
            if(i > j && a[i][j] != 0)
                upper = 0;

            // Lower triangular
            if(i < j && a[i][j] != 0)
                lower = 0;

            // Symmetric
            if(r == c && a[i][j] != a[j][i])
                symmetric = 0;

            // Skew-symmetric
            if(r == c && a[i][j] != -a[j][i])
                skew = 0;

            // Equal matrix
            if(a[i][j] != b[i][j])
                equal = 0;
        }
    }

    // Outputs
    if(zero) {
        printf("Zero Matrix\n");
        printf("Null Matrix\n");
    }

    if(identity) printf("Identity Matrix\n");
    if(diagonal) printf("Diagonal Matrix\n");
    if(scalar) printf("Scalar Matrix\n");

    if(upper) printf("Upper Triangular Matrix\n");
    if(lower) printf("Lower Triangular Matrix\n");

    if(symmetric) printf("Symmetric Matrix\n");
    if(skew) printf("Skew-Symmetric Matrix\n");

    // Determinant for singular check (only if square 3x3 max)
    if(r == c && r == 3) {
        int det =
        a[0][0]*(a[1][1]*a[2][2] - a[1][2]*a[2][1])
      - a[0][1]*(a[1][0]*a[2][2] - a[1][2]*a[2][0])
      + a[0][2]*(a[1][0]*a[2][1] - a[1][1]*a[2][0]);

        if(det == 0)
            printf("Singular Matrix\n");
        else
            printf("Non-Singular Matrix\n");
    }

    if(equal) printf("Equal Matrix\n");

    return 0;
}