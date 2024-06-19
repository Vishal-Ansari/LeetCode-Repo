class Solution {
  public:
    double maxVolume(double P, double A) {
        double l=(P-sqrt(pow(P,2)-(24*A)))/12;
        double v= (P*l*l - 8*l*l*l)/4;

        return v;
    }
};
