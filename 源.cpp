//�沨�����ʽ�Ķ���
//:һ�������沨�����ʽ
//:�������  �沨�����ʽ   �沨�����ʽ �����沨�����ʽ
#include<iostream>
using namespace std;
//����һ���沨�����ʽ������������ֵ

double exp(){
	char s[20];
	cin >> s;
	switch (s[0]) {
	case'+': return exp() + exp();
	case'-':  return exp() + exp();
	case'*':  return exp() + exp();
	case'/':  return exp() + exp();
	default: return atof(s);//���ַ���ת��Ϊһ��˫������
		break;
	}
}
int main() {
	printf("%lf", exp());
	return 0;
}