#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>

int ch[51][51];
int pl[51][51];

int dx[4] = { 0,0,1,-1 };
int dy[4] = { 1,-1,0,0 };

void checkPlant(int x, int y) {
	if (ch[x][y]) return;
	ch[x][y] = 1;
	if (!pl[x][y]) return;
	for (int i = 0; i < 4; ++i) {
		if (x + dx[i] >= 0 && y + dy[i] >= 0 && !ch[x + dx[i]][y + dy[i]] && pl[x + dx[i]][y + dy[i]]) checkPlant(x + dx[i], y + dy[i]);
	}
	return;
	
}

int main() {

	int t, m, n, k;
	scanf("%d", &t);
	for (int i = 0; i < t; ++i) {
		scanf("%d %d %d", &m, &n, &k);
		memset(ch, 0, sizeof(ch));
		memset(pl, 0, sizeof(pl));
		for (int l = 0; l < k; l++) {
			int x, y;
			scanf("%d %d", &x, &y);
			pl[x][y] = 1;
		}
		int num = 0;
		for (int j = 0; j < m; ++j) {
			for (int l = 0;l < n; ++l) {
				if (!ch[j][l]&&pl[j][l]) {
					checkPlant(j, l);
					num++;
				}
				ch[j][l] = 1;
			}
		}
		printf("%d\n", num);

	}
	
	return 0;
}