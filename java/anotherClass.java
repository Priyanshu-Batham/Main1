class anotherClass {
    public static void main(String[] args) {
        String str = "hello";
        change(str);
        System.out.println(str);               
    }

    static void change(String str){
        str = "hey";
    }
}