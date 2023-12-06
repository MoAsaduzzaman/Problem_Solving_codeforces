//Problem name: 1911B 
//https://codeforces.com/contest/1911/problem/B

import java.util.Scanner

fun main() {
    val input = Scanner(System.`in`)
    val n = input.nextInt()
    val s = input.next()
    var j = 2
    var i = 0
    while (i < n) {
        print(s[i])
        i += j
        j++
    }
    println()
}