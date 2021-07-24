#include<iostream>
using namespace std;

int multipleChoice2()
{
	string multipleChoice = "“广告”回个话";
    cout << multipleChoice << endl;
    cin >> multipleChoice;
    if(multipleChoice == "c")
    	cout << "Correct! 回答正确!" << endl;
    else
    	cout << "Wrong! 回答错误!" << endl;
}


int main()
{
	cout << multipleChoice2() << endl;
}
