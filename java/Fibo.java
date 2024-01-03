public class Fibo {
    public static void main(String[] args) {
        fibo(0, 1, 10);
    }

    static void fibo(int a, int b, int count){
        if(count == 0) return; 
        System.out.println(a);
        int c = a + b;
        fibo(b, c, count - 1);
    }
}
