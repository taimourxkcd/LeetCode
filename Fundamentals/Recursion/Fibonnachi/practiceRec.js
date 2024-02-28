let num = 1;
print1(num)
function print1(n){
  console.log("num1 -> ", n)
  print2(n+1)
  console.log("return num1 -> ", n)
  return
}
function print2(n){
  console.log("num2 -> ", n)
  print3(n+1)
  console.log("return num2 -> ", n)
  return
}
function print3(n){
  console.log("num3 -> ", n)
  print4(n+1)
  console.log("return num3 -> ", n)
  return
}
function print4(n){
  console.log("num4 -> ", n)
  return
}
