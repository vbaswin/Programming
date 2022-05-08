class Me {
    int x;
    Me(int x) {
        this.x = x;
    }
    
}

class map {
    void swap(Me a, Me b) {
        int tmp = a.x;
        a.x = b.x;
        b.x = tmp;
    }
}

class Swap extends map{
    public void chumma (Me c, Me d) {
        swap (c,d);
    }
    public static void main(String[] args) {
        Me c = new Me(7);
        Me d = new Me(22);

        map m = new map();
        Swap s = new Swap();
        s.chumma(c,d);
        System.out.println(c.x);
        System.out.println(d.x);
    }
}
