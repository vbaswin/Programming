import java.util.Scanner;

class transpose {
    static int N = 10;
    static void read_matrix(int r, int c) {
        for (int m = 0; m < r; m++) 
            for (int n = 0; n < c;n++)
                A[m][n] = nextInt(); 
    }
    static void transpose(int A[][], int T[][], int r, int c) {
        for  (int m = 0; m < r; m++)
            for (int n = 0; n < c; n++)
                T[n][m] = A[m][n];
    }
    static void print_matrix(int T[][], int r, int c) {
       for (int m = 0; m < r; m++)
           for (int n = 0; n < c; n++)
               System.out.print(T[n][m] + " ");
            System.out.print("\n");
    }
    public static void main(String arg[]) {
        Scanner s = new Scanner(System.in);
        System.out.println("Enter the rows and colums of matrix: ");
        int r = s.nextInt();
        int c = s.nextInt();
        
        int A[][] = new int[N][N], i, j;
        int T[][] = new int[N][N], i, j;
        read_matrix(r,c);
        transpose(A, r , c);
        print_matrix(T, r , c);
    }
}
