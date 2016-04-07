#include<stdio.h>



long fibo(long num){

    if (num ==1){
        return 0;
    }
    else if ( num == 2){
     return 1;
    }

    return fibo(num-1)+fibo(num-2);
    

}


main(){
	
	printf("%ld \n",fibo(45));
	

}
