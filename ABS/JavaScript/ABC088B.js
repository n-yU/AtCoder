function main(input) {
    const args = input.split('\n');
    const N = parseInt(args[0], 10);
    const as = args[1].split(' ').map((n) => parseInt(n, 10));

    var alice=0, bob=0;

    as.sort((x,y) => (x<y ? 1: -1)).forEach((n,i) => {
        (i%2 === 0) ? alice+=n : bob+=n;
    });

    console.log(alice-bob);
 }
 
 main(require('fs').readFileSync('/dev/stdin', 'utf8'));