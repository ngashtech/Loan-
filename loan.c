//program to assess loan application 
#include<stdio.h>
#include<math.h>
int main(){
int a;
float i;
printf("please enter the age, income=",a,i);
scanf("%d,%f",&a,&i);
if (a>=21 &&i>=21000){
printf("congratulations you have qualified for a loan");
}
else
 {
printf("unfortunately, we are unable to offer you a loan now");
}

return 0;
}