public class Threads {
    public static void main(String args[]) {

        // random number between 0 and 100
        double a = Math.random()*100;

        double b = (Math.random()*20)+10;

        System.out.println(a);
        System.out.println(b);
        // square root
        System.out.println(Math.sqrt(a));
        // max
        System.out.println(Math.max(a,b));
        // min
        System.out.println(Math.min(a,b));
        // pow
        System.out.println(Math.pow(a,b));
        System.out.println();

        int max = 10;
        int min = 1;
        int range = max - min +1;
        for (int i = 0; i< 10; ++i) {
            int k = (int)(Math.random()*range)+min;
            System.out.println(k);
        }
    }
}
