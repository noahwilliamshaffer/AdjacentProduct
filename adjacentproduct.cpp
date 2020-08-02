int adjacentElementsProduct(std::vector<int> inputArray) {
 int product=-1000;
 int max=-1000;
int limit = inputArray.size(); 
for (int i = 1; i <=limit-1; i++ ){
 product=inputArray[i-1]*inputArray[i]; 
  
 if (max < product){
  max=product;
 }
cout <<max;
}
 
 
 return max;   
}
