#include<stdio.h>
void message();
void main()
{
  printf("hello world");
  message();
}
void message()
{
  main();
}