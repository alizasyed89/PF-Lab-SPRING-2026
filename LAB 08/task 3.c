#include <stdio.h>

int main() {
    int temp[7][3] = {
        {30,35,28},{32,36,29},{31,34,27},
        {29,33,26},{28,32,25},{30,34,28},{31,35,29}
    };

    int max = temp[0][0];

    for(int i=0;i<7;i++) {
        int sum = 0;
        for(int j=0;j<3;j++) {
            if(temp[i][j] > max)
                max = temp[i][j];
            sum += temp[i][j];
        }
        printf("Day %d average = %.2f\n", i+1, sum/3.0);
    }

    printf("Highest temp = %d\n", max);

    return 0;
}