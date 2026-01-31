import java.util.*;
public class Switch {
    public static void main(String args[]){
Scanner sc=new Scanner(System.in);
System.out.println("enter first number:");
int number1=sc.nextInt();
System.out.println("enter operator");
char operator =sc.next().charAt(0);
System.out.println("enter second number:");
int number2=sc.nextInt();
int result ;
switch(operator){
    case '+':
    result = number1+number2;
  //  System.out.println("result:"+result);
    break;
    case '-':
    result = number1-number2;
   // System.out.println("result:"+result);
    break;
    case '*':
    result = number1+number2;
   // System.out.println("result:"+result);
    break;
    case '/':
    if(number2 !=0){
    result = number1/number2;
   // System.out.println("result:"+result);
    }
    else{
    System.out.println("not divided by zero");
    return;
  }
    break;
    default:
    System.out.println("invalid operator");
    return;
}

System.out.println("Result:"+result);

}
}