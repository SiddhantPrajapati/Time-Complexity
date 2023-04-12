#include<stdio.h>
void main()
{
    int n,a[10],b[10],t[10],w[10],g[10],i,m;
    float att=0,awt=0;
    for(i=0;i<0;i++)
    {
    a[i]=0;b[i]=0;w[i]=0;g[i]=0;
    }
    printf("Enter the number of processes:");
    scanf("%d",&n);
    printf("Enter the burst time:");
    for(i=0;i<n;i++)
    scanf("%d",&b[i]);
    printf("Enter the arrival time:");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    g[0]=0;
    for(i=0;i<10;i++)
    {
    w[i]=g[i]-a[i];
    t[i]=g[i+1]-a[i];
    awt=awt+w[i];
    att=att+t[i];
    }
    awt=awt/n;
    att=att/n;
    printf("\n\t Process\t Waiting time \t Turnaround time\n");
    for(i=0;i<n;i++)
    {
    printf("\t %d\t \t  %d\t \t %d\n" ,i,w[i],t[i]);
    }
    printf("\n The average waiting time is %t \n",awt);
    printf("The average turnaround time is %f\n",att);
}
