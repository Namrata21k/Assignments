import java.util.*;

public class Palindrom
{
	public static void main(String[] args) 
         {
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter  Your String:");
                String str = sc.next().toLowerCase(),newStr="";
                for(int i=0;i<str.length();i++)
                 {
                   newStr += str.charAt(str.length()-i-1);
                 }
               if(str.equals(newStr))
                {
                  System.out.println("String Is a Palindrome");
                }
               else
             {
               System.out.println("String Is Not Palindrome");
              }
	}
}
