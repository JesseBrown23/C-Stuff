#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main()
{
    //Variables
    int i, temp, sorted;
    int howMany = 10;
    int goals[howMany];

    //Fills the array goals with 10 numbers from 1-25
    for(i=0; i<howMany; i++){
        goals[i] = (rand()%25) + 1;
    }

    //Prints this array
    printf("Original List: \n");
    for(i=0; i<howMany; i++){
        printf("%d \n", goals[i] );
    }

    //Sorting process
    while(1){
        sorted = 0;
        //If number before is bigger, switch
        for(i=0; i<howMany-1; i++){
            if(goals[i]>goals[i+1]){
                int temp = goals[i];
                goals[i] = goals[i+1];
                goals[i+1] = temp;
                sorted = 1;
            }
        }
        //breaks loop when sorted
        if(sorted==0){
            break;
        }
    }
    
    //Prints sorted array
    printf("Sorted List: \n");
    for(i=0; i<howMany; i++){
        printf("%d \n", goals[i] );
    }
    return 0;
}
