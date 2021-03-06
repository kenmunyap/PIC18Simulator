#include <stdio.h>
#include "NS.h"
#include "Extract1BitsValue.h"
#include "ExtractValue.h"
#include "Interpret.h"
#include "StringObject.h"
#include "String.h"
#include "Text.h"
#include "ErrorCode.h"
#include "CException.h"
#include "CustomTypeAssert.h"

int NS(String *arguments){
	int operand1;
	int operand2;
	int opcode;
	
	operand1 = operand1ExtractValue(arguments);
	operand2 = operandExtract1BitsValue(arguments);
	
	return opcode = ((operand1&0xfff00)<<8) | (operand2<<8) | (operand1 & 0xff);


}


