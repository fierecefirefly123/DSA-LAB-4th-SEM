#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char message[40];
    FILE *inputfile;
    FILE *outputfile;
    inputfile=fopen("input.txt","r");
    if(inputfile==NULL)
        exit(0);
    else
        fgets(message,sizeof(message),inputfile);
    fclose(inputfile);
    outputfile=fopen("output.txt","w");
    if(outputfile==NULL)
        exit(0);
    else
    {
        fprintf(outputfile,"%s",message);
    }
}
