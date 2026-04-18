import java.util.Scanner;
import java.util.ArrayList;
import java.util.Collections;

public class Main {
    public static void main(String[] args){
        ArrayList<Pessoa> lista = new ArrayList<>();

        lista.add(new Pessoa("Luis","Rua 40,2","1999876543"));
        lista.add(new Pessoa("Zé lelé","Rua 42,4","1999875843"));
        lista.add(new Pessoa("Larinha","Rua 80,2","1998876543"));

        for(Pessoa p:lista){
            System.out.println(p);
        }

    }
}
