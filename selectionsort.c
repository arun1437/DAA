#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define MAX 500

void sel_sort(int a[])
{
        int i,temp,j,min;
        for(i=0;i<MAX;i++)
        {
                min=i;
                for(j=i+1;j<MAX;j++)
                {
                        if(a[j]< min)
                        {
                                min=j;
                        }
                }
                temp=a[i];
                a[min]=a[i];
                a[min]=temp;
        }
}

int main()
{
        int i, a[MAX];
        unsigned long int run_tim;
        struct timespec start, end;
        // Intialize random numbers into the array
        srand(time(NULL));
        for (i = 0; i < MAX; i++)
                a[i] = rand() % MAX;

        clock_gettime(CLOCK_REALTIME, &start);
        sel_sort(a);
        clock_gettime(CLOCK_REALTIME, &end);

        run_tim = end.tv_nsec - start.tv_nsec;

 printf("Time taken to sort the elements is %lu micro seconds\n", run_tim/1000);
}
