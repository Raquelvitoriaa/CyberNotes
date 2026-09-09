public class Principal {
  public static void main (String[] args){

    Estudante estudante1 = new Estudante();
    Estudante estudante2 = new Estudante();

    estudante1.nome = "Raquel";
    estudante1.matricula = "2026001";
    estudante.curso = "ADS";
    estudante1.idade = 20;
    estudante1.registrarNota(8.5);

    estudante2.nome = "Sienna";
    estudante2.matricula = "2026002";
    estudante2.curso = "Administracao";
    estudante2.idade = 21;
    estudante2.registrarNota(5.5);

    System.out.println(estudante1.nome + ": "
                       + estudante1.verificarSituacao());

    System.out.println(estudante2.nome + ": "
                       + estudante2.verificarSituacao());
    
  }
}
