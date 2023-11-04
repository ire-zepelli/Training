#include <stdio.h>

int main(void){
    int start_hour, start_min, end_hour, end_min;
    int start_inMins, end_inMins, difference;
    char aorp1[3], aorp2[3];

    printf("Syntax: hh:mm am/pm\n");
    printf("Enter start time: ");
    scanf("%d:%d %s", &start_hour, &start_min, &aorp1);
    printf("Enter end time: ");
    scanf("%d:%d %s", &end_hour, &end_min, &aorp2);

    if(((aorp1[0] == 'p' || aorp1[0] == 'p') && (aorp2[0] == 'p' || aorp2[0] == 'P')) && (start_hour > end_hour)){
        end_hour += 12;
    }
    if(((aorp1[0] == 'a' || aorp1[0] == 'A') && (aorp2[0] == 'p' || aorp2[0] == 'P')) && (start_hour < end_hour)){
        start_hour += 12;
    }
    if(aorp1[0] == 'p' || aorp1[0] == 'P'){
        start_hour += 12;
    }
    if(aorp2[0] == 'p' || aorp2[0] == 'P'){
        end_hour += 12;
    }
    
    start_inMins = (start_hour * 60) + start_min;
    end_inMins = (end_hour * 60) + end_min;
    difference = end_inMins - start_inMins;

    if(difference < 0){
        difference += 24 * 60;
    }

    printf("---Time Difference---\n");
    printf("%d hours and %d mins\n", difference / 60, difference % 60);
    
}