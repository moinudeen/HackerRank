object mars  {
	def main(args: Array[String]){
		var sc = new java.util.Scanner(System.in);
		var s = sc.next();
		var count=0;
		for( i <- 0 to s.length-1) {
			 if((s(i)== 'S')||(s(i)=='O')){ 
			 }else{
			 	count+=1;
			 } 	
		}
		print(count);
	}
}