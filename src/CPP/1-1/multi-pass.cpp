#include <iostream>
#include <stdio.h>
#include<cxxopts.hpp>

/*this part is the test of passing value*/
void swap_value (int a, int b){
    int temp = a;
    a = b;
    b=temp;
    printf("a=%d,b=%d",a,b);
}

/*this part is the test of passing address*/
void swap_address(int* a,int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("a=%d,b=%d",*a,*b);
}

/*this part is the test of pssing a reference*/
void swap_ref(int&a,int&b){
    int temp = a;
    a = b;
    b=temp;
    printf("a=%d,b=%d",a,b);
}

/*main*/
int main(int argc, char** argv) {
    /*define command line arguments*/
    cxxopts::Options options("Multi-pass", "Testing env for multi ways to pass value");
    options.add_options()
    ("d,debug", "Enable debugging") // a bool parameter
    ("t,test", "test number", cxxopts::value<int>()->default_value("1"))
    ("a,alpha", "value of a", cxxopts::value<int>()->default_value("2"))
    ("b,beta", "value of b", cxxopts::value<int>()->default_value("3"))
    ("h,help", "Print usage");
    // ("f,file", "File name", cxxopts::value<std::string>())
    // ("v,verbose", "Verbose output", cxxopts::value<bool>()->default_value("false"));
    
    /*read arguments from command line*/
    auto result = options.parse(argc, argv);
    int a = result["alpha"].as<int>();
    int b = result["beta"].as<int>();
    int test_number = result["test"].as<int>();
    /*actural run a test*/
    if (result.count("help"))
    {
      std::cout << options.help() << std::endl;
      exit(0);
    }
    switch (test_number)
    {
    case 1:
            swap_value(a,b);
        break;
    case 2:
        swap_address(&a,&b);
        break;
    case 3:
        swap_ref(a,b);
    default:
        break;
    }

    return 0;
}