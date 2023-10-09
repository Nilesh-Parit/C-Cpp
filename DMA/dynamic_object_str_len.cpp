 #include<iostream>
 using namespace std;
 #include<cstring>
 
 class string1
 {
 	int len;
 	char* ptr;
 	
 	public:
 		string1(char,int);
 		string1(char*);
 		void show();
 		string1(int);
 		string1();
 };
 string1::string1(char ch,int len)
 {
 	this->len=len;
 	ptr = new char[this->len+1];
 	int i;
 	for(i=0;i<this->len;i++)
 	{
 		ptr[i]=ch;
 		cout<<ptr[i];
	 }
	 ptr[i]='\0';
	 cout<<endl;
 }
void string1::show()
{
	cout<<"string is "<<ptr<<endl;
	cout<<"length is "<<len<<endl;
}
 string1::string1(char* ptr1)
 {
 	len = strlen(ptr1);
 	ptr = new char[len + 1];
 	strcpy(this->ptr,ptr1);
 	
 }
 string1::string1(int len)
{
	this->len=len;
	ptr= new char[this->len+1];
	char ch[this->len+1];
	cout<<"Enter string "<<endl;
	cin>>ch;
	strcpy(ptr,ch);
 } 
 string1::string1()
 
 {
 	int len;
 	cout<<"Enter string length "<<endl;
 	cin>>len;
 	char ptr1[len+1];
 	this->len=len;
    ptr=new char[len+1];
 	cout<<"Enter the string "<<endl;
	cin>>ptr1;
	strcpy(ptr,ptr1);
 	
 }
 
 int main(){
 	string1 s1('*',20);
 	string1 s2("CDAC");
 	s2.show();
 	string1 s3(5);
 	s3.show();
 	string1 s4;
 	s4.show();
 	
 	
 	return 0;
 }
