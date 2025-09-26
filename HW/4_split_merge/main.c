#include <stdio.h>
#include "C:\Users\user\Desktop\OOP\N\hw_programs\file_split_merge\headers\file_merge.h"
#include "C:\Users\user\Desktop\OOP\N\hw_programs\file_split_merge\headers\file_split.h"
#ifndef FILE_MERGE
#define FILE_MERGE

#ifndef FILE_SPLIT
#define FILE_SPLIT

int main() {

    int choice,consume;


    do
    {
        printf("Do you want to merge a file or split it? Enter 0 for termination \n");
        scanf("%d",&choice);

        while((consume=getchar())!='\n')
        {}

        switch (choice)
        {
            case 1:
                file_merge();
                break;
            case 2:
                file_split();
                break;
            default:
                printf("Invalid choice. Try again\n");
                break;
                
        }
    }while(choice!=0);

    return 0;
}

#endif
#endif
