fun main() {
  val br = System.`in`.bufferedReader()
  val nums = br.readLine().split(" ").map() { it.toLong() }
  
  var H = nums[0]
  var M = nums[1] - 45

  if (M < 0) {
    H--
    M += 60
  }

  if (H < 0) {
    H += 24
  }

  println(H.toString() + " " + M.toString())
}