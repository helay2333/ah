#include<iostream>
using namespace std;
#define MAX 100
typedef struct
{
	int a[MAX][MAX];
	int N;//µã
	int M;//±ß
}Map;
void CreateMap(Map& G)
{
	cin >> G.N >> G.M;
	for (int i = 0; i < G.N + 1; i++) {
		for (int j = 0; j < G.N + 1; j++) {
			G.a[i][j] = 0;
		}
	}
	for (int i = 0; i < G.M; i++) {
		int x = 0, y = 0, z = 0;
		cin >> x >> y >> z;
		G.a[x][y] = z;
		G.a[y][x] = z;
	}
}
int main()
{
	Map G;
	CreateMap(G);
	int K = 0;
	cin >> K;
	int b[10] = { 0 };
	int visited[10] = { 0 };
	int n = 0;
	for (int i = 0; i < K; i++) {
		cin >> n;
		int* arr = new int[n + 2];
		arr[0] = 0;
		arr[n + 1] = 0;
		visited[0] = 0;
		for (int j = 1; j < n + 1; j++) {
			cin >> arr[j];
			visited[j] = 0;
		}
		if (n < G.N) {
			continue;
		}
		else {
			for (int j = 0; j < n + 2; j++) {
				if (visited[arr[j]] == 0 && G.a[arr[j]][arr[j + 1]]) {
					b[i] += G.a[arr[j]][arr[j + 1]];
					visited[arr[j]] = 1;
				}
				else {
					if (j == n + 1) {
						break;
					}
					else {
						b[i] = 0;
						break;
					}
				}

			}
		}

	}
	int count = 0;
	int min = 0;
	int t = 0;
	for (int i = 0; i < K; i++) {
		if (b[i]) {
		    min = b[i];
			t = i;
			count++;
		}
		if (b[i] < min) {
			min = b[i];
			t = i;
		}
	}
	cout << count << endl;
	cout << t - 1 <<" "<< min << endl;

	return 0;
}