#include "Book.cpp"
class MyWordBook {
private:
	admin admin;
public:
	MyWordBook();
	void main_menu();
	void search_group();
	void add_group();
	void check_group();
	void edit_word();

};

void MyWordBook::main_menu(){
	cout << "\t\t\t---------------------------------------------\t\t\t" << endl
		<< "\t\t\t|               1.查询单词分组              |\t\t\t" << endl
		<< "\t\t\t|               2.新建分组                  |\t\t\t" << endl
		<< "\t\t\t|               3.显示所有分组              |\t\t\t" << endl
		<< "\t\t\t|               4.编辑单词卡片              |\t\t\t" << endl
		<< "\t\t\t|               5.退出系统                  |\t\t\t" << endl
		<< "\t\t\t---------------------------------------------\t\t\t" << endl;
	int n;
loop:cout << "请选择你的功能：";
	cin >> n; cout << endl;
	switch (n)
	{
	case 1:search_group();goto loop;
	case 2:add_group();goto loop;
	case 3:check_group();goto loop;
	case 4:edit_word();goto loop;
	case 5:cout << "已经退出系统！"<< endl;break;
	default:goto loop;
	}
}

void MyWordBook::search_group() {
	string search;
	cout << "请输入需要查询的单词：" << endl;
	cin >> search; cout << endl;
	admin.search();
}

void MyWordBook::add_group() {
	int n;
	cout << "\t\t\t---------------------------------------\t\t\t" << endl
		<< "\t\t\t|               1.词义                |\t\t\t" << endl
		<< "\t\t\t|               2.词性                |\t\t\t" << endl
		<< "\t\t\t|               3.退出                |\t\t\t" << endl
		<< "\t\t\t|-------------------------------------|\t\t\t" << endl;
loop: cout << "请选择分组依据：" << endl;
	cin >> n; cout << endl;
	string group_meaning;
	switch (n)
	{
	case 1:
		cout << "请输入词义：" << endl;
		cin >> group_meaning; cout << endl;
		admin.add();
		goto loop;
	case 2:
		admin.add();
		goto loop;
	case 3:break;
	default:goto loop;
	}
}

void MyWordBook::check_group() {
	admin.display();
	cout << "请选择组ID，输入0退出：" << endl;
	int ID;
	cin >> ID; cout << endl;
	admin.edit();
}

void MyWordBook::edit_word() {
	string search;
	cout << "请输入需要编辑的单词：" << endl;
	cin >> search; cout << endl;
	admin.edit();
}

