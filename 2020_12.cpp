//#include<iostream>
//using namespace std;
//int visited[205] = { 0 };
//int b[205] = { 0 };
//int a[205][205] = { 0 };
//int arr[205] = { 0 };
//int main()
//{
//	int N, M;
//	cin >> N >> M;
//	for (int i = 0; i < M; i++) {
//		int x = 0, y = 0, z = 0;
//		cin >> x >> y >> z;
//		a[x][y] = a[y][x] = z;		
//	}
//	int K = 0;
//	cin >> K;
//	int n = 0;
//	for (int i = 0; i < K; i++) {
//		cin >> n;
//		arr[0] = 0;
//		arr[n + 1] = 0;
//		visited[0] = 0;
//		for (int j = 1; j < n + 1; j++) {
//			cin >> arr[j];
//			visited[j] = 0;
//		}
//		if (n < N ) {
//			continue;
//		}
//		else {
//			for (int j = 0; j < n + 2; j++) {
//				if (visited[arr[j]] == 0 && a[arr[j]][arr[j + 1]]) {
//					b[i] += a[arr[j]][arr[j + 1]];
//					visited[arr[j]] = 1;
//				}
//				else {
//					if (j == n + 1) {
//						break;
//					}
//					else {
//						b[i] = 0;
//						break;
//					}
//				}
//			}
//		}
//	}
//	int count = 0;
//	int min = 205;
//	int t = 0;
//	for (int i = 0; i < K; i++) {
//		if (b[i]) {
//			if (t == 0) {
//				min = b[i];
//				t = i;
//			}
//			count++;
//		}
//		if (b[i] && b[i] < min) {
//			min = b[i];
//			t = i;
//		}
//	}
//	cout << count << endl;
//	cout << t + 1  <<" "<< min << endl;
//	return 0;
//}