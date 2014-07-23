// Chapter 7 - Programming Challenge 4, Monthly Budget
// This program uses one MontlyBudget structure to store budget figures
// and a second one to store actual expenditures. Then the two sets of
// figures are compared.
#include <iostream>
#include <iomanip>
using namespace std;

struct MonthlyBudget
{  double housing,
          utilities,
          household,
          transportation,
          food,
          medical,
          insurance,
          entertainment,
          clothing,
          misc;
          
   // Constructor with default values when arguments are not provided
   MonthlyBudget(double rent = 0.0,  double util = 0.0, double hh = 0.0, 
                 double trans = 0.0, double fd = 0.0,   double med = 0.0, 
                 double insur = 0.0, double fun = 0.0,  double cloth = 0.0,
                 double mis = 0.0)
   {  housing = rent;
      utilities = util;
      household = hh;
      transportation = trans;
      food = fd;
      medical = med;
      insurance = insur;
      entertainment = fun;
      clothing = cloth;
      misc = mis;
   }
};

// Function prototypes
void displayBudget(const MonthlyBudget&);
void getExpenses(MonthlyBudget&);
void compareExpenses(const MonthlyBudget&, const MonthlyBudget&);
      
int main()
{
	// Create a MonthlyBudget structure initialized with actual budget figures
	MonthlyBudget budget(500, 150, 65, 50, 230, 30, 100, 150, 75, 50);

	// Create a MonthlyBudget structure to hold actual expenditures
	MonthlyBudget spent;

	// Call displayBudget function to display the budgeted amount
	displayBudget(budget);

	// Call getExpenses function to input and store actual expenditures
	getExpenses(spent);

	// Call compareExpenses function to compare actual expenditures to budget
	compareExpenses(budget, spent);

	return 0;
}

/***********************************************************
 *                    displayBudget                        *
 * This function displays the monthly budgeted amounts in  *
 * each budget category.                                   *
 ***********************************************************/
void displayBudget(const MonthlyBudget &budget)
{
	cout << "Here is your monthly budget: \n\n";
	cout << "Housing        $" << setw(4)  << budget.housing << endl;
	cout << "Utilities      $" << setw(4)  << budget.utilities << endl;
	cout << "Household      $" << setw(4)  << budget.household << endl;
	cout << "Transportation $" << setw(4)  << budget.transportation << endl;
	cout << "Food           $" << setw(4)  << budget.food << endl;
	cout << "Medical        $" << setw(4)  << budget.medical << endl;
	cout << "Insurance      $" << setw(4)  << budget.insurance << endl;
	cout << "Entertainment  $" << setw(4)  << budget.entertainment << endl;
	cout << "Clothing       $" << setw(4)  << budget.clothing << endl;
	cout << "Miscellaneous  $" << setw(4)  << budget.misc << endl;
}

/***********************************************************
 *                       getExpenses                       *
 * This function stores the entered values for actual      *
 * monthly expenditures in each budget category.           *
 ***********************************************************/
void getExpenses(MonthlyBudget &spent)
{
	cout << "\nEnter actual monthly expenditures for each budget category\n\n";

	cout << "Rent/mortgage:  $";
	cin  >> spent.housing;

	cout << "Utilities:      $";
	cin  >> spent.utilities;

	cout << "Household:      $";
	cin  >> spent.household;

	cout << "Transportation: $";
	cin  >> spent.transportation;

	cout << "Food:           $";
	cin  >> spent.food;

	cout << "Medical:        $";
	cin  >> spent.medical;

	cout << "Insurance:      $";
	cin  >> spent.insurance;

	cout << "Entertainment:  $";
	cin  >> spent.entertainment;

	cout << "Clothing:       $";
	cin  >> spent.clothing;

	cout << "Miscellaneous:  $";
	cin  >> spent.misc;
}
          

/***********************************************************
 *                   compareExpenses                       *
 * This function compares actual expenditures to budgeted  *
 * amounts in each budget category.                        *
 ***********************************************************/
void compareExpenses(const MonthlyBudget &budget, const MonthlyBudget &spent)
{
	double totalBudgeted,       // Total monthly budget for all categories
		   totalSpent,          // Total spent in all categories
		   difference;          // Monthly amount over or under budget

	// Set output formatting and display table heading
	cout << fixed << setprecision(2);

	cout << "\n\n               Budgeted     Spent      Difference \n";
	cout << "================================================= \n";

	// Display budget amount vs. spent amount in each category
	cout << "Housing       " 
		 << setw(8)  << budget.housing << setw(12) << spent.housing
		 << setw(12) << (spent.housing - budget.housing) << endl;
	cout << "Utilities     " 
		 << setw(8)  << budget.utilities << setw(12) << spent.utilities
		 << setw(12) << (spent.utilities - budget.utilities) << endl;
	cout << "Household     " 
		 << setw(8)  << budget.household << setw(12) << spent.household
         << setw(12) << (spent.household - budget.household) << endl;
	cout << "Transportation" 
		 << setw(8)  << budget.transportation << setw(12) << spent.transportation
		 << setw(12) << (spent.transportation - budget.transportation) << endl;
	cout << "Food          " 
		 << setw(8)  << budget.food << setw(12) << spent.food
         << setw(12) << (spent.food - budget.food) << endl;
	cout << "Medical       " 
		 << setw(8)  << budget.medical << setw(12) << spent.medical
		 << setw(12) << (spent.medical - budget.medical) << endl;
	cout << "Insurance     " 
		 << setw(8)  << budget.insurance << setw(12) << spent.insurance
		 << setw(12) << (spent.insurance - budget.insurance) << endl;
	cout << "Entertainment " 
		 << setw(8)  << budget.entertainment << setw(12) << spent.entertainment
		 << setw(12) << (spent.entertainment - budget.entertainment) << endl;
	cout << "Clothing      " 
		 << setw(8)  << budget.clothing << setw(12) << spent.clothing
		 << setw(12) << (spent.clothing - budget.clothing) << endl;
	cout << "Miscellaneous " 
		 << setw(8)  << budget.misc << setw(12) << spent.misc
		 << setw(12) << (spent.misc - budget.misc) << endl;

	// Compute total amount budgeted, total spent and the difference
	totalBudgeted = budget.housing + budget.utilities + budget.household + 
		            budget.transportation + budget.food + budget.medical +
					budget.insurance + budget.entertainment + budget.clothing +
					budget.misc; 

	totalSpent = spent.housing + spent.utilities + spent.household + 
		         spent.transportation + spent.food + spent.medical +
				 spent.insurance + spent.entertainment + spent.clothing +
				 spent.misc; 

	difference = totalBudgeted - totalSpent;

	// Display totals and the amount the user was under or over budget this month
	cout << "================================================= \n";
	cout << "Total         " 
		 << setw(8)  << totalBudgeted << setw(12) << totalSpent
		 << setw(12) << difference << endl;
	cout << "================================================= \n";

	if (totalBudgeted > totalSpent)
		cout << "\nCongratulations! You were $" << difference 
		     << " under budget this month.\n";
	else
		cout << "\nYou went $" << -difference << " over your budget this month.\n"; 
}

