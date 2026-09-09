public class Principal {
    public static void main (String[] args) {
        
        Funcionario func1 = new Funcionario();
        Funcionario func2 = new Funcionario();
            
        func1.nome = "Raquel Vitoria";
        func1.cpf = "123.456.789-00";
        func1.cargo = "Analista de Sistemas";
        func1.salarioMensal = 3000.00;
        func1.departamento = "Tecnologia";

        func1.Nome = "Lana Silva";
        func1.cpf = "987.654.321-00";
        func1.cargo = "Assistente";
        func1.salarioMensal = 2500.00;
        func1.departamento = "Administrativo";

        func1.aplicarAumento(10);
        func2.aplicarAumento(5);

        System.out.println(func1.nome + " recebe R$ "
                           + func1.calcularSalarioAnual()
                           + " por ano.");

        System.out.println(func2.nome + " recebe R$ "
                           + func2.calcularSalarioAnual()
                           + "por ano.");
    }
}
