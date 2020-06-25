#include <iostream>
#include <bitset>
#include <cstdlib>

using namespace std;

//global variable

uint16_t u[] = {
        0b0000000000100010,
        0b1111110100011000,
        0b1101101001001000,
        0b0101010001100001
};

// Decode function will split 16-bit parameter into 3 fields and display result

void decode(uint16_t data){
    int i;
    bitset<16> bin(data);
    bitset<6> opcode(data >> 10);
    int op1=0;
    int op2=0;
    int mul = 1;

// Get bits[10-15] for opcode
    for(i=10;i<=15;i++){
    opcode[i] = bin[i];
    }


// Bits[5-9] are operand 1

    for(i = 5;i<=9;i++){
        op1 += bin[i]*mul; // calulating deccimal value for op1
        mul = mul*2;
    }

    mul = 1;              

//Bits[0-4] are operand 2

    for(i = 0;i<=4;i++){
        op2 += bin[i]*mul; // calulating deccimal value for op2
        mul = mul*2;
    }

    cout<<"opcode: "<< opcode <<" op1: "<<"R"<<op1<<" op2: "<<"R"<<op2<<endl;

}

int main()
{
    for(int i=0;i<4;i++){

        decode(u[i]);
    }
    return 0;
}
