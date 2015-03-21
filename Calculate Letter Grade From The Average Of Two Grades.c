#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Variables
    float grade1;
    float grade2;
    
    //Prompts user and stores their inputs
    printf("Enter your two grades! \n");
    scanf(" %f", &grade1);
    scanf(" %f", &grade2);
    
    //Calculates average
    float avg = (grade1 + grade2) / 2;
    
    //Tells user their average
    printf("Average: %.2f \n", avg);
    
    //Figures out where the average fits in and tells the user
    if(avg >= 93){
        printf("Grade: A \n");
    }else if(avg >= 85){
        printf("Grade: B \n");
    }else if(avg >= 75){
        printf("Grade: C \n");
    }else if(avg >= 70){
        printf("Grade: D \n");
    }else(avg <= 69);{
        printf("There's no hope for you lmao \n");
    }

    return 0;
}
