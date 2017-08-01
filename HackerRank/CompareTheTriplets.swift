import Foundation

// Enter your code here 
let one = readLine()!.components(separatedBy: " ")
let two = readLine()!.components(separatedBy: " ")

let alice = one.map { Int($0)!}
let bob = two.map { Int($0)! }

var a = 0;
var b = 0;

for i in 0...2 {
  if alice[i] > bob[i] { a += 1 } 
  else if alice[i] < bob[i] { b += 1 }
}

print("\(a) \(b)")
