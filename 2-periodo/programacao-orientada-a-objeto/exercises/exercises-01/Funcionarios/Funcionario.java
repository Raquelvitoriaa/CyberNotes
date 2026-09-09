public class Funcionario {
    
    String nome;
    String cpf;
    String cargo;
    double salarioMensal;
    String departamento;

    public Funcionario(String nome, String cpf, String cargo, String departamento, double salarioMensal) {

        this.nome = nome;
        this.cpf = cpf;
        this.cargo = cargo;
        this.departamento = departamento;
        this.salarioMensal = salarioMensal;
    }
        
     public double calcularSalarioAnual() {
         double anual = salarioMensal * 12;
        return anual;
    }
    
    public void  aplicarAumento(double percentual) {
        double aumento = salarioMensal * (percentual / 100);
        salarioMensal += aumento;
    }

}
