package principal;

public class ExemplosRepeticao {
    public static void main(String[] args) {
        System.out.println("Contador incremental");
        for (int i = 1; i <= 10; i++){
            if (i % 2 == 0) {
                continue;
            }
            System.out.println("Contando " + i);
        }

        System.out.println("\nContador decremental");
        for (int x=10; x>= 1; x--){
            System.out.println("contando " + x);
        }
    }
}
