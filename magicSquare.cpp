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

int **see2D(int N, int **m){
	for(int i = 0; i < N; i++){
		cout << "[ ";
		for(int j = 0; j < N; j++)
			cout << m[i][j] << " ";
		cout << "]\n";
	}
	return m;
}

bool equalEvenAndOddNumbers(int N, int **m){
	int horizontal = 0, vertical = 0, diagonal = 0;
	for(int i = 0; i < N; i++){
		for(int j = 0; j < N; j++){
			if(i == 0 and (m[i][j] % 2 == 0)) horizontal+=1;
			if(j == 0 and (m[i][j] % 2 == 0)) vertical+=1;
			if(i == j and (m[i][j] % 2 == 0)) diagonal+=1;
		}
	}
	if(horizontal == diagonal == vertical) return 1;
	return 0;
}	



bool magicSquare(int N, int **m){
	see2D(N, m);
	if (N == 1){
		return 1;
	}
	if(allEqual(N, m)){
		return 1;
	}
	if(equalEvenAndOddNumbers(N, m)){
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

void test3(){
	int N = 2;
	int **m = create2D(N);
	
	m[0][0] = 1;
	m[0][1] = 2;
	m[1][0] = 1;
	m[1][1] = 2;
	
	if(!magicSquare(N, m) == true){
		cout << "Test 3: OK\n";
	}else{
		cout << " Test 3: NO\n";	
	}

}

void test4(){
	int N = 2;
	int **m = create2D(N);
	
	m[0][0] = 1;
	m[0][1] = 2;
	m[1][0] = 4;
	m[1][1] = 2;
	
	if(magicSquare(N, m) == true){
		cout << "Test 4: OK\n";
	}else{
		cout << " Test 4: NO\n";	
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
	test3();
	test4();
	return 0;
}
