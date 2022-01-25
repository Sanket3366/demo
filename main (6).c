#include <stdio.h> 
int main() { int m1,m2,m3,m4,a; 
printf("Enter marks: " ); 
scanf("%d %d %d %d",&m1,&m2,&m3,&m4); a =((m1+m2+m3+m4)/4);
if(a>90) { 
    printf("Grade A"); 
    printf("\nCongratulation you have scored A/B");
    } else if(75<a && a<90) {
        printf("Grade B"); 
        printf("\nCongratulation you have scored A/B");
        } else if(60<a && a<75) { 
            printf("Grade C"); 
            printf("\nGood you have scored A/D");
            } else if(35<a && a<60) {
                printf("Grade D"); 
                
            } else { 
                printf("Grade F");
                printf("\nYou have scored F better luck next time"); } }