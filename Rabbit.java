public class Rabbit {
    public static void main(String args[]){
        int number = 30;
        int sum1 = 1;
        int sum2 = 1;
        int cut = 0;
        for(int i = 3; i <= number; i++){
            cut = sum1 + sum2;
            sum1 = sum2;
            sum2 = cut;
        }
        System.out.println(cut);
        }
}
