import java.util.*;
public class Function {
public static void main(String args[]){
 int n=101;
 boolean  isprime=true;
if(n<=1){
  System.out.println("not prime");
  return;
}
for(int i=2;i<=n/2;i++){
  if(n%i==0){
    isprime=false;
    break;
  }
}
if(isprime){
  System.out.println("prime");
}
else{
  System.out.println("not prime");
}
}
      }
    


