public class ContaBancaria {
    int numConta, agencia;
    String titular, tipoConta;
    double saldo = 0.00;
    final double TAXA_MANUTENCAO_CONTA = 5.00;

    public void depositar(double valor){
        saldo += valor;
    }

    public void sacar(double valor){
        saldo -= valor;
    }
}

