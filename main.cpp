// --**GBK
#include<iostream>
#include<cstring>

using namespace std;

class Person {
public:
    Person(char nameV[], bool sexV, int ageV, float highV, float weigtV) {
        setName(nameV);
        setAge(ageV);
        setSex(sexV);
        setHigh(highV);
        setWeigt(weigtV);
    };

    ~Person() {};

    void eat(char obj[]) {};

    void sleep() {};

    int print() {
        cout << "name:" << name << endl
             << "age:" << getAge() << endl
             << "sex:" << resex() << endl
             << "high:" << high << endl
             << "weight:" << weigt;
        return 0;
    };

    int getAge() {
        return age;
    };

    void setName(char nameV[]) { strcpy_s(name, sizeof(nameV), nameV); };

    void setSex(bool sexV) { sex = sexV; };

    string resex() {
        return this->sex ? "man" : "woman";
    }

    void setAge(int newAge) { age = newAge; };

    void setHigh(float highV) { high = highV; };

    void setWeigt(float weigtV) { weigt = weigtV; };
private:
    char name[10];
    bool sex;
    int age;
    float high;
    float weigt;
};

int main() {
    char name[10] = "ÕÅÈý";
    Person A(name, 1, 20, 180.0, 130.0);
    A.print();
}
