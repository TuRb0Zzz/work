#include <iostream>
using namespace std;



    template<class T,size_t size>
    class Array{
        private:
            T* ar;
        public:
            Array(){
                ar = new T[size];
            }
            int returnSize(){
                return size;
            }
            T& operator[](int value){
                return ar[value];
            }
            T at(int value) const {
                return ar[value];
            };

    };

    template<class T, size_t size>
    std::ostream& operator<<(std::ostream& out,const Array<T,size>& value)
    {
        for(size_t i=0; i<size;i++){
            out<<value.at(i)<<" ";
        }
        return out;
    }

int main(){

    Array<int,5> test;
    test[0]=10;
    cout<<test.returnSize()<<endl;
    cout<<test<<endl;
    return 0;
}
