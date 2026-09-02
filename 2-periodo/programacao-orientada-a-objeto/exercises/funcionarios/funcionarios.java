public class Funcionarios(){

    String nome, cpf, cargo, departamento;
    double salarioMensal;

    public Funcionarios (String nome, String cpf, String cargo, String departamento, double salarioMensal){

        this.nome = nome;
        this.cpf = cpf;
        this.cargo = cargo;
        this.departamento = departamento;
        this.salarioMensal;
    }
    
    public void  aplicarAumento(double percentual){
        salarioMensal += salarioMensal * (percentual / 100);
    }

    public double calcularSalarioAnual(){
        salarioMensal * 12;
        return salarioMensal;
    }

}
