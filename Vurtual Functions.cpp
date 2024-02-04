#include<bits/stdc++.h>

using namespace std;

class Person{
	protected:
    	string name;
    	int age;

	public:
    	Person(string name, int age){
        	this->name = name;
        	this->age = age;
    	}
    	virtual void getdata(){}
    	virtual void putdata(){}
};

class Professor : public Person{
	private:
    	int publications;
    	int cur_id;

	public:
    	Professor(string name, int age, int publications) : Person(name, age){
	        this->publications = publications;
    	    cur_id = ++id;
    	}
        void putdata(){
            cout << name << " " << age << " " << publications << " " << cur_id << endl;
        }
        static int id;
};

class Student : public Person{
	private:
	    int marks[6];
    	int cur_id;

	public:
	    Student(string name, int age, int marks[]) : Person(name, age){
	        for (int i = 0; i < 6; i++) this->marks[i] = marks[i];
	        cur_id = ++id;
  	    }
	    void putdata(){
	        int sum = 0;
	        for (int i = 0; i < 6; i++) sum += marks[i];
	        cout << name << " " << age << " " << sum << " " << cur_id << endl;
	    }
	    static int id;
};

int Professor::id = 0;
int Student::id = 0;

int main(){
    int n;
    cin >> n;
    Person *ptr[n];
    for (int i = 0; i < n; i++){
        int type;
        cin >> type;
        if (type == 1){
            string name;
            int age, publications;
            cin >> name >> age >> publications;
            ptr[i] = new Professor(name, age, publications);
        }
        else{
            string name;
            int age, marks[6];
            cin >> name >> age;
            for (int j = 0; j < 6; j++){
                cin >> marks[j];
            }
            ptr[i] = new Student(name, age, marks);
        }
    }
    
    for (int i = 0; i < n; i++) ptr[i]->putdata();
    
    return 0;
}