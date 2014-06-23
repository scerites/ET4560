// Chapter 2 - Programming Challenge 8, Land Calculation
// This program calculates the number of square feet and 
// number of square meters in 1/4 acre of land.
#include <iostream>
using namespace std;

int main()
{
   // Define and initialize variables  
	double sqFtPerAcre = 43560.0;       // Number of sq. ft. per acre                  
	double sqFtPerSqMeter  = 10.7639;   // Number of sq. ft. per sq. meter             
	double qtrAcre_sqFt;                // Number of sq. ft. in 1/4 acre
	double qtrAcre_sqMeters;            // Number of sq. meters in 1/4 acre
	
	// Calculate number of sq. ft and sq. meters in 1/4 acre of land
	qtrAcre_sqFt = sqFtPerAcre / 4; 
	qtrAcre_sqMeters = qtrAcre_sqFt / sqFtPerSqMeter;
	
	// Display the results
	cout << "A quarter acre of land contains " << qtrAcre_sqFt << " sq. ft. and "
	     << qtrAcre_sqMeters << " sq. meters. \n";

	return 0;
}
