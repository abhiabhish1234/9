#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int main(void) {
  char arr[10];
  char brr[10];
  int s,k,count=0,n1,n2,l;
  scanf("%s",arr);
  scanf("%s",brr);
  n1=strlen(arr);
  n2=strlen(brr);
  if(n1<n2)
  {
    l=n2;
  }
  else
  {
    l=n1;
  }
   //printf("%d",l);
  for(s=0;s<l;s++)
  {
    if(arr[s]==brr[s])
    {
      count++;
    }
  }
  printf("%d",count);
  for(k=count;k<l;k++)
  {
    arr[k]=brr[k];
  }  
  printf("%s",arr);
  printf("%d",l-count);
  return 0;
}
