#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>
#include<algorithm>

using namespace std;

struct data {
	int x, y;
	bool operator< (const data& D) const {
		if (x == D.x) {
			return y < D.y;
		}
		else return x < D.x;
	}
};

struct data cord[100001];

int main() {
	int n;
	scanf("%d", &n);
	int x, y;
	for (int i = 0; i < n; ++i) {
		scanf("%d %d", &cord[i].x, &cord[i].y);
	}

	sort(cord, cord + n);

	for (int i = 0; i < n; ++i) {
		printf("%d %d\n", cord[i].x, cord[i].y);
	}


}