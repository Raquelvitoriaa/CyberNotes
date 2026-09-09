public class Televisor {

  String marca;
  int polegada;
  int volume;
  int canalAtual;
  boolean ligada;

  public void ligar() {
    ligada = true;
    System.out.println("Televisor ligado.");
  }

  public void trocarCanal(int novoCanal) {
    if (ligada) {
      canalAtual = novoCanal;
      System.out.println("Canal alterado para " + canalAtual);
    } else {
      System.out.println("Nao e possivel trocar o canal. A TV esta desligada.");
    }
  }
}
