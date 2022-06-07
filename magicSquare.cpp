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

int main(){
	int N = 1;
	int **array = create2D(N);
	array[0][0] = 1;
	test1(N, array);
	return 0;
}
