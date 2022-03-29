//Student Hadeer Wael AbdelAziz AbdelHalim
//ID 20210444
//Cairo University faculty of Computers and Artificial Intelligence
//This program encrypts and decrypts using Baconian cipher.

#include <iostream>
#include <string>
#include <cstring>

int main()
{
	//taking input from the user whether theyd like to cipher or decipher
	using namespace std;
	string userinput, wordtocipher, indletters;
	cout<<"Ahlan ya user ya habibi.\nWhat do you like to do today?\n1-Cipher a message\n2-Decipher a message\n3-End"<<endl;
	cin>> userinput;
	
	if(userinput == "cipher" || userinput == "Cipher"){
		
		//taking input from the user to cipher a message
		cout<<"Please enter a message to cipher: ";
		cin.ignore();
		getline(cin,wordtocipher);
		
		int wordlength = wordtocipher.length();
		
		//for looping to check each letter indiviually
		for(int i=0; i<wordlength; i++){
		indletters = wordtocipher[i];
		
		//encrypting by replacing each letter with its corresponding code
		if (indletters == "A"|| indletters == "a"){
			cout<<"aaaaa ";
		}
		else if (indletters == "B"|| indletters == "b"){
			cout<<"aaaab ";
		}
		else if (indletters == "C"|| indletters == "c"){
			cout<<"aaaba ";
		}
		else if (indletters == "D"|| indletters == "d"){
			cout<<"aaabb ";
		}
		else if (indletters == "E"|| indletters == "e"){
			cout<<"aabaa ";
		}
		else if (indletters == "F"|| indletters == "f"){
			cout<<"aabab ";
		}
		else if (indletters == "G"|| indletters == "g"){
			cout<<"aabba ";
		}
		else if (indletters == "H"|| indletters == "h"){
			cout<<"aabbb ";
		}
		else if (indletters == "I"|| indletters == "i"){
			cout<<"abaaa ";
		}
		else if (indletters == "J"|| indletters == "j"){
			cout<<"abaab ";
		}
		else if (indletters == "K"|| indletters == "k"){
			cout<<"ababa ";
		}
		else if (indletters == "L"|| indletters == "l"){
			cout<<"ababb ";
		}
		else if (indletters == "M"|| indletters == "m"){
			cout<<"abbaa ";
		}
		else if (indletters == "N"|| indletters == "n"){
			cout<<"abbab ";
		}
		else if (indletters == "O"|| indletters == "o"){
			cout<<"abbba ";
		}
		else if (indletters == "P"|| indletters == "p"){
			cout<<"abbbb ";
		}
		else if (indletters == "Q"|| indletters == "q"){
			cout<<"baaaa ";
		}
		else if (indletters == "R"|| indletters == "r"){
			cout<<"baaab ";
		}
		else if (indletters == "S"|| indletters == "s"){
			cout<<"baaba ";
		}
		else if (indletters == "T"|| indletters == "t"){
			cout<<"baabb ";
		}
		else if (indletters == "U"|| indletters == "u"){
			cout<<"babaa ";
		}
		else if (indletters == "V"|| indletters == "v"){
			cout<<"babab ";
		}
		else if (indletters == "W"|| indletters == "w"){
			cout<<"babba ";
		}
		else if (indletters == "X"|| indletters == "x"){
			cout<<"babbb ";
		}
		else if (indletters == "Y"|| indletters == "y"){
			cout<<"bbaaa ";
		}
		else if (indletters == "Z"|| indletters == "z"){
			cout<<"bbaab ";
		}
	}
	}
	else if (userinput == "decipher"|| userinput == "Decipher"){
		
		//taking input from the user to decipher a message.
		string message, firstword, secondword, thirdword, forthword, fifthword, sixthword;
		firstword = "";
		cout<<"enter the message you wish to decipher: ";
		cin.ignore();
		getline(cin, message);
		
		//dividing the message into words to replace the code to its corresponding letter.
    	for (int i=0; i<5 ; i++){
    		firstword += message[i];
    		if (firstword == "aaaaa"){
				cout<<"a";
			}
			else if (firstword == "aaaab"){
				cout<<"b";
			}
			else if (firstword == "aaaba"){
				cout<<"c";
			}
			else if (firstword == "aaabb"){
				cout<<"d";
			}
			else if (firstword == "aabaa"){
				cout<<"e";
			}
			else if (firstword == "aabab"){
				cout<<"f";
			}
			else if (firstword == "aabba"){
				cout<<"g";
			}
			else if (firstword == "aabbb"){
				cout<<"h";
			}
			else if (firstword == "abaaa"){
				cout<<"i";
			}
			else if (firstword == "abaab"){
				cout<<"j";
			}
			else if (firstword == "ababa"){
				cout<<"k";
			}
			else if (firstword == "ababb"){
				cout<<"l";
			}
			else if (firstword == "abbaa"){
				cout<<"m";
			}
			else if (firstword == "abbab"){
				cout<<"n";
			}
			else if (firstword == "abbba"){
				cout<<"o";
			}
			else if (firstword == "abbbb"){
				cout<<"p";
			}
			else if (firstword == "baaaa"){
				cout<<"q";
			}
			else if (firstword == "baaab"){
				cout<<"r";
			}
			else if (firstword == "baaba"){
				cout<<"s";
			}
			else if (firstword == "baabb"){
				cout<<"t";
			}
			else if (firstword == "babaa"){
				cout<<"u";
			}
			else if (firstword == "babab"){
				cout<<"v";
			}
			else if (firstword == "babba"){
				cout<<"w";
			}
			else if (firstword == "babbb"){
				cout<<"x";
			}
			else if (firstword == "bbaaa"){
				cout<<"y";
			}
			else if (firstword == "bbaab"){
				cout<<"z";
			}
			
		}
		for (int i=6; i<11; i++){
			secondword += message[i];
    		if (secondword == "aaaaa"){
				cout<<"a";
			}
			else if (secondword == "aaaab"){
				cout<<"b";
			}
			else if (secondword == "aaaba"){
				cout<<"c";
			}
			else if (secondword == "aaabb"){
				cout<<"d";
			}
			else if (secondword == "aabaa"){
				cout<<"e";
			}
			else if (secondword == "aabab"){
				cout<<"f";
			}
			else if (secondword == "aabba"){
				cout<<"g";
			}
			else if (secondword == "aabbb"){
				cout<<"h";
			}
			else if (secondword == "abaaa"){
				cout<<"i";
			}
			else if (secondword == "abaab"){
				cout<<"j";
			}
			else if (secondword == "ababa"){
				cout<<"k";
			}
			else if (secondword == "ababb"){
				cout<<"l";
			}
			else if (secondword == "abbaa"){
				cout<<"m";
			}
			else if (secondword == "abbab"){
				cout<<"n";
			}
			else if (secondword == "abbba"){
				cout<<"o";
			}
			else if (secondword == "abbbb"){
				cout<<"p";
			}
			else if (secondword == "baaaa"){
				cout<<"q";
			}
			else if (secondword == "baaab"){
				cout<<"r";
			}
			else if (secondword == "baaba"){
				cout<<"s";
			}
			else if (secondword == "baabb"){
				cout<<"t";
			}
			else if (secondword == "babaa"){
				cout<<"u";
			}
			else if (secondword == "babab"){
				cout<<"v";
			}
			else if (secondword == "babba"){
				cout<<"w";
			}
			else if (secondword == "babbb"){
				cout<<"x";
			}
			else if (secondword == "bbaaa"){
				cout<<"y";
			}
			else if (secondword == "bbaab"){
				cout<<"z";
			}
		}
		
		for (int i=12; i<17; i++){
			thirdword += message[i];
    		if (thirdword == "aaaaa"){
				cout<<"a";
			}
			else if (thirdword == "aaaab"){
				cout<<"b";
			}
			else if (thirdword == "aaaba"){
				cout<<"c";
			}
			else if (thirdword == "aaabb"){
				cout<<"d";
			}
			else if (thirdword == "aabaa"){
				cout<<"e";
			}
			else if (thirdword == "aabab"){
				cout<<"f";
			}
			else if (thirdword == "aabba"){
				cout<<"g";
			}
			else if (thirdword == "aabbb"){
				cout<<"h";
			}
			else if (thirdword == "abaaa"){
				cout<<"i";
			}
			else if (thirdword == "abaab"){
				cout<<"j";
			}
			else if (thirdword == "ababa"){
				cout<<"k";
			}
			else if (thirdword == "ababb"){
				cout<<"l";
			}
			else if (thirdword == "abbaa"){
				cout<<"m";
			}
			else if (thirdword == "abbab"){
				cout<<"n";
			}
			else if (thirdword == "abbba"){
				cout<<"o";
			}
			else if (thirdword == "abbbb"){
				cout<<"p";
			}
			else if (thirdword == "baaaa"){
				cout<<"q";
			}
			else if (thirdword == "baaab"){
				cout<<"r";
			}
			else if (thirdword == "baaba"){
				cout<<"s";
			}
			else if (thirdword == "baabb"){
				cout<<"t";
			}
			else if (thirdword == "babaa"){
				cout<<"u";
			}
			else if (thirdword == "babab"){
				cout<<"v";
			}
			else if (thirdword == "babba"){
				cout<<"w";
			}
			else if (thirdword == "babbb"){
				cout<<"x";
			}
			else if (thirdword == "bbaaa"){
				cout<<"y";
			}
			else if (thirdword == "bbaab"){
				cout<<"z";
			}
		}
		
	
		for (int i=18; i<23; i++){
			forthword += message[i];
    		if (forthword == "aaaaa"){
				cout<<"a";
			}
			else if (forthword == "aaaab"){
				cout<<"b";
			}
			else if (forthword == "aaaba"){
				cout<<"c";
			}
			else if (forthword == "aaabb"){
				cout<<"d";
			}
			else if (forthword == "aabaa"){
				cout<<"e";
			}
			else if (forthword == "aabab"){
				cout<<"f";
			}
			else if (forthword == "aabba"){
				cout<<"g";
			}
			else if (forthword == "aabbb"){
				cout<<"h";
			}
			else if (forthword == "abaaa"){
				cout<<"i";
			}
			else if (forthword == "abaab"){
				cout<<"j";
			}
			else if (forthword == "ababa"){
				cout<<"k";
			}
			else if (forthword == "ababb"){
				cout<<"l";
			}
			else if (forthword == "abbaa"){
				cout<<"m";
			}
			else if (forthword == "abbab"){
				cout<<"n";
			}
			else if (forthword == "abbba"){
				cout<<"o";
			}
			else if (forthword == "abbbb"){
				cout<<"p";
			}
			else if (forthword == "baaaa"){
				cout<<"q";
			}
			else if (forthword == "baaab"){
				cout<<"r";
			}
			else if (forthword == "baaba"){
				cout<<"s";
			}
			else if (forthword == "baabb"){
				cout<<"t";
			}
			else if (forthword == "babaa"){
				cout<<"u";
			}
			else if (forthword == "babab"){
				cout<<"v";
			}
			else if (forthword == "babba"){
				cout<<"w";
			}
			else if (forthword == "babbb"){
				cout<<"x";
			}
			else if (forthword == "bbaaa"){
				cout<<"y";
			}
			else if (forthword == "bbaab"){
				cout<<"z";
			}
		}
		
		for (int i=24; i<29; i++){
			fifthword += message[i];
    		if (fifthword == "aaaaa"){
				cout<<"a";
			}
			else if (fifthword == "aaaab"){
				cout<<"b";
			}
			else if (fifthword == "aaaba"){
				cout<<"c";
			}
			else if (fifthword == "aaabb"){
				cout<<"d";
			}
			else if (fifthword == "aabaa"){
				cout<<"e";
			}
			else if (fifthword == "aabab"){
				cout<<"f";
			}
			else if (fifthword == "aabba"){
				cout<<"g";
			}
			else if (fifthword == "aabbb"){
				cout<<"h";
			}
			else if (fifthword == "abaaa"){
				cout<<"i";
			}
			else if (fifthword == "abaab"){
				cout<<"j";
			}
			else if (fifthword == "ababa"){
				cout<<"k";
			}
			else if (fifthword == "ababb"){
				cout<<"l";
			}
			else if (fifthword == "abbaa"){
				cout<<"m";
			}
			else if (fifthword == "abbab"){
				cout<<"n";
			}
			else if (fifthword == "abbba"){
				cout<<"o";
			}
			else if (fifthword == "abbbb"){
				cout<<"p";
			}
			else if (fifthword == "baaaa"){
				cout<<"q";
			}
			else if (fifthword == "baaab"){
				cout<<"r";
			}
			else if (fifthword == "baaba"){
				cout<<"s";
			}
			else if (fifthword == "baabb"){
				cout<<"t";
			}
			else if (fifthword == "babaa"){
				cout<<"u";
			}
			else if (fifthword == "babab"){
				cout<<"v";
			}
			else if (fifthword == "babba"){
				cout<<"w";
			}
			else if (fifthword == "babbb"){
				cout<<"x";
			}
			else if (fifthword == "bbaaa"){
				cout<<"y";
			}
			else if (fifthword == "bbaab"){
				cout<<"z";
			}
		}
		
			for (int i=30; i<35; i++){
			sixthword += message[i];
    		if (sixthword == "aaaaa"){
				cout<<"a";
			}
			else if (sixthword == "aaaab"){
				cout<<"b";
			}
			else if (sixthword == "aaaba"){
				cout<<"c";
			}
			else if (sixthword == "aaabb"){
				cout<<"d";
			}
			else if (sixthword == "aabaa"){
				cout<<"e";
			}
			else if (sixthword == "aabab"){
				cout<<"f";
			}
			else if (sixthword == "aabba"){
				cout<<"g";
			}
			else if (sixthword == "aabbb"){
				cout<<"h";
			}
			else if (sixthword == "abaaa"){
				cout<<"i";
			}
			else if (sixthword == "abaab"){
				cout<<"j";
			}
			else if (sixthword == "ababa"){
				cout<<"k";
			}
			else if (sixthword == "ababb"){
				cout<<"l";
			}
			else if (sixthword == "abbaa"){
				cout<<"m";
			}
			else if (sixthword == "abbab"){
				cout<<"n";
			}
			else if (sixthword == "abbba"){
				cout<<"o";
			}
			else if (sixthword == "abbbb"){
				cout<<"p";
			}
			else if (sixthword == "baaaa"){
				cout<<"q";
			}
			else if (sixthword == "baaab"){
				cout<<"r";
			}
			else if (sixthword == "baaba"){
				cout<<"s";
			}
			else if (sixthword == "baabb"){
				cout<<"t";
			}
			else if (sixthword == "babaa"){
				cout<<"u";
			}
			else if (sixthword == "babab"){
				cout<<"v";
			}
			else if (sixthword == "babba"){
				cout<<"w";
			}
			else if (sixthword == "babbb"){
				cout<<"x";
			}
			else if (sixthword == "bbaaa"){
				cout<<"y";
			}
			else if (sixthword == "bbaab"){
				cout<<"z";
			}
		}
	}
	return 1;
}
