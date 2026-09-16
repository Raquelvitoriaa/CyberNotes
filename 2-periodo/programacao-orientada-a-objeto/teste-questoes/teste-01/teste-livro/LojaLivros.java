package principal;

import acervo.Livro;

import java.util.Scanner;

public class LojaLivros {
    public static void main(String[] args) {
       Livro livroProgramacao = new Livro(null, null, null, null, 0, 0, 0.00);
        Scanner input = new Scanner(System.in);

        int op;

        System.out.println("Menu de Opções");
        System.out.println("1. Cadastrar infos");
        System.out.println("2. Consultar estoque");
        System.out.println("3. Consultar Desempenho");
        System.out.println("4. Sair");
        System.out.println("Digite uma opção: ");
        op = input.nextInt();

       switch (op){
          case 1:
             System.out.print("Digite o titulo do livro: ");
             livroProgramacao.setTitulo(input.nextLine());
             System.out.print("Digite o nome do Autor: ");
             livroProgramacao.setAutor(input.nextLine());
             System.out.print("Digite o nome da Editora: ");
             livroProgramacao.setEditora(input.nextLine());
             System.out.print("Digite a Isbn: " );
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
             break;
          default:
             System.out.println("Opção inválida. Digite outra opção!");
       }
        System.out.println("\nFIM DO PROGRAMA!");
       input.close();
    }
}



/* System.out.print("Digite o titulo do livro: ");
       // String titulo = input.nextLine();
       livroProgramacao.setTitulo(input.nextLine());
       //System.out.println("O título do livro é: \"" + livroProgramacao.getTitulo() + "\"");

       System.out.print("Digite o nome do Autor: ");
       livroProgramacao.setAutor(input.nextLine());
       //System.out.println("O nome do Autor é:" + livroProgramacao.getAutor());

       System.out.print("Digite o nome da Editora: ");
       livroProgramacao.setEditora(input.nextLine());
       //System.out.println("A Editora é: " + livroProgramacao.getEditora());

       System.out.print("Digite a Isbn: " );
       livroProgramacao.setIsbn(input.nextLine());
       //System.out.println("A Isbn é: " + livroProgramacao.getIsbn());

       System.out.print("Digite o numero de paginas: ");
       livroProgramacao.setNumeroPaginas(input.nextInt());
       //System.out.println("O numero de paginas sao:" + livroProgramacao.getNumeroPaginas());

       System.out.print("Digite o ano do livro: ");
       livroProgramacao.setAnoPublicacao(input.nextInt());
       //System.out.println("O ano do livro é:" + livroProgramacao.getAnoPublicacao());

       System.out.print("Digite o valor do livro: ");
       livroProgramacao.setValor(input.nextInt());
       //System.out.println("O valor é: " + livroProgramacao.getValor());

       // System.out.print("O Autor é: " + livroProgramacao.getAutor() + "\n");
      // System.out.printf("O ano do livro é: %d e o valor: %.2f", livroProgramacao.getAnoPublicacao(), livroProgramacao.getValor());

       //System.out.print("Digite a quantidade de livros em estoque: ");
       livroProgramacao.setEstoque(100);
       System.out.println("\nQuantidade de livros em estoque " + livroProgramacao.consultarEstoque());

       System.out.print("Digite o total de vendas diarias: ");
       livroProgramacao.setVendasDiarias(input.nextInt());

       System.out.println("\nO seu desempenho foi: " + livroProgramacao.calcularBonusCorporativo() + "\nE o seu bonus e: " + livroProgramacao.getBonusAtivo());

       input.close();
    }
}
*/
