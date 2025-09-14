//check whether a string is palindrome or not
#include <stdio.h>

int main() {

    char array[50];
    int j,i,len=0,count=0;

    int arr[50];

    printf("Enter the string\n");
    fgets (array,sizeof(array),stdin);

    //checks length of the string
    for (i=0;array[i]!='\0';i++)
    {
        len++;
    }
    len=len-1;

    //to convert uppercase to lowercase before checking

    for (i=0;i<len;i++)
    {
        if(array[i]<=90&&array[i]>=65)
        {
            array[i]=array[i]+32;
        }

    }
    printf("The string is ");
    for (i=0;i<len;i++){
        printf("%c",array[i]);
    }

    //store value of char array in an integer array
    for (i=0;i<len;i++)
    {
        arr[i]=(int)array[i];
    }

    int half=len/2;


    for(i=0,j=len-1;i<half;i++,j--)
    {
        if (arr[i]==arr[j])
        {
        count++;
        }
    }

    if (count==half){
        printf("\nString is palindrome");
    }
    else printf("\nString is not a palindrome");


    return 0;
}
