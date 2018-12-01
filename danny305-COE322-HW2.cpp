// dd32387 - Daniel Diaz
// K-Shift Decoder/Encoder
// COE 322 HW 2
// 10-16-18


#include<iostream>
#include<string>


using namespace std;


int main () {
	int keyNum = 0;
	string inp_msg;

	char letter;
	char character;


	cout << "Provide a Secret Key number:" << endl;
	cin >> keyNum;

	cout << "Enter message to encrypt/decrypt: " << endl;
	cin.ignore();
	getline (cin, inp_msg);


	//cout << inp_msg.length() << endl;	
	//cout << "White space: " << inp_msg.find(" ",0) << endl;	

	for (int i=0; i < inp_msg.length(); i++){

	//	cout << "The index is: " << i << endl;
	//	cout << "The letter at the index: " <<inp_msg[i] << endl;	
		

		char letter = inp_msg[i];
		int decodeLetter = (int) letter;
	
	//	cout << "The decoded ascii index is: " << decodeLetter << endl;
	
		int transDecode = decodeLetter + keyNum;
	
		if (transDecode > 126){
	
			transDecode = transDecode -126 + 32;
		}
	
		else if (transDecode < 32){

			transDecode = 126 - (32 - transDecode);
		}

		char encryptedLetter =  (char) transDecode;
	
	//	cout << "The encrypted index is: " << transDecode << endl;
	//	cout << "The encrypted letter is: " << encryptedLetter << endl << endl;
		
		cout << encryptedLetter;
	}
	cout << endl;



	




/*	
	letter = ALPHABET[key_num];

	cout << "The letter in the alphabet that corresponds to the key number: ";
	cout << letter << endl;
	

//	cout << lower_string<< endl;

	int asci = int(letter);

	cout << "The AsciII number: " << asci << endl;
	
	while (true){
		cout << "Enter a character to turn into AsciII: " << endl;
		cin >> character;
		int char_asci = (int)character;

		cout << "The AsciII encoding is: " << char_asci << endl;
		char convLetter = char_asci + 32; 
		cout << "The converted ASCII character " << (char)convLetter << endl << endl;
	}

*/
}

