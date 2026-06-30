#include<stdio.h>
#include<stdbool.h>
int main (void){
FILE *a_out;
a_out = fopen("io.txt","w");
int input = 0;
while (true)
{
printf("\nEnter a number , press 0 to exit\n");
scanf("%d",&input);
if(input == 0){
break;
}
else {
fprintf(a_out,"%d\n",input);
}

}


fclose(a_out);
return 0;
}
