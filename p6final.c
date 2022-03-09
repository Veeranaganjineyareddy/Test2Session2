#include<stdio.h>
void input_string(char *a)
{
  printf("enter a string:");
  scanf("%s",a);
}
int str_reverse(char *string,char *substring)
{
    
    printf("enter the substring of a string whose index needs to be found:\n");
  scanf("%s",substring);
  int index;
  index=strstr(*string,*substring);
  
  
}

void output(char *string,char *substring,int index)
{
  if(index)
    printf("SubString is found in the First String at %d position.\n",index-*substring);
  else
    printf("-1");
}
int main()
{
  char a,string,substring;
  int index;
  input_string(&a);
  index=str_reverse(&string,&substring);
  output(&string,&substring,index);
  
}