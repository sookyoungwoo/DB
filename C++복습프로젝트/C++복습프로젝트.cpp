
//함수 매개변수 반환값에 참조자 사용
#include<iostream>
#include <cstring>

using namespace std;

typedef struct __Point {
	int xPos;
	int yPos;
}Point;

Point& PntAdder(const Point& p1, const Point& p2) {
	Point* p = new Point;
	p->xPos = p1.xPos * p2.xPos;
	return *p;
}

bool IsPositive(int num) {
	if (num <= 0)
		return false;
	else
		return true;
}

int main(void) {

	cout << "부산소마고 매점에 오신 것을 환영합니다.\n" << endl;


	cout << "현재 남은 상품은 바나나우유(1), 삼각김밥(4), 마이쮸(6),\n오렌지쥬스(15), 초콜릿(17), 공책(35)입니다.\n" << endl;
	
	cout << "구매하고 싶은 상품의 품번을 입력해주세요.\n" << endl;

	int inventory;
	cin >> inventory;
	
	int* inv2 = &inventory;

	if (inventory == 1) 
		inventory = 10;
	
	else if (inventory == 4)
		inventory = 5;
	
	else if (inventory == 6)
		inventory = 13;
	
	else if (inventory == 15)
		inventory = 7;
	
	else if (inventory == 17)
		inventory = 21;
	
	else if (inventory == 35)
		inventory = 17;
	
	else {
		cout<<"("<< *inv2 <<")번은" << "\n없는 품목입니다!" << endl;
		return 0;
	}

	cout <<"\n현재 남아있는 재고는 "<< inventory <<"개 입니다.\n"<<endl;

	
	cout << "구매할 ("<< *inv2 <<")번 상품의 개수를 입력하세요.\n" << endl;

	int n;

	cin >> n;


	Point* n1 = new Point;
	n1->xPos = n;
	Point* n2 = new Point;
	n2->xPos = 1000;
	Point& ptr = PntAdder(*n1, *n2);

	cout << "\n총 " << n << "개를 선택하셨습니다. 구매하시겠습니까?\n\n구매하신다면 '네', 아니라면 '아니오'를 입력하세요.\n" << endl;

	bool isPos;
	char num1[5];
	const char* str1 = "네";
	int num;
	cin >> num1;
	if (strcmp(str1,num1) == 0)
		num = 1;
	else 
		num = 0;


	isPos = IsPositive(num);
																			
	if (isPos)
		cout << "\n총 " << ptr.xPos << "원을 결제 하였습니다." << endl;
	else
		cout << "결제를 취소하셨습니다." << endl;


	return 0;
}