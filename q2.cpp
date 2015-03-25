#include <iostream>
using namespace std;

void triangles (int n){
	for (int i=1; i<=n; i++){
		for (int j=1; j<=i;j++){
			cout << "T";
		}
		cout << endl;
	}
	for (int i=(n-1); i>0; i--){
		for (int j=1; j<=i;j++){
			cout << "T";
		}
		cout << endl;
	}
}

int main(){
  triangles(6);
  return 0;
}
