import java.util.StringTokenizer

fun main() {
  val br = System.`in`.bufferedReader()

  val nums = br.readLine().split(" ").map { it.toLong() }
  var answer = nums[0] + nums[1]

  println(answer)
}