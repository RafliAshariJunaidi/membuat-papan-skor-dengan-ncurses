#include <iostream>
#include <string>

using namespace std;

void Bubblesort(int* arr, string* arr2, int size);
void swap(int* a, int* b);

int main(int argc, char const *argv[])
{
	int score[3] = {90, 70, 80};
	string name[3] = {"rafli", "latifah", "dwika"};
	Bubblesort(score, name, 3);
	for(int i = 2;i> -1;i--){
		cout << 3 - i <<"." << name[i] << "." << score[i] << endl;
	}
	
	return 0;
}

void Bubblesort(int* arr, string* arr2, int size){
	bool swapped;
	int indexofLastUnsirtedElement = size;
	do{
		swapped = false;
		for(int i = 0;i < indexofLastUnsirtedElement-1;i++){
		if(*(arr + i) > *(arr + i + 1)){
			swap(*(arr + i), *(arr + i + 1));
			string temp = *(arr2 + i);
			*(arr2 + i) = *(arr2 + i + 1);
			*(arr2 + i + 1) = temp;
			swapped = true;
		}
	}
	indexofLastUnsirtedElement--;
  }while (swapped);
}

void swap (int* a, int*b){
	int temp = *a;
	*a = *b;
	*b = temp;
}
