public class Principal {
    public static void main (String[] args){
        ContaBancaria contaPF = new ContaBancaria();
        ContaBancaria contaPj = new ContaBancaria();

        contaPF.numConta = 265486;
        contaPF.agencia = 105;
        contaPF.titular = "Eduardo da Silva";
        contaPF.tipoConta = "Pessoa Fisica";

        contaPF.depositar(500.00);
        contaPF.sacar(50.00);

        contaPj.numConta = 632659;
        contaPj.agencia = 658;
        contaPj.titular = "Padaria O Sonho";
        contaPj.tipoConta = "Pessoa Juridica";

        contaPj.depositar(500.00);
        contaPj.sacar(50.00);
    }
}

---

    public class Principal {
    public static void main (String[] args){
        ContaBancaria contaPF = new ContaBancaria(00000, 658, null, null);
        ContaBancaria contaPj = new ContaBancaria(00000, 658, null, null);

        //Criando informações de um objeto pessoal física
        contaPF.numConta = 265486;
        contaPF.titular = "Eduardo da Silva";
        contaPF.tipoConta = "Pessoa Fisica";

        contaPF.depositar(500.00);
        contaPF.sacar(50.00);
        
       // Criando informações de  um objeto pessoa juridica
        contaPj.numConta = 632659;
        contaPj.titular = "Padaria O Sonho";
        contaPj.tipoConta = "Pessoa Juridica";

        contaPj.depositar(500.00);
        contaPj.sacar(50.00);
        
        // Converter um valor double para um valor inteiro
        double total = 250.35;
        int totalConvertido = (int) total;
        
        //Converter um valor de string para um valor inteiro
        String idade = "25";
        int idadeConvertida = Integer.parseInt(idade);
        
        //Converter um valor boolean para String
        boolean aceita = true;
        String aceitaConvertido = String.valueOf(aceita);
    }
}

