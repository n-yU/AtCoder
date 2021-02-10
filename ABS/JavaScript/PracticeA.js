function main(input) {
    input = input.split("\n");
    num = input[1].split(" ");
    var a = parseInt(input[0], 10);
    var b = parseInt(num[0], 10);
    var c = parseInt(num[1], 10);
    console.log('%d %s', a+b+c, input[2])
}
main(require('fs').readFileSync('/dev/stdin', 'utf8'));