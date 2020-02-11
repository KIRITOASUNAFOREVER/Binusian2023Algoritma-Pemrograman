#include <stdio.h>
char map[102][102];
int food=0;
void floodFill(int x,int y,int mat1,int mat2){
	if(map[x][y]=='#')return;
	if (x>mat1-1||y>mat2-1||x<0||y<0) return;
	if(map[x][y]=='*')food+=1;
 	map[x][y]='#';
 	floodFill(x+1,y,mat1,mat2);
	floodFill(x-1,y,mat1,mat2);
	floodFill(x,y+1,mat1,mat2);
	floodFill(x,y-1,mat1,mat2);
}
int main(){
 int tescase,mat1,mat2;
 int x=0,y=0;
 scanf("%d",&tescase);
 	for(int j=0;j<tescase;j++){
  	scanf("%d %d",&mat1,&mat2);
		for(int i=0;i<mat1;i++){
  			for(int z=0;z<mat2;z++){
   				scanf(" %c",&map[i][z]);
					if (map[i][z]=='P'){
  					x=i;
  					y=z;
  				}		
			}
		}
  floodFill(x,y,mat1,mat2);
  printf("Case #%d: %d\n",j+1,food);
	food=0;
	}
 return 0;
}
