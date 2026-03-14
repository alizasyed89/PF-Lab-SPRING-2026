#include <stdio.h>

int main()
{
    int pass[10], fail[10];
    int p=0,f=0,mark,i;
    float avgP=0, avgF=0;

    printf("Enter marks (-1 to stop):\n");

    while(1)
    {
        scanf("%d",&mark);

        if(mark==-1)
            break;

        if(mark>=5 && mark<=10)
        {
            pass[p]=mark;
            avgP += mark;
            p++;
        }
        else if(mark>=0 && mark<5)
        {
            fail[f]=mark;
            avgF += mark;
            f++;
        }
    }

    printf("Pass Marks:\n");
    for(i=0;i<p;i++)
        printf("%d ",pass[i]);

    printf("\nFail Marks:\n");
    for(i=0;i<f;i++)
        printf("%d ",fail[i]);

    if(p>0)
        printf("\nAverage Pass = %.2f",avgP/p);

    if(f>0)
        printf("\nAverage Fail = %.2f",avgF/f);

    return 0;
}