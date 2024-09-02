1 #include <iostream
2 #include <string>
3
4 class Person (
5
std::string name:
6
int age:
7
8 public:
9
Person(std::string n, int a) name(n), age(a) ()
10
11
void display() [
12
std::cout << "Name: <<< name< std::endl;
13
std::cout << "Age: age << std::endl;
14
15:
16
17
int main() {
18
std::string name:
19
int age:
20
21
std::cout << "Enter name
22
std::cinname:
23
std::cout << "Enter age:
24
std::cin >> age:
25
26
Person p(name, age);
27
p.display():
28
29
return 0;
30