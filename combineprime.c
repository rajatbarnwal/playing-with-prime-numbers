#include<stdio.h>
int main()
{
 int x,j,y,z,i,n,c,f,q,t,v ;
 printf("enter the no.s...\n");
 scanf("%d%d",&n,&j);
 for(i=2;i<=n;i++)
 {
     c=0;
   for(x=1;x<=i;x++)
   {
    if(i%x==0)
    {
        c++;
    }}
     if(c==2)
    {
     for(y=2;y<=j;y++)
     {
         f=0;
      for(z=1;z<=y;z++)
      {
       if(y%z==0)
       {
           f++;
       }}
       if(f==2)
       {

         q=combine(i,y);
         printf("%d\n",q);
         checkprime(q);




       }


     }
    }
 }
}
int combine(int i, int y)
{
    int t=y;
    while(y!=0)
    {
        i=i*10;
        y =y/10;
    }
    return i+t;
}
int checkprime(int q)
{
 int i,g=0;
 for(i=1;i<=q;i++)
 {
     ;
  if(q%i==0)
  {
   g++;
  }}
 if(g==2)
  {
   printf("u %d\n",q);
  }
}







