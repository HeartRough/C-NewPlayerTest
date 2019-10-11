#include "pch.h"
//TODO
//template <typename T>
//T random(T a, T b) {
//	return (rand() % ((b)-(a)+1) + (a));
//}
//int main(){srand(unsigned(time(NULL)));}
//递归排序
/*template <typename T>
T sort(const T &A,int Length){
	if(A.empty()){
		return A;
	}
	T comparer;
	comparer=A[0];
	vector<T> arrayless;
	vector<T> arraybigger;
	int m=1,n=1;
	for(int i=1;i<Length;i++){
		if(A[i]<comparer){
			arrayless.resize(m);
			arrayless[m-1]=A[i];
			m++;
		}
		else{
			arraybigger.resize(n);
			arraybigger[n-1]=A[i];
			n++;
		}
	}
	arrayless=sort(arrayless);
	arraybigger=sort(arraybigger);
	T array[length(arrayless)+length(arraybigger)];
	int i=0;
	vector<double>::iterator it;
	for(it=arrayless.begin();it!=arrayless.end();++it,i++){
		array[i]=*it;
	}
	vector<double>::iterator it2;
	for(it2=arraybigger.begin();it2!=arraybigger.end();++it,i++){
		array[i]=*it;
	}
	return array;
}*/

int main(){
    //  vector<int> array1(5);
    //  vector<int>::iterator it;
    // for(it=array1.begin();it!=array1.end();++it){
    //     *it=random(1,10);
    // }
    // for(it=array1.begin();it!=array1.end();++it){
    //     cout<<*it<<"\t"<<endl;
    // }
    cout<<"kule"<<endl;
    
}
