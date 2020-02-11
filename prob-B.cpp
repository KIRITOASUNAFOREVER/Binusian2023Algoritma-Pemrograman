#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int banyakData=0;

struct data{
 char name[21];
 char gender[20];
 char division[15];
 int retire=0;
 int resign=0;
}list[100];

int findResign()
{
 for(int x=banyakData-1;x>=0;x--)
 {
  if(list[x].resign==1)
  {
   return x;
  }
 }
 return -1;
}

int findSame(char name[])
{
 for(int x=banyakData-1;x>=0;x--)
 {
  if(strcmp(name,list[x].name)==0)
  {
   return 1;
  }
 }
 return 0;
}

void inData()
{
 char name[21];
 char gender[20];
 char div[15];
 
 scanf("%s",name);
 getchar();
 scanf("%s",gender);
 getchar();
 scanf("%s",div);
 getchar();
 
 if(findSame(name)==0)
 {
  int idx=findResign();
  if(idx!=-1)
  {
   strcpy(list[idx].name,name);
   strcpy(list[idx].gender,gender);
   strcpy(list[idx].division,div);
   list[idx].resign=0;
  }
  else
  {
   strcpy(list[banyakData].name,name);
   strcpy(list[banyakData].gender,gender);
   strcpy(list[banyakData].division,div);
   banyakData++;
  }
 } 
}

void swapData()
{
 int idx1,idx2;
 scanf("%d %d",&idx1,&idx2);
 getchar();
 struct data tmp;
 tmp=list[banyakData-1-idx1];
 list[banyakData-1-idx1]=list[banyakData-1-idx2];
 list[banyakData-1-idx2]=tmp;
}

void resign()
{
 int idx;
 scanf("%d",&idx);
 getchar();
 list[banyakData-1-idx].resign=1;
}

void retire()
{
 int idx;
 scanf("%d",&idx);
 getchar();
 list[banyakData-1-idx].retire=1;
}

void printAllData()
{
 for(int x=banyakData-1;x>=0;x--)
 {
  if(list[x].retire==1)
  {
   printf("Nama : %s [RETIRED]\n",list[x].name);
   printf("Gender : %s\n",list[x].gender);
   printf("Division : %s\n",list[x].division);
  }
  else if(list[x].resign!=1)
  {
   printf("Nama : %s\n",list[x].name);
   printf("Gender : %s\n",list[x].gender);
   printf("Division : %s\n",list[x].division);
  }
 }
}

void printAvaNewToOld()
{
 for(int x=banyakData-1;x>=0;x--)
 {
  if(list[x].resign==0&&list[x].retire==0)
  {
   printf("%s\n",list[x].name);
  }
 }
}

void printAvaOldToNew()
{
 for(int x=0;x<banyakData;x++)
 {
  if(list[x].resign==0&&list[x].retire==0)
  {
   printf("%s\n",list[x].name);
  }
 }
}

int main ()
{
 int kasus;
 int input;
 scanf("%d",&kasus);
 getchar();
 for(int x=1;x<=kasus;x++)
 {
  scanf("%d",&input);
  getchar();
  switch(input)
  {
   case 1:
    inData();
    break;
   case 2:
    swapData();
    break;
   case 3:
    resign();
    break;
   case 4:
    retire();
    break;
  }
 }
 printAvaOldToNew();
 return 0;
}
