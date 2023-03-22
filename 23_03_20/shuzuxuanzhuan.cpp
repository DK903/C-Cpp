//矩阵顺时针旋转 90 度输出
#include <iostream> 
using namespace std;
int num[201][201];
int main(){
	int n,m;
	cin >> n >> m;
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			cin >> num[i][j];
		}
	}
	for(int i = 0; i < m ;i ++){
		for(int j = 0; j < n; j++){
			if( j != n - 1){
				cout << num[n-1-j][i] << " ";
			}
			else {
				cout << num[n-1-j][i] << endl;
			}
		}
	}
	return 0;
}
