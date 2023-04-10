#include<iostream>
int main(){
    backtofirst:
    int array[14]; // we are creating an array of 14 integers, most of which are used to store digits.
    char letter;   
    do{
        std::cout<<"Enter the four digit number: ";
        std::cin>>array[0]; //the number we accept from user.
    }
    while(array[0]<1000 || array[0]>9999);// we are accepting only 4 digit numbers.
   std::cout<<"Do you want to encrypt or decrypt the number? "<<std::endl;
   std::cout<<"Type Y/y for encryption or N/n for decryption: ";
   std::cin>>letter;
    if(x == 'Y' || x == 'y') // if user wants to encrypt.
    {
        // we extract the individual digits from the number we accepted in the next 4 lines of code.
       array[1]=array[0] / 1000;
       array[2]=(array[0] / 100)%10;
       array[3]=(array[0] / 10)%10;
       array[4]=array[0] % 10;
        // we encrypt the number with the algorithm we are given in the next 4 lines of code.
       array[5]=(array[1] + 7)%10;
       array[6]=(array[2] + 7)%10;
       array[7]=(array[3] + 7)%10;
       array[8]=(array[4] + 7)%10;
       // we shuffle the numbers according to the algorithm.
       array[11] = array[5];
       array[12] = array[6];
       array[9] = array[7];
       array[10] = array[8];
       array[13] = (array[9] * 1000) + (array[10] * 100)+(array[11] * 10) + array[12]; // we are displaying the number in four digit form.
       std::cout<<"The encrypted number is "<<array[13]<<std::endl;
    }
    else if (x == 'N' || x == 'n') //if user wants to decrypt instead.
    {
        // we extract the individual digits from the number we accepted, in the next 4 lines of code.
       array[1] = array[0] / 1000;
       array[2] = (array[0] / 100) % 10;
       array[3] = (array[0] / 10) % 10;
       array[4] = array[0] % 10;
        // the next four lines is the decryption algorithm for our code.
       array[5] = (array[1] + 3) % 10; 
       array[6] = (array[2] + 3) % 10;
       array[7] = (array[3] + 3) % 10;
       array[8] = (array[4] + 3) % 10;
       // the shuffling is reverted when we decrypt the number.
       array[11] = array[5];
       array[12] = array[6];
       array[9] = array[7];
       array[10] = array[8];
       array[13] = (array[9]*1000)+(array[10]*100)+(array[11]*10)+array[12];
       std::cout<<"The original number is "<<array[13]<<std::endl;
    }
    std::cout<<"Do you want to continue? "<<std::endl;
    std::cout<<"Type Y/y for yes or N/n for no: ";
    std::cin>>letter;
    if (x== 'Y' || x == 'y ') // if user wants to continue
    goto backtofirst; // repeat the process of accepting a number from the user.
    else // if user doesn't want to continue
    std::cout<<"Thank you for using this program!"<<std::endl;
    return 0;
}
