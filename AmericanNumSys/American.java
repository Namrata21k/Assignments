
import java.util.*;
public class American
{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
                System.out.println("Enter Your Number:");
		String number = sc.next();
		int bPref=0,uPref=0;
		String finalString="";
		String blocks="";
		for(int i=0;i<number.length();i++){
		    int idx = number.length()-i-1;
		    if(uPref==3){
		        bPref++;
		        uPref=0;
		        finalString=American.generateBlockPrefix(bPref)+American.generateBlocks(blocks)+finalString;
		        blocks="";
		    }
		    blocks=number.charAt(idx)+blocks;
		    uPref++;
		}
		if(blocks.length()>0){
		    finalString=American.generateBlocks(blocks)+finalString;
		}
		System.out.println(finalString);
	}
	public static String generateBlocks(String block){
	    String prefix="";
	    int j=0;
	    if(block.length()>=2 && Character.toString(block.charAt(block.length()-2)).equals("1")){
	        prefix=American.getElevenNineteenUnitOrder(block.substring(block.length()-2));
	        j=2;
	    }
	    for(;j<block.length();j++){
	        int _idx = block.length()-j-1;
	        if(j==0 && !Character.toString(block.charAt(_idx)).equals("0")){
	            prefix=American.getFirstOrThirdUnitOrder(Character.getNumericValue(block.charAt(_idx)));
	        }
	        if(j==1 && !Character.toString(block.charAt(_idx)).equals("0")){
	            prefix=American.getSecondUnitOrder(Character.getNumericValue(block.charAt(_idx)))+prefix;
	        }
	        if(j==2 && !Character.toString(block.charAt(_idx)).equals("0")){
	            prefix=American.getFirstOrThirdUnitOrder(Character.getNumericValue(block.charAt(_idx)))+"Hundred "+prefix;
	        }
	    }
	    return prefix;
	}
	public static String getElevenNineteenUnitOrder(String unit){
	    switch(unit){
	        case "10": return "Ten ";
	        case "11": return "Eleven ";
	        case "12": return "Twelve ";
	        case "13": return "Thirteen ";
	        case "14": return "Forteen ";
	        case "15": return "Fifteen ";
	        case "16": return "Sixteen ";
	        case "17": return "Seventeen ";
	        case "18": return "Eighteen ";
	        case "19": return "Nineteen ";
	    }
	    return "";
	}
	public static String getSecondUnitOrder(int unit){
	    switch(unit){
	        case 1: return "One ";
	        case 2: return "Twenty ";
	        case 3: return "Thirty ";
	        case 4: return "Forty ";
	        case 5: return "Fifty ";
	        case 6: return "Sixty ";
	        case 7: return "Seventy ";
	        case 8: return "Eighty ";
	        case 9: return "Ninety ";
	    }
	    return "";
	}
	public static String getFirstOrThirdUnitOrder(int unit){
	    switch(unit){
	        case 1: return "One ";
	        case 2: return "Two ";
	        case 3: return "Three ";
	        case 4: return "Four ";
	        case 5: return "Five ";
	        case 6: return "Six ";
	        case 7: return "Seven ";
	        case 8: return "Eight ";
	        case 9: return "Nine ";
	    }
	    return "";
	}
	public static String generateBlockPrefix(int pref){
	    if(pref==1){
	        return "Thousand ";
	    }
	    if(pref==2){
	        return "Million ";
	    }
	    if(pref==3){
	        return "Billion ";
	    }
	    if(pref==4){
	        return "Trillion ";
	    }
	    if(pref==5){
	        return "Quadrillion ";
	    }
	    if(pref==6){
	        return "Quintillion ";
	    }
	    return "";
	}
}


