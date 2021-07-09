#include <iostream>
using namespace std;

struct Node {
  int val;
  Node* next;
};

// ������������� �������� ������������ ������ ������

void init(Node* node) {
    node->val = 0;
    node->next = NULL;
}

// ����������� ������������ ������ �� �����
void show(Node* head) {
	Node* cur = root;
	while (cur->next != NULL)
	{
		cout << cur->val << " ";
		cur = cur->next;
	}
	cout << endl;
}

// ���������� �������� � ����������� ������
void pushNode(Node* head,Node* node) {
	Node* cur = root;
	while (cur->next != NULL)
		cur = cur->next;

	cur->next = new Node;
	init(cur->next);
	cur->val = node->val;
} 


// �������� ������� ������������� size ��������� ������ �������� ��������� val.
void initList(Node* head, int size, int val)  {

}

// �������� ������� ����������� ��������� ������� source � ����� ������ dest
void copyMas(Node* source, Node* dest) {

}
  

// �������� ������� ��������� ������� source � dest. ���� ������ ����� 0, ���� �� ����� -1
int compareMas(Node* source, Node* dest) {
  return 0;
}


// �������� ������� �������� �� ������� ����� n-�� �������� ������.
void deleteList(Node* head,int n) {

}


// �������� ������� ������ �������� ������ �� n-��������� � ����������� ������� ��������� ������
void rShiftList(Node* head,int n) {
	for (int i = 0; i < n; i++)
	{
		Node* p = root;
		int num = p->val;
		int x[2];

		x[0] = p->next->val;
		p->next->val = p->val;
		p->val = 0;

		int j = 0;

		while (p->next->next != NULL)
		{
			if (j % 2 == 0) {
				p = p->next;
				x[1] = p->next->val;
				p->next->val = x[0];
			}
			else {
				p = p->next;
				x[0] = p->next->val;
				p->next->val = x[1];
			}
			j++;
		}
	}
}



// �������� ������� ������ �������� ����� �� n-��������� � ����������� ������� ��������� ������.
void lShiftList(Node* head,int n) {

}


//�������� ������� ������ �������� ����� �� n-��������� � ��������� ����������� ��������� � �����
void lRoundShiftMas(Node* head,int n, int size) {

}


// �������� ������� ���������� �������� �������� ��������� ������.
int averageList(Node* head, int size) {
  return 0;
}



// �������� ������� ���������� ������ ��������������� ���������� ��������� ������.
int skoFromList(Node* head, int size) {
  return 0;
}


int testSkoFromList() {
  return -1;
}


static void runTest(int (*testFunction)(),const std::string& testName)
{
  if(testFunction()==0)
    std::cout << "Test "<< testName << " - OK" << std::endl;
  else 
    std::cout << "Test "<< testName << " - FAIL" << std::endl;
}



int main() {
  runTest(testSkoFromList,"testSkoFromList");


}