public class Principal {
    public static void main (String[] args){
        ContaBancaria contaPF = new ContaBancaria();
        ContaBancaria contapF = new ContaBancaria();
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

