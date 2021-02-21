#include<iostream>
#include<vector>
#include<string>
using namespace std;

struct word {
	string character;
	vector<string> meaning;
	vector<string> sentence;
};

class admin {
	private:
		vector<word> syn;
		vector<word> conf;
	public:
		admin();
		void search_group();
		void add();
		void edit();
		void display();
		void quit();

};