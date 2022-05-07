import java.io.*;
class Sample
{
    public static void main(String args[])throws Exception
    {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String input  = br.readLine();
        String in[] = input.split(" ");
        int min = in[0].length();
        for(String i: in){
            min = min<i.length()? min : i.length();
        }
        System.out.println(min);
    }
}
