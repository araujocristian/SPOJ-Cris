#include <stdio.h>

int balas[1010];

int main()
{
 int n, m, tipo, min;
 
 scanf("%d %d", &n, &m);
 
 for (int i = 0; i <= m; i++) balas[i] = 0;
 
 for (int i = 0; i < n; i++) {
  scanf("%d", &tipo);
  balas[tipo]++;
 }
 
 bool flag = true;
 for (int i = 1; i <= m; i++) {
 if (flag){
  min = balas[i];
  flag = false;
 }
 else if (balas[i] < min) min = balas[i];
 }
 
 printf("%d\n", min);
 
}

