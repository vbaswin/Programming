/*
 Program name: Calculate the area of different shapes using method overloading
 Rollno: 222
 Authur name: Aswin V B
*/

class area {
    void area(float x) {
        float a = x * x;
        System.out.println("Area of square: " + a);
    }
    void area(double x) {
        double a = 3.14 * x * x;
        System.out.println("Area of circle: " + a);
    }
    void area(int x, int y) {
        int a = x * y;
        System.out.println("Area of rectangle: " + a);
    }
}

class main {
    public static void main(String[] args) {
        area hi = new area();

        hi.area(7);
        hi.area(22.5);
        hi.area(5, 4);
    }
}
