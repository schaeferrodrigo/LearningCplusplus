#include <iostream>
#include <string>
#include <map>


std::string messageToBeDecoded() {
	std::string message;
	std::cout << "Write the message to be decoded" << std::endl;
	std::getline(std::cin, message);
	return message;
}

std::string keyToDecode() {
	std::string key;
	while (key.empty()) {
		std::cout << "Write the key to decode" << std::endl;
		std::getline(std::cin, key);
		if (key.empty()) { std::cout << "They key is not valid" << std::endl; }
	}
	return key;
}

std::map<char, char> CreateDecodeTable(const std::string& key) {
	std::map<char, char> decodeTable;

	char currentChar = 'a';


	for (char kChar : key) {
		if (kChar != ' ' && decodeTable.find(kChar) == decodeTable.end()) {
			decodeTable[kChar] = currentChar;
			currentChar++;
		}
	}
	return decodeTable;

}

std::string decodeMessage(const std::map<char, char>& table, const std::string& message) {
	std::string decodedMessage = "";
	for (char mChar : message) {
		if (mChar == ' ') {
			decodedMessage += mChar;
		}
		else {
			decodedMessage += table.at(mChar);
		}
	}

	return decodedMessage;

}

void printTable(const std::map<char, char> table) {
	for (auto letter : table) {
		std::cout << "key " << letter.first << " value " << letter.second << std::endl;
	}
}

int main() {
	std::string toBeDecodedMesssage;
	std::string decodificationKey;
	std::string decodededMessage;
	std::map<char, char> tableToDecode;


	toBeDecodedMesssage = messageToBeDecoded(); //"vkbs bs t suepuv"
	decodificationKey = keyToDecode(); //"the quick brown fox jumps over the lazy dog";
	tableToDecode = CreateDecodeTable(decodificationKey);
	decodededMessage = decodeMessage(tableToDecode, toBeDecodedMesssage);

	printTable(tableToDecode);

	std::cout << "The original message is:" << toBeDecodedMesssage << std::endl;
	std::cout << "The decoded message is " << decodededMessage << std::endl;


	return 0;
}