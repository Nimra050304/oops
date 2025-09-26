#include <stdio.h> 
#include <string.h>

int file_split(void)
{


    char name_of_file[100],line[1000];
    int end_line,loop_counter=0;


    //ask user for file name (assuming file is in the same folder as the main .c file)

    printf("Enter the name of the file iwth the .txt extension\n");
    fgets(name_of_file,sizeof(name_of_file),stdin);

    //stripping the file name of \n to ensure we get a match
    name_of_file[strcspn(name_of_file,"\n")]='\0';

    FILE *read_ptr =fopen(name_of_file,"r");

    if(!read_ptr)
    {
        printf("Unable to open file\n");
        return 1;

    }

    printf("Enter the end line number you want in the first file\n ");
    scanf("%d",&end_line);

    int consume;
    while((consume=getchar())!='\n')
    {}

    FILE *new_ptr=fopen("file1.txt","w");
    if(!new_ptr)
    {
        printf("failed to split files\n");
        return 1;

    }

    while(loop_counter!=end_line)
    {
        char* val_check=fgets(line,sizeof(line),read_ptr);
        if(!val_check)
        {
            fclose (new_ptr);
            printf("File split");
            return 0;
        }

        fputs(line,new_ptr); 
        loop_counter++; 
        
    }

    fclose(new_ptr);
    FILE* sec_ptr=fopen("file2.txt","w");

    if(!sec_ptr)
    {
        printf("Failed to split the file\n");
        return 1;
    }
    

    while((fgets(line, sizeof(line),read_ptr))!=NULL)
    {
        fputs(line,sec_ptr);
    }
    fclose(sec_ptr);
    fclose (read_ptr);

    printf("File successfully split");


        

    
}
