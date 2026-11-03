#include <stdio.h>

void main()
{
    FILE *fp;
    char name[300];


    // 1. Writing data into file
    fp = fopen("company.txt", "w");

    if (fp == NULL)
    {
        printf("File cannot be opened");
    
        return;
    }

    fprintf(fp, "Purushothaman I Founder & CEO");

    fclose(fp);

    printf("Data written successfully\n");


    // 2. Appending data into file
    fp = fopen("company.txt", "a");

    if (fp == NULL)
    {
        printf("File cannot be opened");
        return;
    }

    fprintf(fp, "\n ZYNTRIX TECHNOLOGIES");
    fclose(fp);

    printf("Data appended successfully\n");


    // 3. Reading data from file
    fp = fopen("company.txt", "r");

    if (fp == NULL)
    {
        printf("File cannot be opened");
        return;
    }

    printf("\nFile Contents:\n");

    while (fgets(name, sizeof(name), fp) != NULL)
    {
        printf("%s", name);
    }

    fclose(fp);

}
