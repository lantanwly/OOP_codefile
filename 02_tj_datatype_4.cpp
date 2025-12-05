#include<iostream>
#include<string>
using namespace std;

int main(){
    // string str1="perception";
    // string str2="running!";
    // //拼接
    // str1=str1+" "+str2;
    // //获取长度
    // cout<<str1.length()<<endl;
    // // cout<<str1.size()<<endl;
    //查找
    string full_path="/Codefile/name/codefile.cpp";
    string file_name="codefile.cpp";
    size_t find_pos=full_path.find(file_name);
    if(find_pos!=full_path.npos){
        cout<<"find file in "<<find_pos<<endl;
    }else{
        cout<<"can not find the file!"<<endl;
    }
    //获取子串
    // string sub_str=full_path.substr(find_pos,full_path.npos);
    string sub_str=full_path.substr(find_pos);
    cout<<sub_str<<endl;
    // cout<<str1<<endl;
    return 0;
}