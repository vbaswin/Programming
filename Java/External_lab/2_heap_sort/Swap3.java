class Swap3 {
    public static void swap(int a, int b) {
        int tmp = a;
        a = b;
        b = tmp;
    }
    public static void main(String args[]) {
        int a = 5;
        int b = 10;
        swap(a, b);
        System.out.println(a + " " + b); 
    }
}
