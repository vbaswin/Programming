class Me {
    int n;
    Me(int n) {
        this.n = n;
    }
}

class Wrapper {
    Me m;
    Wrapper(Me m) {
        this.m = m;
    }
}
class Swap2 {
    public static void swap(Wrapper a, Wrapper b) {
        Me tmp = a.m;
        a.m = b.m;
        b.m = tmp;
    }
    public static void main(String[] args) {
        Me c = new Me(9);
        Me d = new Me(10);

        Wrapper m1 = new Wrapper(c);
        Wrapper m2 = new Wrapper(d);
        swap(m1, m2);
        System.out.println(m1.m.n);
        System.out.println(m2.m.n);
    }
}
