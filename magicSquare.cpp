#include <iostream>

using namespace std;

bool magicSquare(int N, int **m){
	if (N == 1){
		return 1;
	}
	return 0;
}

void test1(int N, int **m){
	if(magicSquare(N, m) == true){
		cout << "Test 1: OK\n";
	}else{
		cout << " Test 1: NO\n";	
	}
}

int **create2D(int N){
	int **temp = new int *[N];
	for(int i = 0; i < N; i++)
		temp[i] = new int[N];
	return temp;
}

int **fill2D(int N, int **m){
	for(int i = 0; i < N; i++)
		for(int j = 0; j < N; j++)
			cin >> m[i][j];
	return m;
}

int **see2D(int N, int **m){
	for(int i = 0; i < N; i++){
		cout << "[ ";
		for(int j = 0; j < N; j++)
			cout << m[i][j] << " ";
		cout << "]\n";
	}
	return m;
}
int main(){
	int N = 0;
	int **array;
	cin >> N;
	array = create2D(N);
	array = fill2D(N, array);
	see2D(N, array);
	test1(N, array);
	return 0;
}
