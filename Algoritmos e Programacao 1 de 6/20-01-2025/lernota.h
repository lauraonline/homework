using namespace std;
float lernota(float *n, int i) {
    cout<<"Insira a nota "<<i<<": ";
    cin>>*n;
    while (*n < 0 || *n > 10) {
        cout<<"Insira um valor válido!"<<endl;
        cout<<"Insira a nota "<<i<<": ";
        cin>>*n;
	}
    return *n;
}