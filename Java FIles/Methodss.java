public class Methodss {
    static int plusmethod(int x, int y) {
        return x + y;
    }

    static String plusmethod(String x, String y) {
        return x + y;
    }

    public static void main(String[] args) {
        int myNum = plusmethod(6, 9);
        String myTex = plusmethod("six","nine");
        System.out.println(myNum);
        System.out.println(myTex);
    }
}
