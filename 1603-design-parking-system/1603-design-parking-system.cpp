class ParkingSystem {
public:
    ParkingSystem(int big, int medium, int small) {
       parking = {big, medium, small};
    }
    
    bool addCar(int carType) {
        if (parking[carType-1] > 0) {
            parking[carType-1]--;
            return true;
        }
        return false;
    }
private:
    vector<int>parking;
};