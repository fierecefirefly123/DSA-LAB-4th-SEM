#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void)
{
    int array[10];
    int sum=0
    FILE *inputfile;
    FILE *outputfile;
    if(inputfile==NULL)
    {
        printf("Error opening file\n");
        exit(0);
    }
    else
        inputfile=fopen("input.txt","w");
        fclose(inputfile);
    for(int i=0;i<9;i++)
    {
        fscanf(inputfile,"%d",&array[i]);
    }
    for(int i=0;i<9;i++)
    {
        sum=sum+array[i];

    }
    float avg=(float)sum/9;
    if(outputfile==NULL)
        printf("Error opening output file\n");
    else
        outputfile=fopen("output.txt","w");
    fprintf(outputfile,"Average of elements in an array is %f\n",avg);
    fclose(outputfile);
    return 0;


}
