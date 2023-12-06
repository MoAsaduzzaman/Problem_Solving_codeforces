//Problem name: 1911F 
//https://codeforces.com/contest/1911/problem/F

import java.util.*

fun main() {
    val scanner = Scanner(System.`in`)
    val n = scanner.nextInt()
    val v = IntArray(n)
    for (i in 0 until n) {
        v[i] = scanner.nextInt()
    }
    v.sort()
    var prev = 0
    var cnt = 0
    for (now in v) {
        if (now - 1 > prev) {
            cnt++
            prev = now - 1
        } else if (now - 1 == prev) {
            cnt++
            prev = now
        } else if (now == prev) {
            prev = now + 1
            cnt++
        }
    }
    println(cnt)
}

