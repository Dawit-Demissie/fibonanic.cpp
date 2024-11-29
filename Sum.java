package Deve;

import java.util.Scanner;
public class Sum {
    public static void main(String[] args){
        Scanner ds=new Scanner(System.in);
        int sum =0;
        System.out.println("Enter the number who want to add:");
        int n =ds.nextInt();
        for(int i=0;i<n;i++){
         if(i%3==0){
            continue;
         }
         else{
            sum =sum+i;
         }
        }
        System.out.println(sum);
        ds.close();
    }
}
