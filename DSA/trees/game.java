import java.util.Scanner;
import java.util.Random;
public class game {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Lets Play Rock Paper Scissor");
        int count=0;
        System.out.println("Select Number of Matches(eg 3 or 5)");
        int x=sc.nextInt();
        for(int i=x;i>0;i--){
        System.out.println("Press 1: Rock\t Press 2: Paper\t Press 3: Scissor");
        int m=sc.nextInt();
        if(m==1 || m==2 || m==3){
        }else{
            System.out.println("Enter a Valid number(1-3)");
            break;
        }
        Random rnd=new Random();
        int n=rnd.nextInt(1,3);
        if(n==1){
            System.out.println("Its a Rock");
        }else if(n==2){
            System.out.println("Its a Paper");
        }
        else{
            System.out.println("Its a Scissor");
        } 
        if(m==n){
            System.out.println("ITS A TIE");
        }else if(n==1 && m==2 || n==2 && m==3 || n==3 && m==1){
            System.out.println("You win");
            count++;   
        }
        else{
            System.out.println("You Lose");
        }
    }
        System.out.println("Your Score is : "+count);
}
}