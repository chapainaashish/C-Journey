#include<stdio.h>
#include<string.h>
int main()
{
    char name[50][50],temp[50];
    int i,j,n;
    printf("How many students?");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter name:");
        scanf("%s",name[i]);
    }

//sorting names
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            // Determining alphabetical order
            if(strcmp(name[i],name[j])>0)
            {
                strcpy(temp,name[i]);
                strcpy(name[i],name[j]);
                strcpy(name[j],temp);
            }
        }
    }

//printing sorted data
    for(i=0;i<n;i++)
    {
        printf("%s\n",name[i]);
    }
    return 0;
}

