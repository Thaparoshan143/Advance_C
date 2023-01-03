#include<stdio.h>
#include<stdlib.h>

int getIntInput(char* t);

int main()
{
    int* arrptr;
    int arraySize;
    arraySize=getIntInput("Enter the array size : ");
    arrptr = (int*) malloc(arraySize);
    printf("Array Elements : \n");
    for(int i=0;i<arraySize;i++)
    {
        scanf("%d",arrptr+i);
    }
    printf("Arranging the array using bubblesort\n");
    int temp;
    for(int i=0;i<arraySize-1;i++)
    {
        for(int j=i;j<arraySize;j++)
        {
            if(*(arrptr+i)>*(arrptr+j))
            {
                temp=*(arrptr+i);
                *(arrptr+i)=*(arrptr+j);
                *(arrptr+j)=temp;
            } 
        }
    }
    for(int i=0;i<arraySize;i++)
    {
        printf("%d\n",*(arrptr+i));
    }
    return 0;
}

int getIntInput(char* t)
{
    int temp;
    printf("%s\n",t);
    scanf("%d",&temp);
    return temp;
}

