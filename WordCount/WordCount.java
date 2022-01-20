import java.util.*;
public class WordCount
{
	public static void main(String[] args) {
		HashMap<String, Integer> map = new HashMap<String, Integer>();
		System.out.println("Enter Your Text:");
		Scanner sc = new Scanner(System.in);
		String line = sc.nextLine();
		System.out.println("Enter Word To Search:");
		String searchStr = sc.next();
		String words[] = line.split(" ");

		for (int i = 0; i < words.length; i++)
		{

			int count = 0;
			if (map.get(words[i].toLowerCase()) != null) {
				count = map.get(words[i].toLowerCase());
			}
			count++;
			map.put(words[i].toLowerCase(), count);
		}
		System.out.println("Occurance of " + searchStr + " is " + map.get(searchStr));
	}
}