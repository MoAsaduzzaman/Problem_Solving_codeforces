//Problem name: 1911C 
//https://codeforces.com/contest/1911/problem/C

import java.util.*

fun main() {
    val scanner = Scanner(System.`in`)
    val n = scanner.nextInt()
    val a = IntArray(n)
    for (i in 0 until n) {
        a[i] = scanner.nextInt()
    }
    a.sort()
    var ans = 0
    for (i in 0 until n step 2) {
        if (a[i] != a[i + 1]) {
            ans += (a[i + 1] - a[i])
        }
    }
    println(ans)
}

