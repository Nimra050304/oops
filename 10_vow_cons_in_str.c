//only for lower case letters
#include <stdio.h>

int main() {

    char array[15];
    int length=0,vowel=0,consonent=0;
    fgets(array,sizeof(array),stdin);

    //string length function

    for (int i=0;i<15;i++)
    {
        if(array[i]!='\0')
        {
            length++;
        }
        else 
        {
            break;
        }
    }
    length=length-1;
    printf("%d",length);


    //check vowels
    for(int i=0;i<length;i++)
    {
        if(array[i]>=97&&array[i]<=122)
        {
            if(array[i]=='a'||array[i]=='e'||array[i]=='i'||array[i]=='o'||array[i]=='u')
            {
                vowel++;
            }
            else 
            {
                consonent++;
            }
        }

    }

    printf("Number of lower case vowels in the string are %d\n",vowel);
    printf("Number of lower case consonents in the string are %d\n",consonent);

    return 0;
}
