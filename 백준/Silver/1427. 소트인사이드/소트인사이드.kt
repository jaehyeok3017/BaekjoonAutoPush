package solved.silver.solved

import java.util.*

fun main() {
    val sc : Scanner = Scanner(System.`in`)
    var n = sc.nextInt()

    var arr = mutableListOf<Int>()
    var i = 0

    while(n > 10){
        var x = n % 10
        arr.add(x)

        n /= 10
        i++
    }

    arr.add(n)
    arr.sortDescending()

    for(j in 0..i){
        print(arr[j])
    }
}