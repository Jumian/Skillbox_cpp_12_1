#include <iostream>

void input(std::string name[]){
    std::cout<<"Input 10 names for flats from 1 to 10:" <<std::endl;
    for (int i=0;i<10;++i){
        std::cin>>name[i];
    }
}

void checkflat(std::string name[],int times){
    for (int i =0;i<3;i++) {
        int flat = 0;
        std::cout << "Input flat number:";
        std::cin >> flat;
        if (flat >= 1 && flat <= 10)
            std::cout << name[flat - 1] << std::endl;
        else std::cout << "Wrong index" << std::endl;
    }
}

int main() {
    std::string name[10];
    input(name);
    checkflat(name, 3);
    return 0;
}
