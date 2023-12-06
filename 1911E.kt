//Problem name: 1911E 
//https://codeforces.com/contest/1911/problem/E

import java.util.*

fun main(args: Array<String>) {
    val (n, k) = readLine()!!.split(" ").map { it.toInt() }
    val result = solve(n, k)
    if (result.isEmpty()) {
        println("NO")
    } else {
        println("YES")
        println(result.joinToString(" "))
    }
}

fun solve(n: Int, k: Int): List<Int> {
    val powers = PriorityQueue<Int>(compareByDescending { it })
    var sum = 0
    for (i in 30 downTo 0) {
        val power = 1 shl i
        if (n and power != 0) {
            powers.add(power)
            sum += power
        }
    }
    if (powers.size > k || sum < n) {
        return emptyList()
    }
    while (powers.size < k) {
        val top = powers.poll()
        if (top == 1) {
            return emptyList()
        }
        powers.add(top / 2)
        powers.add(top / 2)
    }
    return powers.toList()
}
