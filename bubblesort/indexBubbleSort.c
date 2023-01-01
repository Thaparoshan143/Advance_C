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
    int tempIndex,temp;
    for(int i=0;i<arraySize-1;i++)
    {
        tempIndex=i;
        for(int j=i;j<arraySize;j++)
        {
            if(*(arrptr+tempIndex)>*(arrptr+j))
            {
                tempIndex=j;
            }
        }
        temp=*(arrptr+i);
        *(arrptr+i)=*(arrptr+tempIndex);
        *(arrptr+tempIndex)=temp;
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

