import java.util.Arrays;

public class VarArgs {
    public static void main(String[] args) {
        dis(12,42,53,53);
    }

    static void dis(int ...arr){
        System.out.println(Arrays.toString(arr));
    }
}
