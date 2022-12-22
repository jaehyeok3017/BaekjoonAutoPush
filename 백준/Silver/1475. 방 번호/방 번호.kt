package solved.silver.solved

import java.util.*

fun main() {
    val sc : Scanner = Scanner(System.`in`)

    var n = sc.nextInt()
    var arr = Array(10, {0})
    
    while(n > 0){
        var x = n % 10

        if(x == 6 || x == 9){
            if(arr[6] > arr[9]) arr[9]++
            else if(arr[9] > arr[6]) arr[6]++
            else if(arr[9] == arr[6]) arr[x]++
        }
        else arr[x]++

        n /= 10
    }

    var sum = 0
    for(i in 0..9){
        if(arr[i] > sum) sum = arr[i]
    }

    print(sum)
}