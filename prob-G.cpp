#include <stdio.h>
#include <string.h>

int findMove(char pos1[105],char pos2[105],int step,int maxStep,int res)
{
 char tmp1[105];
 if(res==1)
 {
  return 1;
 }
 else
 {
  if(step<=maxStep)
  {
   if(strcmp(pos1,pos2)==0)
   {
    return 1;
   }
   else if(res==0)
   {
    if(pos1[0]+2<='H'&&pos1[1]+1<='8')
    {
     strcpy(tmp1,pos1);
     tmp1[0]+=2;
     tmp1[1]+=1;
     res = findMove(tmp1,pos2,step+1,maxStep,res);
    }
    if(pos1[0]+1<='H'&&pos1[1]+2<='8')
    {
     strcpy(tmp1,pos1);
     tmp1[0]+=1;
     tmp1[1]+=2;
     res = findMove(tmp1,pos2,step+1,maxStep,res);
    }
    if(pos1[0]-2>='A'&&pos1[1]+1<='8')
    {
     strcpy(tmp1,pos1);
     tmp1[0]-=2;
     tmp1[1]+=1;
     res = findMove(tmp1,pos2,step+1,maxStep,res);
    }
  
    if(pos1[0]-1>='A'&&pos1[1]+2<='8')
    {
     strcpy(tmp1,pos1);
     tmp1[0]-=1;
     tmp1[1]+=2;
     res = findMove(tmp1,pos2,step+1,maxStep,res);
    }
  
    if(pos1[0]+1<='H'&&pos1[1]-2>='1')
    {
     strcpy(tmp1,pos1);
     tmp1[0]+=1;
     tmp1[1]-=2;
     res = findMove(tmp1,pos2,step+1,maxStep,res);
    }
    
    if(pos1[0]+2<='H'&&pos1[1]-1>='1')
    {
     strcpy(tmp1,pos1);
     tmp1[0]+=2;
     tmp1[1]-=1;
     res = findMove(tmp1,pos2,step+1,maxStep,res);
    }
    
    if(pos1[0]-1>='A'&&pos1[1]-2>='1')
    {
     strcpy(tmp1,pos1);
     tmp1[0]-=1;
     tmp1[1]-=2;
     res = findMove(tmp1,pos2,step+1,maxStep,res);
    }
    
    if(pos1[0]-2>='A'&&pos1[1]-1>='1')
    {
     strcpy(tmp1,pos1);
     tmp1[0]-=2;
     tmp1[1]-=1;
     res = findMove(tmp1,pos2,step+1,maxStep,res);
    }
   }
  }
  else
  {
   return res;
  }
 }
 return res; 
}

int main ()
{
    char position1[105],position2[105];
 int result;
 int counter;
 int step;
 scanf("%d",&counter);
 
 for(int i=0;i<counter;i++)
 {
     scanf("%d",&step);
     scanf("%s %s",&position1,&position2);
     result = findMove(position1,position2,0,step*2,0);
     if(result>0)
     {
         printf("Case #%d: %s\n",i+1,"YES");
        }
        else
        {
            printf("Case #%d: %s\n",i+1,"NO");
        }
    }
 return 0;
}
