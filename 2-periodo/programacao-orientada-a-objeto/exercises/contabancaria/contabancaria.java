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

---

    public class ContaBancaria {
    int numConta, agencia;
    String titular, tipoConta;
    double saldo = 0.00;
    final double TAXA_MANUTENCAO_CONTA = 5.00;

    public ContaBancaria(int numConta, int agencia, String titular, String tipoConta, double saldo){

        this.numConta = numConta;
        this.agencia = agencia;
        this.titular = titular;
        this.tipoConta = tipoConta;
        this.saldo = 0.00;
    }

    public void depositar(double valor){
        saldo += valor;
    }

    public void sacar(double valor){
        saldo -= valor;
    }

     public double consultarSaldo(){
        saldo = saldo - TAXA_MANUTENCAO_CONTA;
        return saldo;
    }
}

---

    public class ContaBancaria {
    private int numConta, agencia;
    public String titular, tipoConta;
    protected double saldo = 0.00;
    public final double TAXA_MANUTENCAO_CONTA = 5.00;

    public ContaBancaria(int numConta, int agencia, String titular, String tipoConta, double saldo){

        this.numConta = numConta;
        this.agencia = agencia;
        this.titular = titular;
        this.tipoConta = tipoConta;
        this.saldo = 0.00;
    }

    public int getNumConta(){
        return numConta;
    }

    public void setNunConta(int numConta){
        this.numConta = numConta;
    }

    public void depositar(double valor){
        saldo += valor;
    }

    public void sacar(double valor){
        saldo -= valor;
    }

    public double consultarSaldo(){
        saldo = saldo - TAXA_MANUTENCAO_CONTA;
        return saldo;
    }
}

