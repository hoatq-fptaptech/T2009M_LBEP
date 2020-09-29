int GiaiThua(int n){
	int S=1;
	for(int i=1;i<=n;i++){
		S*=i;
	}
	return S;
} 

void InRaTong(int a,int b){ 
	int c = a+b;
	printf("a+b= %d\n",c);	
	return ;
}

int DaoNguoc(int n){
	int x=0;
	while(n!=0){
		x= x*10+n%10;
		n/=10;
	}
	return x;
}

int Fibonaci(int n){
	if(n<=0) return 0;
	if(n<=2) return 1;
	int x1=0,x2=1,x3=1;
	for(int i=3;i<=n;i++){
		x1=x2;
		x2=x3;
		x3=x1+x2;
	}
	return x3;
}

