class MathUtils {
    public static final double squareRoot(double num) {
        return Math.sqrt(num);
    }

    public static final double logarithm(double num, double base) {
        return Math.log(num) / Math.log(base);
    }
}

public class FinalTask {
    public static void main(String[] args) {
        System.out.println(MathUtils.squareRoot(64));
        System.out.println(MathUtils.logarithm(100, 10));
    }
}
