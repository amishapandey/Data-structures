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
	        min=i;
	        for(j=i+1;j<n;j++){
	            if(arr[j]<arr[min])
	            min=j;
	        }
	        temp=arr[i];
	        arr[i]=arr[min];
	        arr[min]=temp;
	    } for(i=0;i<n;i++)
		System.out.print(arr[i]+" ");
	}
}
