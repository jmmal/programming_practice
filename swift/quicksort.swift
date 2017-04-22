import Foundation

func quicksort(A: inout [Int], lo: Int, hi: Int) -> Void {
    if (lo < hi) {
        let p: Int = partition(A: &A, lo: lo, hi: hi)
        quicksort(A: &A, lo: lo, hi: p)
        quicksort(A: &A, lo: p + 1, hi: hi)
    }
    
}

func partition(A: inout [Int], lo: Int, hi: Int) -> Int {
    let pivot: Int = A[lo]
    var i: Int = lo
    var j: Int = hi
    
    while true {
        while A[i] < pivot {
            i += 1
        }
        
        
        while A[j] > pivot {
            j -= 1
        }
        
        if i >= j {
            return j
        }
        
        let temp: Int = A[i]
        A[i] = A[j]
        A[j] = temp
        i += 1
        j -= 1
    }
}

var arr: [Int] = [1,6,4,7,4,6,43,23,6,6]

print(arr)

quicksort(A: &arr, lo: 0, hi: arr.count - 1)
print(arr)
