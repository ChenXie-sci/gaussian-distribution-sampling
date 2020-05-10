
//
//  main.cpp
//  sampling--normal distribution
//
//  Created by Chen Xie on 2019/10/3.
//  Copyright © 2019 Chen Xie. All rights reserved.
//
    #include <iostream>
    #include <cmath>
    #include <random>
    using namespace std;
    int main() {
        // insert code here...
        std::default_random_engine e;
        std::normal_distribution<double> d1(6,0.5);
        std::normal_distribution<double> n1(0,3);
        std::vector<unsigned> v1(100);
        std::vector<unsigned> v2(100);
        int i,j,k;
        for(std::size_t i=0;i<1000000;i++){
            double v=std::lround(n1(e));
            double r=std::lround(d1(e));
            if(v<v1.size()){
                ++v1[v];}
            if(r<v2.size()){
                ++v2[r];}
        }
      //  for(std::size_t j=0;j!=v1.size();j++)
        //    std::cout<<v1[j]<<std::endl;
             for(std::size_t k=0;k!=v2.size();k++)
                std::cout<<v2[k]<<std::endl;
    return 0;
}
