package principal;

import acervo.Livro;

import java.util.Scanner;

public class LojaLivros {
   public static void main(String[] args) {
      Livro livroProgramacao = new Livro(null, null, null, null, 0, 0, 0.00);
      Scanner input = new Scanner(System.in);

      int op;
      String continuar;

      // while(continuar.equals("sim")) {
      do{
         System.out.println("Menu de Opções");
         System.out.println("1. Cadastrar infos");
         System.out.println("2. Consultar estoque");
         System.out.println("3. Consultar Desempenho");
         System.out.println("4. Sair");
         System.out.println("Digite uma opção: ");
         op = input.nextInt();
         input.nextLine();

         switch (op) {
            case 1:
               System.out.print("Digite o titulo do livro: ");
               livroProgramacao.setTitulo(input.nextLine());
               System.out.print("Digite o nome do Autor: ");
               livroProgramacao.setAutor(input.nextLine());
               System.out.print("Digite o nome da Editora: ");
               livroProgramacao.setEditora(input.nextLine());
               System.out.print("Digite a Isbn: ");
               livroProgramacao.setIsbn(input.nextLine());
               System.out.print("Digite o numero de paginas: ");
               livroProgramacao.setNumeroPaginas(input.nextInt());
               System.out.print("Digite o ano do livro: ");
               livroProgramacao.setAnoPublicacao(input.nextInt());
               System.out.print("Digite o valor do livro: ");
               livroProgramacao.setValor(input.nextInt());
               System.out.println("O valor é: " + livroProgramacao.getValor());
               break;
            case 2:
               livroProgramacao.setEstoque(0);
               System.out.println("\nQuantidade de livros em estoque " + livroProgramacao.consultarEstoque());
               break;
            case 3:
               System.out.println("\nO seu desempenho foi: " + livroProgramacao.calcularBonusCorporativo() + "\nE o seu bonus e: " + livroProgramacao.getBonusAtivo());
               break;
            case 4:
               System.exit(0);
               break;
            default:
               System.out.println("Opção inválida. Digite outra opção!");
         }
         System.out.print("Deseja Continuar (sim/nao)?: ");
         continuar = input.next();
      } while (continuar.equals("sim"));

      System.out.println("\nFIM DO PROGRAMA!");
      input.close();
   }
}
