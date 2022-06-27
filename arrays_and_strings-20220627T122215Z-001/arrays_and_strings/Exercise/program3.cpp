#include <iostream>
using namespace std;

class Distance{	
    int feet;
    float inches;
	public:
		Distance(): feet(0), inches(0) { };
		Distance(int f, int i): feet(f), inches(i) { };
		void getdist();
		void showdist() const;
		void add_dist(Distance d);
		void div_dist(int k);
};


void Distance::getdist(){
	cout << "Enter feet: ";
	cin >> feet;
	cout << "\nEnter inches: ";
	cin >> inches;
}

void Distance::showdist() const{
	cout << feet << "\'-" << inches << '\"' << endl;
}

void Distance::add_dist(Distance d){
	feet += d.feet;
	inches += d.inches;
	if(inches > 11){
		inches -= 12;
		feet++;
	}
}
void Distance::div_dist(int k){
	int total = feet * 12 + inches;
	total /= k;
	feet = total / 12;
	inches = total % 12;
}
int main(){
	const int MAX = 100;
	Distance d[MAX], sum;
	int n = 0;
	char ch;
	do{
		d[n].getdist();
		sum.add_dist(d[n++]);
		cout << "Want to continue (y/n): ";
		cin >> ch;
		cout << endl;
	}   while(ch != 'n');
	sum.div_dist(n);
	sum.showdist();
	return 0;
}