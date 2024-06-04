/* program to fing max profit */

int maxProfit(int* prices, int pricesSize) {
    
    int *arr = malloc(sizeof(int));

        for (int i = 0 ; i<pricesSize ; i++){
            for(int j =1 ; j<pricesSize ; j++){
                if (arr[j] - arr[i] <= 0){
                    int *arr1 = malloc(i*sizeof(int));
                    for(int k =0 ;k<i ; k++)
                        arr1[k] = (arr[i] - arr[j]);}
                        else 
                       { int *arr2 = malloc(i*sizeof(int));
                        for (int l = 0 ; l<pricesSize ; l++)
                            arr2[l]  = arr[i] - arr[j] ;}

            }
        }
        prices = arr1; 
        for(int m = 0 ;m <pricesSize/2 ; m++){
            for(int o = 1; o <pricesSize/2; o++){
                 if(prices[m]<prices[o]){
                    prices[m] = int temp;
                    temp = price[o];
                    price [o] = price[m];}
                    return prices;
        int *pointer =arr2;
            for(int p = 0 ; p<pricesSize/2 ;p++)
                for(int q = 1;q<pricesSize/2; q++)
                {
                    if (pointer[p] > pointer[q] ){
                        pointer[p] = int temp1;
                        temp 1 = pointer[q];
                        pointer[q] = pointer[p];}

                        return pointer;
                }
                }
            }
        }



            


