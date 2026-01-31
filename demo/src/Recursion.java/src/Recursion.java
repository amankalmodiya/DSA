import java.util.Scanner;
public class Recursion{
    public static void main(String[] args) {
Scanner sc=new Scanner(System.in);
int x=5;
int numbers[][]=new int [3][5];

for(int i=0;i<3;i++){
for(int j=0;j<5;j++){
  numbers[i][j]=sc.nextInt();
}
}

for(int i=0;i<3;i++){
for(int j=0;j<5;j++){
  if(numbers[i][j]==x){
System.out.println("index is:"+i+j);
  }
}
}
}
    }


