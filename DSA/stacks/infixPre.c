#include<stdio.h>
#include<string.h>
void InToPre(char exp[]);
void reverse(char exp[]);
void revBrackets(char exp[]);
int postFix(char exp[]);


int main(){
char exp[]="((a/b)+c)-(d+(e*f))";
printf("given expression is:%s",exp);
//to covert InfixtoPostfix
InToPre(exp);
printf("infix to prefix is:%s",exp);
return 0;
}
void InToPre(char exp[]){
int len=strlen(exp);
reverse(exp);
revBrackets(exp);
postFix(exp);
reverse(exp);


}
void reverse(char exp[]){
int i;
int len=strlen(exp);
int j=len;
char temp[j];
temp[j--]='\0';  //rev filling
i=0;
while(exp[i]!='\0'){
  temp[j]=exp[i];
  j--;
  i++;
}
strcpy(exp,temp);
}


void revBrackets(char exp[]){
int i=0;
while(exp[i]!='\0')
{
  if (exp[i]=='(')
  {
    exp[i]==')';
  }
  else if(exp[i]==')')
  {
    exp[i]=='(';
  }
  i++;
}

  
}

int postFix(char exp[]){
int i,j;

}