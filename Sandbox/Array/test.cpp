#include <iostream>

using namespace std;

template <size_t N>
inline
int SizeOfIntArray(const int(&) [N]) {
	return N;
}

class Test {
 public:
	Test(int fill[], int);
	~Test(){};
	void printArray();
	int myFill[];
};

Test::Test(int fill[], int length){
	std::cout << "Size of array: " << length << std::endl;
	int myFill[length];
	for(int i=0; i<length; i++){		
		cout << "i = " << i << endl;
		cout << "fill[i] == " << fill[i] << endl;
		myFill[i] = fill[i];
	}	
	for(int i=0; i<length; i++){
		cout << "myFill[" << i << "] = " << myFill[i] << endl;
	}
};

/*
void Test::printArray(){
	for(int i=0;i<SizeOfArray(myFill);i++){
		std::cout << "myFill[" << i << "] = " << myFill[i] << std::endl;
	}

};
*/

int main() {

	int one[] = {1,2,3,4,5,6,7,8,9};
	std::cout << "size of one for real" << SizeOfIntArray(one) << "\n";
	Test(one, SizeOfIntArray(one));
	
	return 0;
}