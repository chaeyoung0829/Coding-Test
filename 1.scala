object Gugudan {
  def main(args: Array[String]): Unit = {
    for (i <- 1 to 9) {  // 1부터 9단까지
      for (j <- 1 to 9) {  // 각 단에서 1부터 9까지 곱함
        print(s"$i * $j = ${i * j}\t")  // 출력 포맷
      }
      println()  // 각 단이 끝날 때 줄바꿈
    }
  }
}










