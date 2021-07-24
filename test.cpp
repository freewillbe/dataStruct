// kaoshi
#include<iostream>
#include <ctime>
using namespace std;

int tf1()
{
	string tf = "流动式起重机的回转机构由回转支撑装置和回转驱动机构两部分组成。";
    cout << tf << endl;
    cin >> tf;
    if(tf == "t")
    cout << "Correct!" << endl;
    else
    cout << "Wrong!" << endl;
}

int tf2()
{
	string tf = "在吊笼内载荷不超过额定载重量时，对于额定速度小于等于1.33m/s大于1m/s的升降机, 安全装置停止吊笼时的制动距离应满足0.50-1.6m。";
    cout << tf << endl;
    cin >> tf;
    if(tf == "f")
    cout << "Correct!" << endl;
    else
    cout << "Wrong!" << endl;
}

int tf3()
{
	string tf = "对起升高度和下降深度的测量，以吊钩最低点为测量基准点。";
    cout << tf << endl;
    cin >> tf;
    if(tf == "f")
    cout << "Correct!" << endl;
    else
    cout << "Wrong!" << endl;
}

int tf4()
{
	string tf = "起重机各机构应采用起重机专用电机，应具有较高机械强度和较大的过载能力。";
    cout << tf << endl;
    cin >> tf;
    if(tf == "t")
    cout << "Correct!" << endl;
    else
    cout << "Wrong!" << endl;
}

int tf5()
{
	string tf = "流动式起重机的执行起重作业的结构由起重臂、回转平台、车架和支腿等4个部分组成。";
    cout << tf << endl;
    cin >> tf;
    if(tf == "t")
    cout << "Correct!" << endl;
    else
    cout << "Wrong!" << endl;
}

int tf6()
{
	string tf = "缆索式起重机是以柔性钢索作为架空支撑构件，供悬吊重物的起重小车在承载索上往返运行，具有垂直运输和水平运输功能的起重机。";
    cout << tf << endl;
    cin >> tf;
    if(tf == "t")
    cout << "Correct!" << endl;
    else
    cout << "Wrong!" << endl;
}

int tf7()
{
	string tf = "调运成批零散物件时，必须绑扎牢固，防止吊运中散落。";
    cout << tf << endl;
    cin >> tf;
    if(tf == "f")
    cout << "Correct!" << endl;
    else
    cout << "Wrong!" << endl;
}

int tf8()
{
	string tf = "在起重机械工作中，如果把指挥起重机械安全运行和载荷搬运的安全工作职责移交给其他有关人员，指挥人员应向司机说明情况。";
    cout << tf << endl;
    cin >> tf;
    if(tf == "t")
    cout << "Correct!" << endl;
    else
    cout << "Wrong!" << endl;
}

int tf9()
{
	string tf = "物体重力的作用线超出物体支撑面之外，将产生一个倾翻力矩，物体失去平衡，处于倾覆状态。";
    cout << tf << endl;
    cin >> tf;
    if(tf == "t")
    cout << "Correct!" << endl;
    else
    cout << "Wrong!" << endl;
}

int tf10()
{
	string tf = "动臂式塔式起重机变幅动作可与回转等动作同时进行。";
    cout << tf << endl;
    cin >> tf;
    if(tf == "f")
    cout << "Correct!" << endl;
    else
    cout << "Wrong!" << endl;
}
int ran()
{
	srand((unsigned)time(NULL));            
	for(int i = 1; i <= 1; i++)            
	return rand() % 10;
}

int main()
{
	if(ran() == 1)
		cout << tf1() << endl;
	if(ran() == 2)
		cout << tf2() << endl;
	if(ran() == 3)
		cout << tf3() << endl;
	if(ran() == 4)
		cout << tf4() << endl;
	if(ran() == 5)
		cout << tf5() << endl;
	if(ran() == 6)
		cout << tf6() << endl;
	if(ran() == 7)
		cout << tf7() << endl;
	if(ran() == 8)
		cout << tf8() << endl;
	if(ran() == 9)
		cout << tf9() << endl;
	if(ran() == 10)
		cout << tf10() << endl;
}


/*
int tf()
{
	string tf = "";
    cout << tf << endl;
    cin >> tf;
    if(tf == "f")
    cout << "Correct!" << endl;
    else
    cout << "Wrong!" << endl;
}

 */
