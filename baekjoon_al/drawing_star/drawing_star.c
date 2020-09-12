#include <stdio.h>
#define MAX 4000
char map[MAX][MAX];
 
void init() {
	for (int i = 0; i < MAX; ++i) {
		for (int j = 0; j < MAX; ++j) {
			map[i][j] = ' ';
		}
	}
}
 
void solve(int n, int x, int y) {
	if (n == 1) {
		map[x][y] = '*';
		return;
	}
	int div = n / 3;
	for (int i = 0; i < 3; ++i) {
		for (int j = 0; j < 3; ++j) {
			if (i == 1 && j == 1) {
				continue;
			}
			solve(div, x + (div * i), y + (div * j));
		}
	}
	return;
}
 
int main(int argv, char* argc[])
{
	int n;
	scanf("%d", &n);
 
    if(n % 3 !=0){
        printf("N= 3^k\n");
        return 0;        
    }     
	init();
	solve(n, 0, 0);
 
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			printf("%c", map[i][j]);
		}
		printf("\n");
	}
 
	return 0;
}
