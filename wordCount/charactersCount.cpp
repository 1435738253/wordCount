#include <iostream>
#include <string>
using namespace std;

int count_characters(string s){	

	int num = 0;
	for(int i=0;i<s.length();i++){
		if(s[i]>=0&&s[i]<=127)
		num++;
	}
	return num;
}

int main(){	

	/*��СдӢ����ĸ*36 + ˮƽ�Ʊ��*1 + ���з�*1 + ��������*6 + �ո�*2 +������*4�� = 46 */
	string s ="Mo\tnday Tuesday We��̫����dnesday?#$%&&Thursday\nFriday";
	cout<<"characters:"<<count_characters(s)<<endl;
	return 0;
}




