//Problem name: 1911A 
//https://codeforces.com/contest/1911/problem/A

import java.util.*

fun main() {
    val scanner = Scanner(System.`in`)
    val t = scanner.nextInt()
    repeat(t) {
        val n = scanner.nextInt()
        val a = IntArray(n)
        var ans = false
        for (i in 0 until n) {
            a[i] = scanner.nextInt()
        }
        for (i in 1 until n - 1) {
            if (a[i] != a[i - 1] && a[i] != a[i + 1]) {
                println(i + 1)
                ans = true
            }
        }
        if (!ans) {
            if (a[0] == a[1]) {
                println(n)
            } else {
                println(1)
            }
        }
    }
}

