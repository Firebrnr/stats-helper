//Library & Dependency Includes
#include <iostream>
#include <algorithm>
#include <vector>


//Main Function
int main(int argc, char **argv) {

	//Declaring Variables:
	int arSiz=0;
	int repet=0;
	float selInput = 0.0;
	float average = 0.0;
	float median = 0.0;
	float finMed = 0.0;
	float fashion = 0.0;	
	std::string ver = "0.2.1.1";
	std::vector<float> vecVar;



	std::cout << "\nStatistics Helper by Firebrnr\n version: " << ver << "\n\nInput your array size:\n\t\\-->";
	std::cin >> arSiz;
	std::cout <<"\n" << std::endl;

	// -!_!- Getting Values:
	for (float i = 0; i < arSiz; i++) {
		std::cout << "\n\n" << "INSERT VALUE " << i + 1 << "\n\n\t\\-->>";
		std::cin >> selInput;
		vecVar.push_back(selInput);
		std::cout << "Value: "<< selInput<<" inserted in slot:" << i << "\n";
	}
	std::cout << "\n\n";
	std::cout << "Values withOUT Sorting: ";

	//!!!Shows data in vecVar:
	for (float i : vecVar) {
		std::cout << " " << i << " ";
	}
	std::cout << "\n";


	//Sorts the data:
	sort(vecVar.begin(), vecVar.end());


	//Enters new line:
	std::cout << "\n";

	//                - SORTING PRINT -
	//Prints simple text:
	std::cout << "Values WITH Sorting: ";

	//!!!Shows data in vecVar (the used vector):
	for (float i : vecVar) {
		std::cout << " " << i << " ";
	}
	std::cout << "\n\n";

	//                - MEDIAN PRINT -
	// Prints simple text :
	std::cout << "Median: ";
	repet = 0;
	
	//Checks if it is a pair vector
	if (arSiz % 2 == 0) {

		for (float i : vecVar) {
			
			if (repet == ((arSiz-1) / 2)) {
				median = median+=i;
			}
			if (repet == (((arSiz-1) / 2) +1)) {
				median = median += i;
			}
			
			repet++;
		}
		finMed = (median/2);
	}
	else {

		for (float i : vecVar) {

			if (repet == (arSiz-1) / 2) {
				median = median += i;
			}
			
			repet++;
		}
		finMed = (median / 2);

	}

		std::cout << finMed;

	
	std::cout << "\n\n";

	//                - FASHION PRINT -3
	// Prints simple text :
	std::cout << "Fashion: ";

	//!!!Shows data in vecVar (the used vector):
	for (float i : vecVar) {
		std::cout << " " << i << " ";
	}
	std::cout << "\n\n";

	//                - AVERAGE PRINT -
	// Prints simple text :
	std::cout << "Average: ";

	//!!!Shows data in vecVar (the used vector):
	for (float i : vecVar) {
		average+=i;
	}
	average = average / arSiz;
	std::cout << average;
	std::cout << "\n\n";


	// Prints simple text :
	std::cout << "Range: ";
	std::cout << vecVar.back() - vecVar.front();
	//!!!Shows data in vecVar (the used vector):
		
	std::cout << "\n\tSmallest Value: " << vecVar.front()<< "\n\tLargest Value: " << vecVar.back();

	std::cout << "\n\n";

	




	//return exit code 0 (no error):
	return 0;
}