class LinearSearch
{
	public static void main (String[] args)
	{
  	int n = 6;
    int input[] = {10, 20, 80, 30, 60, 50};
    int target = 30;
    int result = 0;
    for(int i=0;i< n;i++){
        if(input[i] == target){
          System.out.print("Found at index "+ i);
          result = 1;
        }
    }
        if(result == 0){
          System.out.println("Target Not Found !!!");
     	  } 
  }
}
