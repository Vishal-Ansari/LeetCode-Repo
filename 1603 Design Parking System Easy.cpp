class ParkingSystem {
public:
   int small,big,medium;
    ParkingSystem(int big, int medium, int small) {
        this->small=small;
        this->big=big;
        this->medium=medium;    
    }
    
    bool addCar(int carType) {
       if(carType==1 &&big-- >0) return true;
        else if(carType==2 && medium-- >0) return true;
        else if(carType==3 && small-- >0) return true;
        else return false;
    }
};