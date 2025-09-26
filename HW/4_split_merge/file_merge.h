#include <stdio.h>
#include <string.h>
#define line_size 2000
#define name_len 50

struct name_file
{
    char f_name[name_len];
}names[20];


int file_merge(void)
{

    int i=1;
    printf("Enter the name of the files to be merged. Ensure .txt is written. Input 0 when done. Max=20\n");

    fgets(names[0].f_name,sizeof(names[0].f_name),stdin);
    names[0].f_name[strcspn(names[0].f_name,"\n")]='\0';



    while(strcmp(names[i].f_name,"0")!=0)
    {
        fgets(names[i].f_name,sizeof(names[i].f_name),stdin);
        names[i].f_name[strcspn(names[i].f_name,"\n")]='\0';
        i++;
    }
    i=0;


    FILE* merge_ptr=fopen("merged.txt","w");

    if(!merge_ptr)
    {
        printf("Failed to merge");
        return 1;

    }

    char lines[line_size];

    while(i<20&&strcmp(names[i].f_name,"0")!=0)
    {
        FILE *ptr=fopen(names[i].f_name,"r");

        if(!ptr)
        {
            printf("Failed to merge %s\n",names[i].f_name);
            i++;
            continue;

        }
        while((fgets(lines,sizeof(lines),ptr))!=NULL)
        {
            fputs(lines, merge_ptr);
        }
        fclose (ptr);
        printf("Merged %s\n",names[i].f_name);
        i++;
    }



    return 0;
}
