public class LojaLivros {
    
    public static void main(String[] args) {
        
       Livro livroProgramacao = new Livro(null, null, null, null, 0, 0, 0.00);
        Scanner input = new Scanner(System.in);


       System.out.print("Digite o titulo do livro: ");
       // String titulo = input.nextLine();
       livroProgramacao.setTitulo(input.nextLine());
       System.out.println("O título do livro é: \"" + livroProgramacao.getTitulo() + "\"");

       System.out.print("Digite o nome do Autor: ");
       livroProgramacao.setAutor(input.nextLine());
       System.out.println("O nome do Autor é:" + livroProgramacao.getAutor());

       System.out.print("Digite o nome da Editora: ");
       livroProgramacao.setEditora(input.nextLine());
       System.out.println("A Editora é: " + livroProgramacao.getEditora());

       System.out.print("Digite a Isbn: " );
       livroProgramacao.setIsbn(input.nextLine());
       System.out.println("A Isbn é: " + livroProgramacao.getIsbn());
        
       System.out.print("Digite o numero de paginas: ");
       livroProgramacao.setNumeroPaginas(input.nextInt());
       System.out.println("O numero de paginas sao:" + livroProgramacao.getNumeroPaginas());

       System.out.print("Digite o ano do livro: ");
       livroProgramacao.setAnoPublicacao(input.nextInt());
       System.out.println("O ano do livro é:" + livroProgramacao.getAnoPublicacao());

       System.out.print("Digite o valor do livro: ");
       livroProgramacao.setValor(input.nextInt());
       System.out.println("O valor é: " + livroProgramacao.getValor());

        input.close();
    }
}

// System.out.print("O Autor é: " + livroProgramacao.getAutor() + "\n");
      // System.out.printf("O ano do livro é: %d e o valor: %.2f", livroProgramacao.getAnoPublicacao(), livroProgramacao.getValor());
