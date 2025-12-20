#include <stdio.h>
#include <string.h> 

int main(){
    printf("enter a year and a month: ");
    int year;
    char month[20];
    scanf("%d %s", &year, month);

    if(strcmp(month, "january") == 0){
        printf("31 day\n");
    }
    else if(strcmp(month, "february") == 0){
        if(year % 4 == 0){
            printf("29 days\n");
        }
        else{
            printf("28 days\n");
        }
    }
    else if(strcmp(month, "march") == 0){
        printf("31 day\n");
    }
    else if(strcmp(month, "april") == 0){
        printf("30 days\n");
    }
    else if(strcmp(month, "may") == 0){
        printf("31 day\n");
    }
    else if(strcmp(month, "june") == 0){
        printf("30 days\n");
    }
    else if(strcmp(month, "july") == 0){
        printf("31 day\n");
    }
    else if(strcmp(month, "august") == 0){
        printf("31 day\n");
    }
    else if(strcmp(month, "september") == 0){
        printf("30 days\n");
    }
    else if(strcmp(month, "october") == 0){
        printf("31 day\n");
    }
    else if(strcmp(month, "november") == 0){
        printf("30 days\n");
    }
    else if(strcmp(month, "december") == 0){
        printf("31 day\n");
    }
    return 0;
}