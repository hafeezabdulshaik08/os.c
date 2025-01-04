import java.util.Scanner;
public class bubblesort
{
    public static void bs(int a[],int n)
    {
        int i,j,temp;
        for(i = 0; i< n-1 ; i++)
        {
            for(j = 0;j < n -1-i; j++)
            {
                if(a[j] > a[j+1])
                {   
                    temp = a[j];
                    a[j] = a[j+1];
                    a[j+1] = temp;
                }
            }
        }
    }
    public static void main(String[] args)
    {
        int n,i,j;
        Scanner sc = new Scanner(System.in);
        System.out.println("enter the number of elements of the array");
        n = sc.nextInt();
        int a[] = new int[n];

        System.out.println("enter the elements");
        for(i = 0;i<n;i++)
        {
            j = sc.nextInt();
            a[i] = j;
        }
        bs(a,n);
        for(i = 0; i<n;i++)
        {
            System.out.print("  "+a[i] );
        }
    }


}



import java.io.*;
import java.util.*;

public class Solution {
    static ArrayList<Integer> leaders(int[] arr){
        ArrayList<Integer> rl = new ArrayList<>();
        int i,j,n;
        n = arr.length;
        
        for(i=0;i<n;i++) {
            for(j=i+1;j<n;j++){
                if(arr[i]<arr[j])
                    break;
            }
            if (j==n)
                rl.add(arr[i]);
        }
        return rl;
    }
    public static void main(String[] args) {
        int i,j;
        Scanner sc = new Scanner(System.in);
        System.out.println();
        int n = sc.nextInt();
        int arr[] = new int[n];
        System.out.println();
        for(i = 0;i<n;i++)
        {
            j = sc.nextInt();
            arr[i] = j;
        }
        ArrayList<Integer> rl = leaders(arr);
        for (int rs : rl) {
            System.out.print(rs + " ");
        }
        System.out.println();
    }
}


