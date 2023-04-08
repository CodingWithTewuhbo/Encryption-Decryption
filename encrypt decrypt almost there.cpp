#include<iostream>
int main(){
    backtofirst:
    int n,a,b,c,d,e,f,g,h,i,j,k,l,m; // n is for the integer, a,b,c,d is for the individual digits of that integer,i is to show the encrypted number. 
    char x;   
    do{
        std::cout<<"Enter the four digit number: ";
        std::cin>>n;
    }
    while(n<1000 || n>9999);
   std::cout<<"Do you want to encrypt or decrypt the number? "<<std::endl;
   std::cout<<"Type Y/y for encryption or N/n for decryption: ";
   std::cin>>x;
    if(x=='Y' || x=='y')
    {
       a=n/1000;
       std::cout<<"The first digit of "<<n<<" is "<<a<<std::endl;
       b=(n/100)%10;
       std::cout<<"The second digit of "<<n<<" is "<<b<<std::endl;
       c=(n/10)%10;
       std::cout<<"The third digit of "<<n<<" is "<<c<<std::endl;
       d=n%10;
       std::cout<<"The fourth digit of "<<n<<" is "<<d<<std::endl;
       e=(a+7)%10;
       f=(b+7)%10;
       g=(c+7)%10;
       h=(d+7)%10;
       l=e;
       m=f;
       j=g;
       k=h;
       std::cout<<"The modulus "<<e<<" "<<f<<" "<<g<<" "<<h<<std::endl;
       std::cout<<"After the shuffle "<<j<<" "<<k<<" "<<l<<" "<<m<<std::endl;
       i=(j*1000)+(k*100)+(l*10)+m;
       std::cout<<"The encrypted number is "<<i<<std::endl;
    }
    else if (x=='N' || x=='n')
    {
       a=n/1000;
       std::cout<<"The first digit of "<<n<<" is "<<a<<std::endl;
       b=(n/100)%10;
       std::cout<<"The second digit of "<<n<<" is "<<b<<std::endl;
       c=(n/10)%10;
       std::cout<<"The third digit of "<<n<<" is "<<c<<std::endl;
       d=n%10;
       std::cout<<"The fourth digit of "<<n<<" is "<<d<<std::endl;
       e=(a+3)%10;
       f=(b+3)%10;
       g=(c+3)%10;
       h=(d+3)%10;
       l=e;
       m=f;
       j=g;
       k=h;
       std::cout<<"The modulus "<<e<<" "<<f<<" "<<g<<" "<<h<<std::endl;
       std::cout<<"After the shuffle "<<j<<" "<<k<<" "<<l<<" "<<m<<std::endl;
       i=(j*1000)+(k*100)+(l*10)+m;
       std::cout<<"The original number is "<<i<<std::endl;
    }
    std::cout<<"Do you want to continue? "<<std::endl;
    std::cout<<"Type Y/y for yes or N/n for no: ";
    std::cin>>x;
    if (x=='Y' || x=='y')
    goto backtofirst;
    else
    std::cout<<"Thank you for using this program!"<<std::endl;
    return 0;
}