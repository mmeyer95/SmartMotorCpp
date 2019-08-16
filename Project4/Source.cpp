#include "IntegMotorInterface.h"
#import "IntegMotorInterface.tlb"
#include <stdio.h>
#include <iostream>
#include <string>
#include <string.h>


std::string port = "COM3"; //change port name if different

void main() {
	std::cout << "-----Starting program-----" << std::endl;
	
	//Initiate SMIHost
	SMIENGINELib::ISMICommPtr       CommInterface;
	HRESULT hr = CommInterface.CreateInstance(__uuidof(SMIHost));
	if (FAILED(hr))
	{
		AfxMessageBox("Cannot create an instance of \"SMIHost\" class!");
		return;
	}

	//Open port
	CommInterface->OpenPort(_bstr_t(port));

	//Address the motors
	std::string n = std::to_string(ISMIComm::AddressMotorChain(10));	//address up to 10 motor, find out how many there are
	printf(n, " motors found.");

	//Ask current position


	//Define a move

	
	printf("-----End of program-----");


	system("pause");
	return;
}