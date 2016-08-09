object Solution {

    def main(args: Array[String]) {
        val sc = new java.util.Scanner (System.in);
        var n = sc.nextInt();
        var B = sc.next();
        var count =0;
        while(B.contains("010")){
            B.replaceFirst("010","111");
            count+=1;
        }
        print(count);
    }
}
