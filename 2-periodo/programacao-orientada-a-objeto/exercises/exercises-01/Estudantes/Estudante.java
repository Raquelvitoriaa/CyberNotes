public class Estudante {
  String nome;
  String matricula;
  String curso;
  int idade;
  double notaMedia;

  public void registrarNota(double valor) {
    notaMedia = valor;
  }

  public String verificarSituacao() {
    if (notaMedia >= 7) {
      return "Aprovado";
    } else {
      return "Reprovado";
    }
  }
}
