package Question2;

public class scope {
    public static void main(String[] args) {
        for(int i = 0; i < 5; i++){
            int b = 76;
            System.out.println(i);
        }
        System.out.println(b);
      }
}
