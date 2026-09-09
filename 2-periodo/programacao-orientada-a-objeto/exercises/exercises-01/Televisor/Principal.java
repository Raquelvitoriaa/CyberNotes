public class Principal {
  public static void main(String[] args) {
    
Televisor tv1 = new Televisor();
Televisor tv2 = new Televisor();

tv1.marca = "Samsung";
tv1.polegada = 50;
tv1.volume = 20;
tv1.canalAtual = 5;
tv1.ligada = false;

tv2.marca = "LG";
tv2.polegada = 43;
tv2.volume = 15;
tv2.canalAtual = 10;
tv2.ligada = false;

tv1.ligar();
tv1.trocarCanal(8);

tv2.ligar();
tv2.trocarCanal(12);
}
}
