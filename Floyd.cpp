//Floyd Triangle
//Note- Floyd Triangle is like
//1
//2 3
//4 5 6
//7 8 9 10

import java.util.Scanner;
public class FloydTriangle{
    public static void main(String[] args){
        Scanner in = new Scanner(System.in);
        System.out.println("Enter the number of rows which you want                    
                                        in your Floyd Triangle: ");
        int r = in.nextInt();
        int n=0;
        for(int i=0; i<r; i++){
            for(int j=0; j<=i; j++){
                System.out.print(++n+" ");
            }
            System.out.println();
        }
    }
}

//Expected Output
//Enter the number of rows which you want in your Floyd Triangle: 
//5
//1 
//2 3 
//4 5 6 
//7 8 9 10 
//11 12 13 14 15
