object Solution {

    def main(args: Array[String]) {
        val sc = new java.util.Scanner (System.in);
        var s = sc.next();
        //println(s);
        var count =1;
        var len = s.length();
        for( i <- 0 to len-1 ){
            if(s(i)>=65 && s(i)<=90)
                count+=1;
        }
        println(count);
    }
}
