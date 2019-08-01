import java.util.*;
public class Main
{
	public static void main(String[] args) {
	    Scanner sc=new Scanner(System.in);
	    System.out.println("Enter the number of elements in the array");
	    int n=sc.nextInt();
	    int arr[]=new int[n];
	    System.out.println("Enter the elements");
	    int i,j,min,temp;
	    for(i=0;i<n;i++)
	    arr[i]=sc.nextInt();
	    for(i=0;i<n-1;i++){
	        for(j=0;j<n-i-1;j++){
	            if(arr[j]>arr[j+1]){
	            temp=arr[j];
	        arr[j]=arr[j+1];
	        arr[j+1]=temp;
	        }
	    }
	    }
	    for(i=0;i<n;i++)
		System.out.print(arr[i]+" ");
	}
}
