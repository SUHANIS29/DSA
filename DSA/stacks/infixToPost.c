#include<stdio.h>
int IntoPost(char exp[]);
int main(){

char exp[]="((x+(y*z))-w)";
printf("expression is:%s",exp);
IntoPost(exp);
printf("Converted to Post:%s",exp);

  return 0;
}
int IntoPost(char exp[]){



}