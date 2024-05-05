#include <iostream>
#include <string>

class Car{
    private:
    std:: string make;
    std::string model;
    int year;

    public:
    Car(std:: string make,std:: string model, int year){
        make=make;
        model=model;
        year=year;
    }

    void setMake(std::string newMake){
        make=newMake;
    }

    void setModel(std::string newModel){
        model=newModel;
    }

    std::string getMake() const{
        return make;
    }

    std::string getModel() const{
        return model;
    }

    int getYear() const{
        return year;
    }

    void displayInfo() const{
        std::cout <<"Car:" <<make << " " << model <<" (" <<year<< " )" <<std::endl;
    }

    int main(){
        Car carA("McKing","Lightning",1995);
        carA.displayInfo();
        std::cout<<carA.getYear();
        return 0;
    }

};