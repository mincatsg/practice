public class Sushu1 {
    public static void main(String args[]) {
        int i;
        for (int num = 100; num <= 200; num++) {
            for (i = 2; i <= (num / 2); i++) {
                if (num % i == 0) {
                    break;
                }
            }
            if (i > (num / 2)) {
                System.out.println(num + "是素数\n");
            }
        }
    }
}