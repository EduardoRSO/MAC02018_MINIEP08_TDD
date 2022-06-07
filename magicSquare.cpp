#include <iostream>

using namespace std;

bool magicSquare(int m[][1]){
	return 0;
}

void test1(int m[][1]){
	if(magicSquare(m) == true){
		cout << " Test 1: OK\n";
	}else{
		cout << " Test 1: NO\n";	
	}
}

int main(){
	int array[1][1] = {1};
	test1(array);
	return 0;
}
