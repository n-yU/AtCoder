function main(input) {
    const args = input.split(' ');
    const N=parseInt(args[0], 10), A=parseInt(args[1], 10), B=parseInt(args[2], 10);

    const sums = Array.from(new Array(N), (x, i) => ++i).filter((i) => {
        var n = i.toString().split('').reduce((y, z) => y + parseInt(z), 0);
        return (n>=A && n<=B);
    });

    console.log(sums.reduce((y, z) => y + z, 0));
 }
 
 main(require('fs').readFileSync('/dev/stdin', 'utf8'));