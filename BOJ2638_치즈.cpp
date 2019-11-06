#include <iostream>
#include <cstdio>

int map[101][101];
int n,m,s=0;
void f(int i,int j);

int main(void)
{
  int temp[101][101];
  scanf("%d%d ",&n,&m);
  for(int i=0;i<n;i++)
    for(int j=0;j<m;j++)
      scanf("%d",&map[i][j]);
  for(int k=1;k;s++)
  {
    k=0;
    f(0,0);
    for(int i=0;i<n;i++)
    {
      for(int j=0;j<m;j++)
      {
        if(map[i][j]==1)
        {
          int t=0;
          if(map[i-1][j]==2)t++;if(map[i+1][j]==2)t++;if(map[i][j-1]==2)t++;if(map[i][j+1]==2)t++;
          if(t>=2)temp[i][j]=0;
          else temp[i][j]=1;
          k=1;
        }
        else temp[i][j]=0;
      }
    }
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
        map[i][j]=temp[i][j];
  }
  printf("%d",s-1);
}

void f(int i,int j)
{
  if(i<0||i>n-1||j<0||j>m-1)
      return;
  if(map[i][j])
      return;
  map[i][j]=2;
  f(i-1,j);
  f(i+1,j);
  f(i,j-1);
  f(i,j+1);
}
