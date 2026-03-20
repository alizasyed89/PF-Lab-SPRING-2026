#include <stdio.h>

int main() {
    int seats[5][6] = {
        {1,0,1,0,0,1},
        {1,1,1,0,0,0},
        {0,0,0,0,0,0},
        {1,1,0,1,1,0},
        {0,1,0,0,1,0}
    };

    int available = 0, maxRow = 0, maxBooked = 0;

    for(int i=0;i<5;i++) {
        int booked = 0;
        for(int j=0;j<6;j++) {
            if(seats[i][j] == 0)
                available++;
            else
                booked++;
        }
        if(booked > maxBooked) {
            maxBooked = booked;
            maxRow = i;
        }
    }

    printf("available seats = %d\n", available);
    printf("row with max bookings = %d\n", maxRow + 1);

    return 0;
}