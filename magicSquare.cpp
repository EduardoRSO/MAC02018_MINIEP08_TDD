#include <iostream>

using namespace std;

bool allEqual(int N, int **m){
	int leftMost = m[0][0];
	for(int i = 0; i < N; i++)
		for(int j = 0; j < N; j++)
			if(m[i][j] != leftMost)
				return 0;
	return 1;
	
}

bool magicSquare(int N, int **m){
	if (N == 1){
		return 1;
	}
	if(allEqual(N, m)){
		return 1;
	}

	return 0;
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

void test1(){
	int N = 1;
	int **m = create2D(N);

	m[0][0] = 1;

	if(magicSquare(N, m) == true){
		cout << "Test 1: OK\n";
	}else{
		cout << " Test 1: NO\n";	
	}
}

void test2(){
	int N = 2;
	int **m = create2D(N);
	
	m[0][0] = 1;
	m[0][1] = 1;
	m[1][0] = 1;
	m[1][1] = 1;
	
	if(magicSquare(N, m) == true){
		cout << "Test 2: OK\n";
	}else{
		cout << " Test 2: NO\n";	
	}

}
int main(){
	//int N = 0;
	//int **array;
	//cin >> N;
	//array = create2D(N);
	//array = fill2D(N, array);
	//see2D(N, array);
	test1();
	test2();
	return 0;
}
