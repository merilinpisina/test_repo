//// Code to demonstrate the seekg function in file handling 
//#include <fstream> 
//#include <iostream> 
//
//using namespace std;
//
//int main(int argc, char** argv)
//{
//	// Open a new file for input/output operations 
//	// discarding any current in the file (assumes  
//	// a length of zero on opening) 
//	fstream myFile("test.txt", ios::in | ios::out | ios::trunc);
//
//	// Add the characters "Hello World" to the file 
//	myFile << "Hello World";
//
//	// Seek to 6 characters from the beginning of the file 
//	myFile.seekg(6, ios::beg);
//
//	// Read the next 5 characters from the file into a buffer 
//	char A[6];
//	myFile.read(A, 5);
//
//	// End the buffer with a null terminating character 
//	A[5] = '\0';
//
//	// Output the contents read from the file and close it  
//	cout << A << endl;
//
//	myFile.close();
//
//	system("pause");
//	return 0;
//}