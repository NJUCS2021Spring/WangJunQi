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
		<< "\t\t\t|               1.��ѯ���ʷ���              |\t\t\t" << endl
		<< "\t\t\t|               2.�½�����                  |\t\t\t" << endl
		<< "\t\t\t|               3.��ʾ���з���              |\t\t\t" << endl
		<< "\t\t\t|               4.�༭���ʿ�Ƭ              |\t\t\t" << endl
		<< "\t\t\t|               5.�˳�ϵͳ                  |\t\t\t" << endl
		<< "\t\t\t---------------------------------------------\t\t\t" << endl;
	int n;
loop:cout << "��ѡ����Ĺ��ܣ�";
	cin >> n; cout << endl;
	switch (n)
	{
	case 1:search_group();goto loop;
	case 2:add_group();goto loop;
	case 3:check_group();goto loop;
	case 4:edit_word();goto loop;
	case 5:cout << "�Ѿ��˳�ϵͳ��"<< endl;break;
	default:goto loop;
	}
}

void MyWordBook::search_group() {
	string search;
	cout << "��������Ҫ��ѯ�ĵ��ʣ�" << endl;
	cin >> search; cout << endl;
	admin.search();
}

void MyWordBook::add_group() {
	int n;
	cout << "\t\t\t---------------------------------------\t\t\t" << endl
		<< "\t\t\t|               1.����                |\t\t\t" << endl
		<< "\t\t\t|               2.����                |\t\t\t" << endl
		<< "\t\t\t|               3.�˳�                |\t\t\t" << endl
		<< "\t\t\t|-------------------------------------|\t\t\t" << endl;
loop: cout << "��ѡ��������ݣ�" << endl;
	cin >> n; cout << endl;
	string group_meaning;
	switch (n)
	{
	case 1:
		cout << "��������壺" << endl;
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
	cout << "��ѡ����ID������0�˳���" << endl;
	int ID;
	cin >> ID; cout << endl;
	admin.edit();
}

void MyWordBook::edit_word() {
	string search;
	cout << "��������Ҫ�༭�ĵ��ʣ�" << endl;
	cin >> search; cout << endl;
	admin.edit();
}

