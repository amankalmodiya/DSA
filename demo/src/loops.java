import java.util.Scanner;
public class loops {
    public static void main(String args[]){
       
int n=5;
for(int i=1;i<=n;i++){
  for(int j=1;j<=1;j++){
    System.out.print("*");
  }
  for(int j=2;j<=i;j++){
    System.out.print(" ");
  }
  for(int j=2;j<=2;j++){
    if(i==1){
      System.out.print("  ");
    }else{
    System.out.print("*");
  }
}
for(int j=1;j<=(n-i)*2;j++){
  System.out.print(" ");
}
for(int j=1;j<=1;j++){
  System.out.print("*");
}
for(int j=2;j<=i;j++){
  System.out.print(" ");
}
for(int j=2;j<=2;j++){
  if(i==1){
    System.out.print("");
  }else{
    System.out.print("*");
  }

}
  System.out.println();
}
for(int i=1;i<=n;i++){
  for(int j=1;j<=1;j++){
    System.out.print("*");
  }
  for(int j=1;j<=n-i;j++){
    System.out.print(" ");
  }
  for(int j=1;j<=1;j++){
    if(i==5){
      System.out.print("");
    }else
    System.out.print("*");
  }
  for(int j=2;j<=i*2-1;j++){
    System.out.print(" ");
  }
  for(int j=1;j<=1;j++){
   if(i==5){
      System.out.print("  ");
    }else
    System.out.print("*");
  }
  for(int j=1;j<=(n-i);j++){
    System.out.print(" ");
  }
   for(int j=1;j<=1;j++){
    System.out.print("*");
  }
  System.out.println();
}


}
}
