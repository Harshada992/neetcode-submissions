class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n= position.size();
       
       vector<pair<int,double>> cars(n);
       for(int i=0;i<n;i++){
        double time =(double)(target-position[i])/speed[i];
        cars[i]={position[i],time};

         }

        //sort by position in descending order

        sort(cars.rbegin(),cars.rend());
       

        stack<double>fleetTimes;

        for(auto &car :cars){
            double currentTime=car.second;
            if(fleetTimes.empty() || currentTime>fleetTimes.top()){
                fleetTimes.push(currentTime);

            }

            //if current Time <=top it catches up and become the part of fleet
            

        }
        return fleetTimes.size();

    
        
    }
};
