function main(input) {
    const args = input.split('\n');
    const N = args[0];
    const ds = args.slice(1, args.length-1);

    console.log(ds.filter((n,i) => ds.indexOf(n)===i).length);
 }
 
 main(require('fs').readFileSync('/dev/stdin', 'utf8'));