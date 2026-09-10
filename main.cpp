#include <iostream>
#include <cstdio>
int maint(int argc, char** argv){
    for(int i=0;i<argc;i++){
        char* str = argv[i];
        while(*str !=' \0'){
            std::cout<<*str;
            str++;
        }
    }
}
/*
int main(int argc, char** argv){
    FILE* f = fopen("data.txt","r");
    
    int max_cnt=-1;
    char char_with_max_cnt;

    int current_cnt=-1;
    int current_char;
    int prev_char=-1;

    while((current_char = fgetc(f))!=EOF){
        if(current_char!=prev_char){
            if(current_cnt>max_cnt){
                max_cnt=current_cnt;
                char_with_max_cnt=char(prev_char);
            }
            prev_char=current_char;
            current_cnt=1;
        }
        else{
            current_cnt++;
        }
    }
    if(current_cnt>max_cnt){
        max_cnt=current_cnt;
        char_with_max_cnt=char(prev_char);
    }
    if(max_cnt!=-1){
        std::cout<<char_with_max_cnt<<" "<<max_cnt<<std::endl;
    }
    else{
        std::cout<<"Empty file!"<<std::endl;
    }
}
*/