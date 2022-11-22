for (int i = 1; i <= N; i++) {
		
	for (int j = N - i; j > 0; j--) {
		cout << " ";
	}
 
	for (int j = 2*i-1; j > 0; j--) {
		cout << "*";
	}
	cout << endl;
}
