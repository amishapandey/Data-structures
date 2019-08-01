import java.util.*;
public class Main
{
	public static void main(String[] args) {
	    Scanner sc=new Scanner(System.in);
	    System.out.println("Enter the number of elements in the array");
	    int n=sc.nextInt();
	    int arr[]=new int[n];
	    System.out.println("Enter the elements");
	    int i,j,temp;
	    for(i=0;i<n;i++)
	    arr[i]=sc.nextInt();
	    for(i=1;i<n;i++){
	        temp=arr[i];
	        j=i-1;
	        while(j>=0 && arr[j]>temp){
	            arr[j+1]=arr[j];
	            j=j-1;
	        }
	        arr[j+1]=temp;
	    }
	    for(i=0;i<n;i++)
		System.out.print(arr[i]+" ");
	}
}
