#include <iostream>
int* createvector(int m){
    return new int[m];
}
int main(){
    int m;
    std::cout<<"Enter size: ";
    std::cin>>m;
    int* myvector = createvector(m);

    for (int i=0;i<m;i++){
        myvector[i]=i+1;
        std::cout<<myvector[i]<< " ";
    }
    delete[] myvector;
    return 0;
}