// Reading from a file and return most accessed web server by URL

  // fn prototyping
void readByIPAddr();

fstream fl_obj; // Fdfn file pointer obj

int rollnum, roll2, count = 0;

    // initialize handler fn
void readByIPAddr()
{

	// open target file in write mode
	fl_obj.open("logfile.csv", ios::in);

	// get actual target row
	cout << "Enter the roll number "
		<< "of the student to display details: ";
	cin >> rollnum;

	// Read the Data from the file
	// as String Vector
	vector<string> row;
	string line, word, temp;

	while (fl_obj >> temp) {

		row.clear();

		// read an entire row and
		// store it in a string variable 'line'
		getline(fl_obj, line);

		// used for breaking words
		stringstream s(line);

		// read every column data of a row and
		// store it in a string variable, 'word'
		while (getline(s, word, ', ')) {

			// add all the column data
			// of a row to a vector
			row.push_back(word);
		}

		// convert string to integer for comparision
		roll2 = stoi(row[0]);

		// Compare the roll number
		if (roll2 == rollnum) {

			// Print the found data
			count = 1;
			cout << "Details of Roll " << row[0] << " : \n";
			cout << "Name: " << row[1] << "\n";
			cout << "Maths: " << row[2] << "\n";
			cout << "Physics: " << row[3] << "\n";
			cout << "Chemistry: " << row[4] << "\n";
			cout << "Biology: " << row[5] << "\n";
			break;
		}
	}
	if (count == 0)
		cout << "Record not found\n";
}

int int main() {
    // call main control fn
    readByIPAddr();
  return 0;
}
